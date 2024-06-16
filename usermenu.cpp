#include "usermenu.h"
#include "ui_usermenu.h"
#include "mainwindow.h"

MainWindow *mainwindow_u;

UserMenu::UserMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserMenu)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UserMenu::updateDateTime);
    timer->start(1000);
    updateDateTime();
}

UserMenu::UserMenu(QWidget *parent, const QString &userLogin)
    : QDialog(parent)
    , ui(new Ui::UserMenu)
    , userLogin(userLogin)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &UserMenu::updateDateTime);
    timer->start(1000);
    updateDateTime();
}

UserMenu::~UserMenu()
{
    delete ui;
}

void UserMenu::updateDateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->label_data_godzina->setText(dateTimeString);
}

void UserMenu::on_pushButton_1_Rezerwacje_clicked()
{
    hide();
    usermenu_1 = new UserMenu_1(this, userLogin);
    usermenu_1->show();
}

void UserMenu::on_pushButton_2_WypozyczSamochod_clicked()
{
    hide();
    usermenu_2 = new UserMenu_2(this, userLogin);
    usermenu_2->show();
}

void UserMenu::on_pushButton_Wyloguj_clicked()
{
    hide();
    mainwindow_u = new MainWindow(this);
    mainwindow_u->show();
}

void UserMenu::on_pushButton_3_HistoriaTransakcji_clicked()
{
    hide();
    usermenu_3 = new UserMenu_3(this, userLogin);
    usermenu_3->show();
}

void UserMenu::refreshUserMenu3()
{
    if (usermenu_3) {
        usermenu_3->wczytajHistorieTransakcji();
    }
}




