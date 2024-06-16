#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wczytajUzytkownikow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wczytajUzytkownikow() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku users.txt!";
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 2) {
            QString login = fields[0];
            QString haslo = fields[1];
            uzytkownicy.append(Uzytkownik(login, haslo));
        }
    }
    file.close();
}

void MainWindow::zapiszUzytkownikow() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/users.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku users.txt!";
        return;
    }
    QTextStream out(&file);
    for (const auto& uzytkownik : uzytkownicy) {
        out << uzytkownik.login << " " << uzytkownik.haslo << "\n";
    }
    file.close();
}

void MainWindow::on_pushButton_Logowanie_clicked() {
    QString login = ui->lineEdit_Login->text();
    QString haslo = ui->lineEdit_Haslo->text();

    // Sprawdzenie, czy zalogowano się jako admin
    if (login == "admin" && haslo == "admin123") {
        adminmenu = new AdminMenu(this);
        adminmenu->show();
        this->hide();
        return;
    }

    // Sprawdzenie innych użytkowników
    for (const auto& uzytkownik : uzytkownicy) {
        if (uzytkownik.login == login && uzytkownik.haslo == haslo) {
            usermenu = new UserMenu(this, login);  // Przekazujemy login użytkownika
            usermenu->show();
            this->hide();
            return;
        }
    }
    QMessageBox::warning(this, "Logowanie", "Nieprawidłowy login lub hasło!");
}

void MainWindow::on_pushButton_ZalozKonto_clicked() {
    QString login = ui->lineEdit_Login_new->text();
    QString haslo = ui->lineEdit_Haslo_new->text();
    QString powtorzHaslo = ui->lineEdit_PowtorzHaslo_new->text();

    // Dodanie sprawdzenia, czy login i hasło zawierają znaki
    if (login.isEmpty() || haslo.isEmpty()) {
        QMessageBox::warning(this, "Rejestracja", "Login i hasło nie mogą być puste!");
        return;
    }

    if (haslo != powtorzHaslo) {
        QMessageBox::warning(this, "Rejestracja", "Hasła nie są takie same!");
        return;
    }

    for (const auto& uzytkownik : uzytkownicy) {
        if (uzytkownik.login == login) {
            QMessageBox::warning(this, "Rejestracja", "Login jest już zajęty!");
            return;
        }
    }

    if (login == "admin") {
        QMessageBox::warning(this, "Rejestracja", "Nie można użyć tego loginu!");
        return;
    }

    uzytkownicy.append(Uzytkownik(login, haslo));
    zapiszUzytkownikow();
    QMessageBox::information(this, "Rejestracja", "Rejestracja zakończona sukcesem!");
    usermenu = new UserMenu(this, login);  // Przekazujemy login użytkownika
    usermenu->show();
    this->hide();
}



