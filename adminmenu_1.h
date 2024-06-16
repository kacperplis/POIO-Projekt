#ifndef ADMINMENU_1_H
#define ADMINMENU_1_H

#include "adminmenu_11.h"
#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class AdminMenu_1;
}

class AdminMenu_1 : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu_1(QWidget *parent = nullptr);
    ~AdminMenu_1();

private slots:
    void on_pushButton_a1_DodajUzytkownika_clicked();
    void on_pushButton_a1_UsunUzytkownika_clicked();
    void on_pushButton_a1_SprawdzRezerwacja_clicked();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();
    void updateDateTime(); // Dodajemy tę funkcję

private:
    Ui::AdminMenu_1 *ui;
    QTimer *timer; // Dodajemy QTimer
    QStandardItemModel *modelUzytkownicy;
    adminmenu_11 *adminmenu_a11;

    void wczytajUzytkownikow();
    void zapiszUzytkownikow();
    bool czyUzytkownikMaRezerwacje(const QString &login); // Sprawdza, czy użytkownik ma rezerwacje
};

#endif // ADMINMENU_1_H

