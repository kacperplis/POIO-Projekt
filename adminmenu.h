#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include "adminmenu_1.h"
#include "adminmenu_2.h"
#include "adminmenu_3.h"

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr);
    ~AdminMenu();

private slots:
    void on_pushButton_1_BazaUzytkownikow_clicked();
    void on_pushButton_2_BazaSamochodow_clicked();
    void on_pushButton_3_AktualneRezerwacje_clicked();
    void updateDateTime(); // Dodajemy tę funkcję

    void on_pushButton_wyloguj_clicked();

private:
    Ui::AdminMenu *ui;
    AdminMenu_1 *adminmenu_1;
    AdminMenu_2 *adminmenu_2;
    AdminMenu_3 *adminmenu_3;
    QTimer *timer; // Dodajemy QTimer
};

#endif // ADMINMENU_H

