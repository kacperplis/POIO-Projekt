#ifndef USERMENU_2_H
#define USERMENU_2_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class UserMenu_2;
}

class UserMenu_2 : public QDialog
{
    Q_OBJECT

public:
    explicit UserMenu_2(QWidget *parent = nullptr, const QString &userLogin = "");
    ~UserMenu_2();

private slots:
    void updateDateTime();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();
    void on_pushButton_Sprawdz_clicked();
    void on_pushButton_Zaplac_Wypozycz_clicked();

private:
    Ui::UserMenu_2 *ui;
    QTimer *timer;
    QStandardItemModel *modelSamochody;
    QString userLogin;  // Przechowujemy login użytkownika

    void wczytajSamochody();
    void zapiszSamochody();
};

#endif // USERMENU_2_H


