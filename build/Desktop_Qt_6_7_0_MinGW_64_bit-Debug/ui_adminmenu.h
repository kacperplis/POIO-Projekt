/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QPushButton *pushButton_wyloguj;
    QLabel *label_data_godzina;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_1_BazaUzytkownikow;
    QPushButton *pushButton_2_BazaSamochodow;
    QPushButton *pushButton_3_AktualneRezerwacje;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName("AdminMenu");
        AdminMenu->resize(800, 500);
        AdminMenu->setMinimumSize(QSize(800, 500));
        AdminMenu->setMaximumSize(QSize(800, 500));
        pushButton_wyloguj = new QPushButton(AdminMenu);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        label_data_godzina = new QLabel(AdminMenu);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        label = new QLabel(AdminMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 100, 801, 51));
        layoutWidget = new QWidget(AdminMenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 170, 301, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1_BazaUzytkownikow = new QPushButton(layoutWidget);
        pushButton_1_BazaUzytkownikow->setObjectName("pushButton_1_BazaUzytkownikow");

        verticalLayout->addWidget(pushButton_1_BazaUzytkownikow);

        pushButton_2_BazaSamochodow = new QPushButton(layoutWidget);
        pushButton_2_BazaSamochodow->setObjectName("pushButton_2_BazaSamochodow");

        verticalLayout->addWidget(pushButton_2_BazaSamochodow);

        pushButton_3_AktualneRezerwacje = new QPushButton(layoutWidget);
        pushButton_3_AktualneRezerwacje->setObjectName("pushButton_3_AktualneRezerwacje");

        verticalLayout->addWidget(pushButton_3_AktualneRezerwacje);


        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "Dialog", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("AdminMenu", "Wyloguj", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("AdminMenu", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Menu Administratora</span></p></body></html>", nullptr));
        pushButton_1_BazaUzytkownikow->setText(QCoreApplication::translate("AdminMenu", "1. Baza u\305\274ytkownik\303\263w", nullptr));
        pushButton_2_BazaSamochodow->setText(QCoreApplication::translate("AdminMenu", "2. Baza samochod\303\263w", nullptr));
        pushButton_3_AktualneRezerwacje->setText(QCoreApplication::translate("AdminMenu", "3. Aktualne rezerwacje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
