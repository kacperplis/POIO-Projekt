#ifndef USERMENU_H
#define USERMENU_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include "usermenu_1.h"
#include "usermenu_2.h"
#include "usermenu_3.h"

namespace Ui {
class UserMenu;
}

class UserMenu : public QDialog
{
    Q_OBJECT

public:
    explicit UserMenu(QWidget *parent = nullptr);
    explicit UserMenu(QWidget *parent, const QString &userLogin);
    ~UserMenu();

    void refreshUserMenu3();  // Deklaracja metody

private slots:
    void on_pushButton_1_Rezerwacje_clicked();
    void on_pushButton_2_WypozyczSamochod_clicked();
    void updateDateTime();

    void on_pushButton_Wyloguj_clicked();

    void on_pushButton_3_HistoriaTransakcji_clicked();

private:
    Ui::UserMenu *ui;
    UserMenu_1 *usermenu_1;
    UserMenu_2 *usermenu_2;
    UserMenu_3 *usermenu_3;
    QTimer *timer;
    QString userLogin;  // Przechowujemy login użytkownika
};

#endif // USERMENU_H



