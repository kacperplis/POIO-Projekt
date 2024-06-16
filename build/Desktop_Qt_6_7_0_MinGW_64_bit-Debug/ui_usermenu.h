/********************************************************************************
** Form generated from reading UI file 'usermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_H
#define UI_USERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu
{
public:
    QPushButton *pushButton_Wyloguj;
    QLabel *label_data_godzina;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_1_Rezerwacje;
    QPushButton *pushButton_2_WypozyczSamochod;
    QPushButton *pushButton_3_HistoriaTransakcji;

    void setupUi(QDialog *UserMenu)
    {
        if (UserMenu->objectName().isEmpty())
            UserMenu->setObjectName("UserMenu");
        UserMenu->resize(800, 500);
        UserMenu->setMinimumSize(QSize(800, 500));
        UserMenu->setMaximumSize(QSize(800, 500));
        pushButton_Wyloguj = new QPushButton(UserMenu);
        pushButton_Wyloguj->setObjectName("pushButton_Wyloguj");
        pushButton_Wyloguj->setGeometry(QRect(710, 10, 83, 29));
        label_data_godzina = new QLabel(UserMenu);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        label = new QLabel(UserMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 90, 801, 51));
        layoutWidget = new QWidget(UserMenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 150, 301, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1_Rezerwacje = new QPushButton(layoutWidget);
        pushButton_1_Rezerwacje->setObjectName("pushButton_1_Rezerwacje");

        verticalLayout->addWidget(pushButton_1_Rezerwacje);

        pushButton_2_WypozyczSamochod = new QPushButton(layoutWidget);
        pushButton_2_WypozyczSamochod->setObjectName("pushButton_2_WypozyczSamochod");

        verticalLayout->addWidget(pushButton_2_WypozyczSamochod);

        pushButton_3_HistoriaTransakcji = new QPushButton(layoutWidget);
        pushButton_3_HistoriaTransakcji->setObjectName("pushButton_3_HistoriaTransakcji");

        verticalLayout->addWidget(pushButton_3_HistoriaTransakcji);


        retranslateUi(UserMenu);

        QMetaObject::connectSlotsByName(UserMenu);
    } // setupUi

    void retranslateUi(QDialog *UserMenu)
    {
        UserMenu->setWindowTitle(QCoreApplication::translate("UserMenu", "Dialog", nullptr));
        pushButton_Wyloguj->setText(QCoreApplication::translate("UserMenu", "Wyloguj", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("UserMenu", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("UserMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Menu U\305\274ytkownika</span></p></body></html>", nullptr));
        pushButton_1_Rezerwacje->setText(QCoreApplication::translate("UserMenu", "1. Twoje Rezerwacje", nullptr));
        pushButton_2_WypozyczSamochod->setText(QCoreApplication::translate("UserMenu", "2. Wypo\305\274ycz samoch\303\263d", nullptr));
        pushButton_3_HistoriaTransakcji->setText(QCoreApplication::translate("UserMenu", "3. Twoja historia transakcji", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenu: public Ui_UserMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
