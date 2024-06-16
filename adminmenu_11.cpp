#include "adminmenu_11.h"
#include "ui_adminmenu_11.h"
#include "mainwindow.h"
#include "adminmenu_1.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>

MainWindow *mainwindow_a11;
AdminMenu_1 *adminmenu_a11;

adminmenu_11::adminmenu_11(QWidget *parent, const QString &userLogin)
    : QDialog(parent)
    , ui(new Ui::adminmenu_11)
    , userLogin(userLogin)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &adminmenu_11::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();

    // Inicjalizacja modelu danych
    modelRezerwacje = new QStandardItemModel(this);
    modelRezerwacje->setColumnCount(5);
    modelRezerwacje->setHeaderData(0, Qt::Horizontal, "ID Samochodu");
    modelRezerwacje->setHeaderData(1, Qt::Horizontal, "Marka");
    modelRezerwacje->setHeaderData(2, Qt::Horizontal, "Model");
    modelRezerwacje->setHeaderData(3, Qt::Horizontal, "Data Rozpoczęcia");
    modelRezerwacje->setHeaderData(4, Qt::Horizontal, "Data Zakończenia");

    ui->tableView_UserRezerwacje->setModel(modelRezerwacje);

    // Ustawienie automatycznego dopasowywania kolumn
    ui->tableView_UserRezerwacje->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Wczytanie aktualnych rezerwacji z pliku
    wczytajAktualneRezerwacje();
}

adminmenu_11::~adminmenu_11()
{
    delete ui;
}

void adminmenu_11::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void adminmenu_11::wczytajAktualneRezerwacje() {
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
            QString login = fields[0];
            if (login == userLogin) {
                QList<QStandardItem *> items;
                for (int i = 1; i < fields.size(); ++i) {
                    QStandardItem *item = new QStandardItem(fields[i]);
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
    }
    file.close();
}

void adminmenu_11::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_a11 = new MainWindow(this);
    mainwindow_a11->show();
}

void adminmenu_11::on_pushButton_Wstecz_clicked()
{
    hide();
    adminmenu_a11 = new AdminMenu_1(this);
    adminmenu_a11->show();
}


