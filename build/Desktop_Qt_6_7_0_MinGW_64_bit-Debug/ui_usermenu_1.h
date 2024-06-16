/********************************************************************************
** Form generated from reading UI file 'usermenu_1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_1_H
#define UI_USERMENU_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu_1
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QGroupBox *groupBox_ZwrocWypozyczonySamochod;
    QPushButton *pushButton_Zwroc;
    QRadioButton *radioButton_Karta;
    QLineEdit *lineEdit_BLIK;
    QRadioButton *radioButton_Blik;
    QLineEdit *lineEdit_Karta;
    QLabel *label_UWAGA;
    QLabel *label_Kara;
    QLabel *label_Dni;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ID_Samochodu;
    QLabel *label_2;
    QTableView *tableView_AktualneRezerwacje;

    void setupUi(QDialog *UserMenu_1)
    {
        if (UserMenu_1->objectName().isEmpty())
            UserMenu_1->setObjectName("UserMenu_1");
        UserMenu_1->resize(800, 600);
        UserMenu_1->setMinimumSize(QSize(800, 600));
        UserMenu_1->setMaximumSize(QSize(800, 600));
        label_data_godzina = new QLabel(UserMenu_1);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(UserMenu_1);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(UserMenu_1);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 560, 83, 29));
        groupBox_ZwrocWypozyczonySamochod = new QGroupBox(UserMenu_1);
        groupBox_ZwrocWypozyczonySamochod->setObjectName("groupBox_ZwrocWypozyczonySamochod");
        groupBox_ZwrocWypozyczonySamochod->setGeometry(QRect(10, 330, 751, 201));
        pushButton_Zwroc = new QPushButton(groupBox_ZwrocWypozyczonySamochod);
        pushButton_Zwroc->setObjectName("pushButton_Zwroc");
        pushButton_Zwroc->setGeometry(QRect(660, 170, 80, 24));
        radioButton_Karta = new QRadioButton(groupBox_ZwrocWypozyczonySamochod);
        radioButton_Karta->setObjectName("radioButton_Karta");
        radioButton_Karta->setGeometry(QRect(10, 170, 71, 22));
        lineEdit_BLIK = new QLineEdit(groupBox_ZwrocWypozyczonySamochod);
        lineEdit_BLIK->setObjectName("lineEdit_BLIK");
        lineEdit_BLIK->setGeometry(QRect(100, 140, 113, 24));
        radioButton_Blik = new QRadioButton(groupBox_ZwrocWypozyczonySamochod);
        radioButton_Blik->setObjectName("radioButton_Blik");
        radioButton_Blik->setGeometry(QRect(10, 140, 71, 22));
        lineEdit_Karta = new QLineEdit(groupBox_ZwrocWypozyczonySamochod);
        lineEdit_Karta->setObjectName("lineEdit_Karta");
        lineEdit_Karta->setGeometry(QRect(100, 170, 113, 24));
        label_UWAGA = new QLabel(groupBox_ZwrocWypozyczonySamochod);
        label_UWAGA->setObjectName("label_UWAGA");
        label_UWAGA->setGeometry(QRect(300, 160, 231, 31));
        label_Kara = new QLabel(groupBox_ZwrocWypozyczonySamochod);
        label_Kara->setObjectName("label_Kara");
        label_Kara->setGeometry(QRect(610, 28, 127, 16));
        label_Dni = new QLabel(groupBox_ZwrocWypozyczonySamochod);
        label_Dni->setObjectName("label_Dni");
        label_Dni->setGeometry(QRect(610, 50, 127, 16));
        layoutWidget = new QWidget(groupBox_ZwrocWypozyczonySamochod);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 194, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_ID_Samochodu = new QLineEdit(layoutWidget);
        lineEdit_ID_Samochodu->setObjectName("lineEdit_ID_Samochodu");

        horizontalLayout->addWidget(lineEdit_ID_Samochodu);

        label_2 = new QLabel(UserMenu_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 50, 801, 21));
        tableView_AktualneRezerwacje = new QTableView(UserMenu_1);
        tableView_AktualneRezerwacje->setObjectName("tableView_AktualneRezerwacje");
        tableView_AktualneRezerwacje->setGeometry(QRect(100, 100, 611, 192));

        retranslateUi(UserMenu_1);

        QMetaObject::connectSlotsByName(UserMenu_1);
    } // setupUi

    void retranslateUi(QDialog *UserMenu_1)
    {
        UserMenu_1->setWindowTitle(QCoreApplication::translate("UserMenu_1", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("UserMenu_1", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("UserMenu_1", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("UserMenu_1", "Wstecz", nullptr));
        groupBox_ZwrocWypozyczonySamochod->setTitle(QCoreApplication::translate("UserMenu_1", "Zwr\303\263\304\207 wypo\305\274yczony samoch\303\263d", nullptr));
        pushButton_Zwroc->setText(QCoreApplication::translate("UserMenu_1", "Zwr\303\263\304\207", nullptr));
        radioButton_Karta->setText(QCoreApplication::translate("UserMenu_1", "Karta", nullptr));
        radioButton_Blik->setText(QCoreApplication::translate("UserMenu_1", "BLIK", nullptr));
        label_UWAGA->setText(QCoreApplication::translate("UserMenu_1", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0000;\">Kara za ka\305\274dy dzie\305\204 po terminie to 100 z\305\202</span></p></body></html>", nullptr));
        label_Kara->setText(QCoreApplication::translate("UserMenu_1", "Kara", nullptr));
        label_Dni->setText(QCoreApplication::translate("UserMenu_1", "Ile dni op\303\263\305\272nienia", nullptr));
        label->setText(QCoreApplication::translate("UserMenu_1", "ID Samochodu", nullptr));
        label_2->setText(QCoreApplication::translate("UserMenu_1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">Aktualne Rezerwacje</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenu_1: public Ui_UserMenu_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_1_H
