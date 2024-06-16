#include "adminmenu.h"
#include "ui_adminmenu.h"
#include "mainwindow.h"

MainWindow *mainwindow_a;

AdminMenu::AdminMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminMenu)
{
    ui->setupUi(this);

    // Inicjalizacja QTimer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AdminMenu::updateDateTime);
    timer->start(1000); // Ustawienie timer-a na 1 sekundę

    // Inicjalizacja daty i godziny
    updateDateTime();
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void AdminMenu::on_pushButton_1_BazaUzytkownikow_clicked()
{
    hide();
    adminmenu_1 = new AdminMenu_1(this);
    adminmenu_1->show();

}

void AdminMenu::on_pushButton_2_BazaSamochodow_clicked()
{
    hide();
    adminmenu_2 = new AdminMenu_2(this);
    adminmenu_2->show();
}

void AdminMenu::on_pushButton_3_AktualneRezerwacje_clicked()
{
    hide();
    adminmenu_3 = new AdminMenu_3(this);
    adminmenu_3->show();

}


void AdminMenu::on_pushButton_wyloguj_clicked()
{
    hide();
    mainwindow_a = new MainWindow(this);
    mainwindow_a->show();

}

