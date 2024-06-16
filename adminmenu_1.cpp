#include "adminmenu_1.h"
#include "ui_adminmenu_1.h"
#include "mainwindow.h"
#include "adminmenu.h"
#include <QFile>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_a1;
AdminMenu *adminmenu_a1;

AdminMenu_1::AdminMenu_1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminMenu_1)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AdminMenu_1::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelUzytkownicy = new QStandardItemModel(this);
    modelUzytkownicy->setColumnCount(2);
    modelUzytkownicy->setHeaderData(0, Qt::Horizontal, "Login");
    modelUzytkownicy->setHeaderData(1, Qt::Horizontal, "Hasło");

    ui->tableView_BazaUzytkownikow->setModel(modelUzytkownicy);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_BazaUzytkownikow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie użytkowników z pliku
    wczytajUzytkownikow();
}

AdminMenu_1::~AdminMenu_1()
{
    delete ui;
}

void AdminMenu_1::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void AdminMenu_1::wczytajUzytkownikow()
{
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
            QList<QStandardItem *> items;
            QStandardItem *loginItem = new QStandardItem(fields[0]);
            QStandardItem *hasloItem = new QStandardItem(fields[1]);
            loginItem->setFlags(loginItem->flags() & ~Qt::ItemIsEditable); // Ustawienie jako nieedytowalny
            hasloItem->setFlags(hasloItem->flags() & ~Qt::ItemIsEditable); // Ustawienie jako nieedytowalny
            items.append(loginItem);
            items.append(hasloItem);
            modelUzytkownicy->appendRow(items);
        }
    }
    file.close();
}

void AdminMenu_1::zapiszUzytkownikow()
{
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/users.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku users.txt!";
        return;
    }
    QTextStream out(&file);
    for (int row = 0; row < modelUzytkownicy->rowCount(); ++row) {
        QString login = modelUzytkownicy->item(row, 0)->text();
        QString haslo = modelUzytkownicy->item(row, 1)->text();
        out << login << " " << haslo << "\n";
    }
    file.close();
}

bool AdminMenu_1::czyUzytkownikMaRezerwacje(const QString &login)
{
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return false;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 6 && fields[0] == login) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void AdminMenu_1::on_pushButton_a1_DodajUzytkownika_clicked()
{
    QString login = ui->lineEdit_a1_Login->text();
    QString haslo = ui->lineEdit_a1_Haslo->text();
    QString powtorzHaslo = ui->lineEdit_a1_PowtorzHaslo->text();

    // Dodanie sprawdzenia, czy login i hasło zawierają znaki
    if (login.isEmpty() || haslo.isEmpty()) {
        QMessageBox::warning(this, "Rejestracja", "Login i hasło nie mogą być puste!");
        return;
    }

    if (haslo != powtorzHaslo) {
        QMessageBox::warning(this, "Rejestracja", "Hasła nie są takie same!");
        return;
    }

    for (int row = 0; row < modelUzytkownicy->rowCount(); ++row) {
        QString storedLogin = modelUzytkownicy->item(row, 0)->text();
        if (storedLogin == login) {
            QMessageBox::warning(this, "Rejestracja", "Login jest już zajęty!");
            return;
        }
    }

    if (login == "admin") {
        QMessageBox::warning(this, "Rejestracja", "Nie można użyć tego loginu!");
        return;
    }

    QList<QStandardItem *> items;
    QStandardItem *loginItem = new QStandardItem(login);
    QStandardItem *hasloItem = new QStandardItem(haslo);
    loginItem->setFlags(loginItem->flags() & ~Qt::ItemIsEditable); // Ustawienie jako nieedytowalny
    hasloItem->setFlags(hasloItem->flags() & ~Qt::ItemIsEditable); // Ustawienie jako nieedytowalny
    items.append(loginItem);
    items.append(hasloItem);
    modelUzytkownicy->appendRow(items);
    zapiszUzytkownikow();
    QMessageBox::information(this, "Rejestracja", "Dodawanie użytkownika zakończone sukcesem!");
}

void AdminMenu_1::on_pushButton_a1_UsunUzytkownika_clicked()
{
    QString loginUsun = ui->lineEdit_a1_LoginUsun->text();
    bool found = false;

    if (czyUzytkownikMaRezerwacje(loginUsun)) {
        QMessageBox::warning(this, "Błąd", "Nie można usunąć użytkownika, który ma aktualne rezerwacje.");
        return;
    }

    for (int row = 0; row < modelUzytkownicy->rowCount(); ++row) {
        QString storedLogin = modelUzytkownicy->item(row, 0)->text();
        if (storedLogin == loginUsun) {
            modelUzytkownicy->removeRow(row);
            zapiszUzytkownikow();
            QMessageBox::information(this, "Usuwanie", "Użytkownik został usunięty.");
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Usuwanie", "Nie znaleziono użytkownika o podanym loginie.");
    }
}

void AdminMenu_1::on_pushButton_a1_SprawdzRezerwacja_clicked()
{
    QString loginRezerwacje = ui->lineEdit_a1_LoginRezerwacja->text();
    if (loginRezerwacje.isEmpty()) {
        QMessageBox::warning(this, "Błąd", "Proszę podać login użytkownika.");
        return;
    }

    if (!czyUzytkownikMaRezerwacje(loginRezerwacje)) {
        QMessageBox::warning(this, "Błąd", "Użytkownik nie ma aktualnych rezerwacji.");
        return;
    }

    hide();
    adminmenu_a11 = new adminmenu_11(this, loginRezerwacje); // Przekazujemy login do adminmenu_11
    adminmenu_a11->show();
}

void AdminMenu_1::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_a1 = new MainWindow(this);
    mainwindow_a1->show();
}

void AdminMenu_1::on_pushButton_Wstecz_clicked()
{
    hide();
    adminmenu_a1 = new AdminMenu(this);
    adminmenu_a1->show();
}





