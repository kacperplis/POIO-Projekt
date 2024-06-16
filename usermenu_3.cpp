#include "usermenu_3.h"
#include "ui_usermenu_3.h"
#include "mainwindow.h"
#include "usermenu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_u3;
UserMenu *usermenu_u3;

UserMenu_3::UserMenu_3(QWidget *parent, const QString &userLogin)
    : QDialog(parent)
    , ui(new Ui::UserMenu_3)
    , userLogin(userLogin)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UserMenu_3::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelHistoria = new QStandardItemModel(this);
    modelHistoria->setColumnCount(7);
    modelHistoria->setHeaderData(0, Qt::Horizontal, "ID Samochodu");
    modelHistoria->setHeaderData(1, Qt::Horizontal, "Marka");
    modelHistoria->setHeaderData(2, Qt::Horizontal, "Model");
    modelHistoria->setHeaderData(3, Qt::Horizontal, "Data Rozpoczęcia");
    modelHistoria->setHeaderData(4, Qt::Horizontal, "Data Zakończenia");
    modelHistoria->setHeaderData(5, Qt::Horizontal, "Cena");
    modelHistoria->setHeaderData(6, Qt::Horizontal, "Metoda Płatności");

    ui->tableView_HistoriaTransakcji->setModel(modelHistoria);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_HistoriaTransakcji->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie historii transakcji z pliku
    wczytajHistorieTransakcji();
}

UserMenu_3::~UserMenu_3()
{
    delete ui;
}

void UserMenu_3::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void UserMenu_3::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_u3 = new MainWindow(this);
    mainwindow_u3->show();
}

void UserMenu_3::on_pushButton_Wstecz_clicked()
{
    hide();
    usermenu_u3 = new UserMenu(this, userLogin);  // Tworzymy obiekt UserMenu z loginem
    usermenu_u3->show();
}

void UserMenu_3::wczytajHistorieTransakcji() {
    modelHistoria->clear();
    modelHistoria->setColumnCount(7);
    modelHistoria->setHeaderData(0, Qt::Horizontal, "ID Samochodu");
    modelHistoria->setHeaderData(1, Qt::Horizontal, "Marka");
    modelHistoria->setHeaderData(2, Qt::Horizontal, "Model");
    modelHistoria->setHeaderData(3, Qt::Horizontal, "Data Rozpoczęcia");
    modelHistoria->setHeaderData(4, Qt::Horizontal, "Data Zakończenia");
    modelHistoria->setHeaderData(5, Qt::Horizontal, "Cena");
    modelHistoria->setHeaderData(6, Qt::Horizontal, "Metoda Płatności");

    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/historia_transakcji.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku historia_transakcji.txt!";
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 8) {
            QString login = fields[0];
            if (login == userLogin) {
                QList<QStandardItem *> items;
                for (int i = 1; i < fields.size(); ++i) {
                    QStandardItem *item = new QStandardItem(fields[i]);
                    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                    items.append(item);
                }
                modelHistoria->appendRow(items);
            }
        }
    }
    file.close();
}



