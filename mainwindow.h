#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include "usermenu.h"
#include "adminmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Uzytkownik {
public:
    QString login;
    QString haslo;

    Uzytkownik(const QString &login, const QString &haslo)
        : login(login), haslo(haslo) {}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Logowanie_clicked();
    void on_pushButton_ZalozKonto_clicked();

private:
    Ui::MainWindow *ui;
    UserMenu *usermenu;
    AdminMenu *adminmenu;
    QVector<Uzytkownik> uzytkownicy;
    void wczytajUzytkownikow();
    void zapiszUzytkownikow();
};

#endif // MAINWINDOW_H


