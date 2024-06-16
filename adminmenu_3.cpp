#include "adminmenu_3.h"
#include "ui_adminmenu_3.h"
#include "mainwindow.h"
#include "adminmenu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_a3;
AdminMenu *adminmenu_a3;

AdminMenu_3::AdminMenu_3(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminMenu_3)
{
    ui->setupUi(this);
    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AdminMenu_3::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelRezerwacje = new QStandardItemModel(this);
    modelRezerwacje->setColumnCount(6);
    modelRezerwacje->setHeaderData(0, Qt::Horizontal, "Login");
    modelRezerwacje->setHeaderData(1, Qt::Horizontal, "ID Samochodu");
    modelRezerwacje->setHeaderData(2, Qt::Horizontal, "Marka");
    modelRezerwacje->setHeaderData(3, Qt::Horizontal, "Model");
    modelRezerwacje->setHeaderData(4, Qt::Horizontal, "Data Rozpoczęcia");
    modelRezerwacje->setHeaderData(5, Qt::Horizontal, "Data Zakończenia");

    ui->tableView_UserWszyscy->setModel(modelRezerwacje);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_UserWszyscy->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie wszystkich rezerwacji z pliku
    wczytajWszystkieRezerwacje();
}

AdminMenu_3::~AdminMenu_3()
{
    delete ui;
}

void AdminMenu_3::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void AdminMenu_3::wczytajWszystkieRezerwacje() {
    QFile file("C:/Users/plisk/Desktop/Studia/semestr 6/POIO/Projektowe/Final_Project/GUI_wypozyczalnia/aktualne_rezerwacje.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nie można otworzyć pliku aktualne_rezerwacje.txt!";
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() == 6) {
            QList<QStandardItem *> items;
            for (const QString &field : fields) {
                QStandardItem *item = new QStandardItem(field);
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                item->setForeground(Qt::black); // Ustawienie koloru czcionki na czarny
                items.append(item);
            }
            modelRezerwacje->appendRow(items);

            QDate currentDate = QDate::currentDate();
            QDate endDate = QDate::fromString(fields[5], "yyyy-MM-dd");
            if (currentDate < endDate) {
                for (QStandardItem *item : items) {
                    item->setBackground(QColor(Qt::green));
                }
            } else if (currentDate == endDate) {
                for (QStandardItem *item : items) {
                    item->setBackground(QColor(Qt::yellow));
                }
            } else {
                for (QStandardItem *item : items) {
                    item->setBackground(QColor(Qt::red));
                }
            }
        }
    }
    file.close();
}

void AdminMenu_3::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_a3 = new MainWindow(this);
    mainwindow_a3->show();
}

void AdminMenu_3::on_pushButton_Wstecz_clicked()
{
    hide();
    adminmenu_a3 = new AdminMenu(this);
    adminmenu_a3->show();
}


