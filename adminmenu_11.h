#ifndef ADMINMENU_11_H
#define ADMINMENU_11_H

#include <QDialog>
#include <QTimer>
#include <QStandardItemModel>

namespace Ui {
class adminmenu_11;
}

class adminmenu_11 : public QDialog
{
    Q_OBJECT

public:
    explicit adminmenu_11(QWidget *parent = nullptr, const QString &userLogin = "");
    ~adminmenu_11();

private slots:
    void updateDateTime(); // Dodajemy tę funkcję
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();

private:
    Ui::adminmenu_11 *ui;
    QTimer *timer; // Dodajemy QTimer
    QString userLogin;
    QStandardItemModel *modelRezerwacje;
    void wczytajAktualneRezerwacje(); // Metoda do wczytywania rezerwacji użytkownika
};

#endif // ADMINMENU_11_H

