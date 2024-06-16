#ifndef ADMINMENU_3_H
#define ADMINMENU_3_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class AdminMenu_3;
}

class AdminMenu_3 : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu_3(QWidget *parent = nullptr);
    ~AdminMenu_3();

private slots:
    void updateDateTime();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();

private:
    Ui::AdminMenu_3 *ui;
    QTimer *timer;
    QStandardItemModel *modelRezerwacje;
    void wczytajWszystkieRezerwacje();
};

#endif // ADMINMENU_3_H
