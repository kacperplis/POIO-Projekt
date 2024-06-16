#ifndef USERMENU_1_H
#define USERMENU_1_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class UserMenu_1;
}

class UserMenu_1 : public QDialog
{
    Q_OBJECT

public:
    explicit UserMenu_1(QWidget *parent = nullptr, const QString &userLogin = "");
    ~UserMenu_1();

private slots:
    void updateDateTime();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();
    void on_pushButton_Zwroc_clicked();

private:
    Ui::UserMenu_1 *ui;
    QTimer *timer; // Dodajemy QTimer
    QString userLogin;  // Przechowujemy login użytkownika
    QStandardItemModel *modelRezerwacje;

    void wczytajAktualneRezerwacje();
    void zapiszRezerwacje();
    void aktualizujStatusSamochodu(const QString &idSamochodu, const QString &nowyStatus);
};

#endif // USERMENU_1_H

