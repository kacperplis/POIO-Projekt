#ifndef USERMENU_3_H
#define USERMENU_3_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class UserMenu_3;
}

class UserMenu_3 : public QDialog
{
    Q_OBJECT

public:
    explicit UserMenu_3(QWidget *parent = nullptr, const QString &userLogin = "");
    ~UserMenu_3();

    void wczytajHistorieTransakcji();  // Przeniesiono tutaj

private slots:
    void updateDateTime();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();

private:
    Ui::UserMenu_3 *ui;
    QTimer *timer;
    QString userLogin;
    QStandardItemModel *modelHistoria;
};

#endif // USERMENU_3_H



