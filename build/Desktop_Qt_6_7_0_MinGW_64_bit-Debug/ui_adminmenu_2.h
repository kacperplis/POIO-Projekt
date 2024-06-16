/********************************************************************************
** Form generated from reading UI file 'adminmenu_2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_2_H
#define UI_ADMINMENU_2_H

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

class Ui_AdminMenu_2
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QLabel *label;
    QTableView *tableView_BazaSamochodow;
    QLabel *label_1_DodajUzytkownika;
    QLabel *label_1_DodajUzytkownika_2;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Marka;
    QLabel *label_3;
    QLineEdit *lineEdit_Model;
    QLabel *label_4;
    QLineEdit *lineEdit_IloscDrzwi;
    QLabel *label_5;
    QLineEdit *lineEdit_Klimatyzacja;
    QPushButton *pushButton_Dodaj;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_UsunSamochod;
    QPushButton *pushButton_Usun;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_Cena;

    void setupUi(QDialog *AdminMenu_2)
    {
        if (AdminMenu_2->objectName().isEmpty())
            AdminMenu_2->setObjectName("AdminMenu_2");
        AdminMenu_2->resize(800, 500);
        AdminMenu_2->setMinimumSize(QSize(800, 500));
        AdminMenu_2->setMaximumSize(QSize(800, 500));
        label_data_godzina = new QLabel(AdminMenu_2);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(AdminMenu_2);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(AdminMenu_2);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 460, 83, 29));
        label = new QLabel(AdminMenu_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 801, 31));
        tableView_BazaSamochodow = new QTableView(AdminMenu_2);
        tableView_BazaSamochodow->setObjectName("tableView_BazaSamochodow");
        tableView_BazaSamochodow->setGeometry(QRect(100, 100, 611, 192));
        label_1_DodajUzytkownika = new QLabel(AdminMenu_2);
        label_1_DodajUzytkownika->setObjectName("label_1_DodajUzytkownika");
        label_1_DodajUzytkownika->setGeometry(QRect(30, 320, 191, 16));
        label_1_DodajUzytkownika_2 = new QLabel(AdminMenu_2);
        label_1_DodajUzytkownika_2->setObjectName("label_1_DodajUzytkownika_2");
        label_1_DodajUzytkownika_2->setGeometry(QRect(30, 390, 191, 16));
        lineEdit_3 = new QLineEdit(AdminMenu_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(230, 840, 113, 24));
        layoutWidget = new QWidget(AdminMenu_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 350, 752, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_Marka = new QLineEdit(layoutWidget);
        lineEdit_Marka->setObjectName("lineEdit_Marka");

        horizontalLayout->addWidget(lineEdit_Marka);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_Model = new QLineEdit(layoutWidget);
        lineEdit_Model->setObjectName("lineEdit_Model");

        horizontalLayout->addWidget(lineEdit_Model);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_IloscDrzwi = new QLineEdit(layoutWidget);
        lineEdit_IloscDrzwi->setObjectName("lineEdit_IloscDrzwi");

        horizontalLayout->addWidget(lineEdit_IloscDrzwi);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEdit_Klimatyzacja = new QLineEdit(layoutWidget);
        lineEdit_Klimatyzacja->setObjectName("lineEdit_Klimatyzacja");

        horizontalLayout->addWidget(lineEdit_Klimatyzacja);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton_Dodaj = new QPushButton(layoutWidget);
        pushButton_Dodaj->setObjectName("pushButton_Dodaj");

        horizontalLayout_2->addWidget(pushButton_Dodaj);

        layoutWidget1 = new QWidget(AdminMenu_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 420, 213, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        lineEdit_UsunSamochod = new QLineEdit(layoutWidget1);
        lineEdit_UsunSamochod->setObjectName("lineEdit_UsunSamochod");

        horizontalLayout_3->addWidget(lineEdit_UsunSamochod);

        pushButton_Usun = new QPushButton(layoutWidget1);
        pushButton_Usun->setObjectName("pushButton_Usun");

        horizontalLayout_3->addWidget(pushButton_Usun);

        widget = new QWidget(AdminMenu_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(550, 380, 141, 26));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        lineEdit_Cena = new QLineEdit(widget);
        lineEdit_Cena->setObjectName("lineEdit_Cena");

        horizontalLayout_4->addWidget(lineEdit_Cena);


        retranslateUi(AdminMenu_2);

        QMetaObject::connectSlotsByName(AdminMenu_2);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu_2)
    {
        AdminMenu_2->setWindowTitle(QCoreApplication::translate("AdminMenu_2", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("AdminMenu_2", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("AdminMenu_2", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("AdminMenu_2", "Wstecz", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu_2", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Baza Samochod\303\263w</span></p></body></html>", nullptr));
        label_1_DodajUzytkownika->setText(QCoreApplication::translate("AdminMenu_2", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">1. Dodaj nowy samoch\303\263d</span></p></body></html>", nullptr));
        label_1_DodajUzytkownika_2->setText(QCoreApplication::translate("AdminMenu_2", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic;\">2. Usu\305\204 samoch\303\263d</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMenu_2", "Marka", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMenu_2", "Model", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMenu_2", "Ilo\305\233\304\207 drzwi", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMenu_2", "Klimatyzacja", nullptr));
        pushButton_Dodaj->setText(QCoreApplication::translate("AdminMenu_2", "Dodaj", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMenu_2", "ID", nullptr));
        pushButton_Usun->setText(QCoreApplication::translate("AdminMenu_2", "Usu\305\204", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMenu_2", "Cena", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu_2: public Ui_AdminMenu_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_2_H
