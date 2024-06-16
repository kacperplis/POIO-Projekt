/********************************************************************************
** Form generated from reading UI file 'adminmenu_3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_3_H
#define UI_ADMINMENU_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu_3
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QLabel *label;
    QTableView *tableView_UserWszyscy;

    void setupUi(QDialog *AdminMenu_3)
    {
        if (AdminMenu_3->objectName().isEmpty())
            AdminMenu_3->setObjectName("AdminMenu_3");
        AdminMenu_3->resize(800, 500);
        AdminMenu_3->setMinimumSize(QSize(800, 500));
        AdminMenu_3->setMaximumSize(QSize(800, 500));
        label_data_godzina = new QLabel(AdminMenu_3);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(AdminMenu_3);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(AdminMenu_3);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 460, 83, 29));
        label = new QLabel(AdminMenu_3);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 801, 31));
        tableView_UserWszyscy = new QTableView(AdminMenu_3);
        tableView_UserWszyscy->setObjectName("tableView_UserWszyscy");
        tableView_UserWszyscy->setGeometry(QRect(100, 100, 611, 271));

        retranslateUi(AdminMenu_3);

        QMetaObject::connectSlotsByName(AdminMenu_3);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu_3)
    {
        AdminMenu_3->setWindowTitle(QCoreApplication::translate("AdminMenu_3", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("AdminMenu_3", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("AdminMenu_3", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("AdminMenu_3", "Wstecz", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu_3", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Wszystkie Rezerwacje</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu_3: public Ui_AdminMenu_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_3_H
