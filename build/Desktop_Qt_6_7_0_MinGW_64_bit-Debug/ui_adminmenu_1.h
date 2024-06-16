/********************************************************************************
** Form generated from reading UI file 'adminmenu_1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_1_H
#define UI_ADMINMENU_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu_1
{
public:
    QPushButton *pushButton_wyloguj;
    QLabel *label_data_godzina;
    QTableView *tableView_BazaUzytkownikow;
    QLabel *label_1_DodajUzytkownika;
    QLabel *label_2_UsunUzytkownika;
    QLabel *label_3_SprawdzAktualnaRezerwacje;
    QPushButton *pushButton_Wstecz;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_a1_Login;
    QLineEdit *lineEdit_a1_Login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_a1_Haslo;
    QLineEdit *lineEdit_a1_Haslo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_a1_PoworzHaslo;
    QLineEdit *lineEdit_a1_PowtorzHaslo;
    QPushButton *pushButton_a1_DodajUzytkownika;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_a1_LoginUsun;
    QLineEdit *lineEdit_a1_LoginUsun;
    QPushButton *pushButton_a1_UsunUzytkownika;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_a1_LoginRezerwacja;
    QLineEdit *lineEdit_a1_LoginRezerwacja;
    QPushButton *pushButton_a1_SprawdzRezerwacja;

    void setupUi(QDialog *AdminMenu_1)
    {
        if (AdminMenu_1->objectName().isEmpty())
            AdminMenu_1->setObjectName("AdminMenu_1");
        AdminMenu_1->resize(800, 600);
        AdminMenu_1->setMinimumSize(QSize(800, 600));
        AdminMenu_1->setMaximumSize(QSize(800, 600));
        pushButton_wyloguj = new QPushButton(AdminMenu_1);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        label_data_godzina = new QLabel(AdminMenu_1);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        tableView_BazaUzytkownikow = new QTableView(AdminMenu_1);
        tableView_BazaUzytkownikow->setObjectName("tableView_BazaUzytkownikow");
        tableView_BazaUzytkownikow->setGeometry(QRect(195, 80, 431, 261));
        tableView_BazaUzytkownikow->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_BazaUzytkownikow->verticalHeader()->setCascadingSectionResizes(false);
        label_1_DodajUzytkownika = new QLabel(AdminMenu_1);
        label_1_DodajUzytkownika->setObjectName("label_1_DodajUzytkownika");
        label_1_DodajUzytkownika->setGeometry(QRect(20, 360, 191, 16));
        label_2_UsunUzytkownika = new QLabel(AdminMenu_1);
        label_2_UsunUzytkownika->setObjectName("label_2_UsunUzytkownika");
        label_2_UsunUzytkownika->setGeometry(QRect(20, 430, 191, 16));
        label_3_SprawdzAktualnaRezerwacje = new QLabel(AdminMenu_1);
        label_3_SprawdzAktualnaRezerwacje->setObjectName("label_3_SprawdzAktualnaRezerwacje");
        label_3_SprawdzAktualnaRezerwacje->setGeometry(QRect(20, 490, 191, 16));
        pushButton_Wstecz = new QPushButton(AdminMenu_1);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 560, 83, 29));
        label = new QLabel(AdminMenu_1);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 801, 31));
        layoutWidget = new QWidget(AdminMenu_1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 390, 300, 28));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_a1_Login = new QLabel(layoutWidget);
        label_a1_Login->setObjectName("label_a1_Login");

        horizontalLayout->addWidget(label_a1_Login);

        lineEdit_a1_Login = new QLineEdit(layoutWidget);
        lineEdit_a1_Login->setObjectName("lineEdit_a1_Login");

        horizontalLayout->addWidget(lineEdit_a1_Login);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_a1_Haslo = new QLabel(layoutWidget);
        label_a1_Haslo->setObjectName("label_a1_Haslo");

        horizontalLayout_2->addWidget(label_a1_Haslo);

        lineEdit_a1_Haslo = new QLineEdit(layoutWidget);
        lineEdit_a1_Haslo->setObjectName("lineEdit_a1_Haslo");

        horizontalLayout_2->addWidget(lineEdit_a1_Haslo);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(AdminMenu_1);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(325, 390, 301, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_a1_PoworzHaslo = new QLabel(layoutWidget1);
        label_a1_PoworzHaslo->setObjectName("label_a1_PoworzHaslo");

        horizontalLayout_3->addWidget(label_a1_PoworzHaslo);

        lineEdit_a1_PowtorzHaslo = new QLineEdit(layoutWidget1);
        lineEdit_a1_PowtorzHaslo->setObjectName("lineEdit_a1_PowtorzHaslo");

        horizontalLayout_3->addWidget(lineEdit_a1_PowtorzHaslo);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        pushButton_a1_DodajUzytkownika = new QPushButton(layoutWidget1);
        pushButton_a1_DodajUzytkownika->setObjectName("pushButton_a1_DodajUzytkownika");

        horizontalLayout_4->addWidget(pushButton_a1_DodajUzytkownika);

        layoutWidget2 = new QWidget(AdminMenu_1);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 450, 358, 28));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_a1_LoginUsun = new QLabel(layoutWidget2);
        label_a1_LoginUsun->setObjectName("label_a1_LoginUsun");

        horizontalLayout_6->addWidget(label_a1_LoginUsun);

        lineEdit_a1_LoginUsun = new QLineEdit(layoutWidget2);
        lineEdit_a1_LoginUsun->setObjectName("lineEdit_a1_LoginUsun");

        horizontalLayout_6->addWidget(lineEdit_a1_LoginUsun);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        pushButton_a1_UsunUzytkownika = new QPushButton(layoutWidget2);
        pushButton_a1_UsunUzytkownika->setObjectName("pushButton_a1_UsunUzytkownika");

        horizontalLayout_7->addWidget(pushButton_a1_UsunUzytkownika);

        layoutWidget3 = new QWidget(AdminMenu_1);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 510, 292, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_a1_LoginRezerwacja = new QLabel(layoutWidget3);
        label_a1_LoginRezerwacja->setObjectName("label_a1_LoginRezerwacja");

        horizontalLayout_8->addWidget(label_a1_LoginRezerwacja);

        lineEdit_a1_LoginRezerwacja = new QLineEdit(layoutWidget3);
        lineEdit_a1_LoginRezerwacja->setObjectName("lineEdit_a1_LoginRezerwacja");

        horizontalLayout_8->addWidget(lineEdit_a1_LoginRezerwacja);

        pushButton_a1_SprawdzRezerwacja = new QPushButton(layoutWidget3);
        pushButton_a1_SprawdzRezerwacja->setObjectName("pushButton_a1_SprawdzRezerwacja");

        horizontalLayout_8->addWidget(pushButton_a1_SprawdzRezerwacja);


        retranslateUi(AdminMenu_1);

        QMetaObject::connectSlotsByName(AdminMenu_1);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu_1)
    {
        AdminMenu_1->setWindowTitle(QCoreApplication::translate("AdminMenu_1", "Dialog", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("AdminMenu_1", "Wyloguj", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("AdminMenu_1", "TextLabel", nullptr));
        label_1_DodajUzytkownika->setText(QCoreApplication::translate("AdminMenu_1", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">1. Dodaj u\305\274ytkownika</span></p></body></html>", nullptr));
        label_2_UsunUzytkownika->setText(QCoreApplication::translate("AdminMenu_1", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">2. Usu\305\204 u\305\274ytkownika</span></p></body></html>", nullptr));
        label_3_SprawdzAktualnaRezerwacje->setText(QCoreApplication::translate("AdminMenu_1", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">3. Sprawd\305\272 aktualne rezerwacje</span></p></body></html>", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("AdminMenu_1", "Wstecz", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu_1", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Baza U\305\274ytkonik\303\263w</span></p></body></html>", nullptr));
        label_a1_Login->setText(QCoreApplication::translate("AdminMenu_1", "Login", nullptr));
        label_a1_Haslo->setText(QCoreApplication::translate("AdminMenu_1", "Has\305\202o", nullptr));
        label_a1_PoworzHaslo->setText(QCoreApplication::translate("AdminMenu_1", "Powt\303\263rz has\305\202o", nullptr));
        pushButton_a1_DodajUzytkownika->setText(QCoreApplication::translate("AdminMenu_1", "Dodaj u\305\274ytkownika", nullptr));
        label_a1_LoginUsun->setText(QCoreApplication::translate("AdminMenu_1", "Podaj login do usuni\304\231cia", nullptr));
        pushButton_a1_UsunUzytkownika->setText(QCoreApplication::translate("AdminMenu_1", "Usu\305\204 u\305\274ytkownika", nullptr));
        label_a1_LoginRezerwacja->setText(QCoreApplication::translate("AdminMenu_1", "Podaj login", nullptr));
        pushButton_a1_SprawdzRezerwacja->setText(QCoreApplication::translate("AdminMenu_1", "Sprawd\305\272 rezerwacje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu_1: public Ui_AdminMenu_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_1_H
