#ifndef ADMINMENU_2_H
#define ADMINMENU_2_H

#include <QDialog>
#include <QTimer>
#include <QDateTime>
#include <QStandardItemModel>

namespace Ui {
class AdminMenu_2;
}

class AdminMenu_2 : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu_2(QWidget *parent = nullptr);
    ~AdminMenu_2();

private slots:
    void updateDateTime();
    void on_pushButton_wyloguj_clicked();
    void on_pushButton_Wstecz_clicked();
    void on_pushButton_Dodaj_clicked();
    void on_pushButton_Usun_clicked();


private:
    Ui::AdminMenu_2 *ui;
    QTimer *timer;
    QStandardItemModel *modelSamochody;
    void wczytajSamochody();
    void zapiszSamochody();

};

#endif // ADMINMENU_2_H




