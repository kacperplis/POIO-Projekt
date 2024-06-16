/********************************************************************************
** Form generated from reading UI file 'adminmenu_11.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_11_H
#define UI_ADMINMENU_11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_adminmenu_11
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QLabel *label;
    QTableView *tableView_UserRezerwacje;

    void setupUi(QDialog *adminmenu_11)
    {
        if (adminmenu_11->objectName().isEmpty())
            adminmenu_11->setObjectName("adminmenu_11");
        adminmenu_11->resize(800, 500);
        adminmenu_11->setMinimumSize(QSize(800, 500));
        adminmenu_11->setMaximumSize(QSize(800, 500));
        label_data_godzina = new QLabel(adminmenu_11);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(adminmenu_11);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(adminmenu_11);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 460, 83, 29));
        label = new QLabel(adminmenu_11);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 801, 31));
        tableView_UserRezerwacje = new QTableView(adminmenu_11);
        tableView_UserRezerwacje->setObjectName("tableView_UserRezerwacje");
        tableView_UserRezerwacje->setGeometry(QRect(100, 100, 611, 301));

        retranslateUi(adminmenu_11);

        QMetaObject::connectSlotsByName(adminmenu_11);
    } // setupUi

    void retranslateUi(QDialog *adminmenu_11)
    {
        adminmenu_11->setWindowTitle(QCoreApplication::translate("adminmenu_11", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("adminmenu_11", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("adminmenu_11", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("adminmenu_11", "Wstecz", nullptr));
        label->setText(QCoreApplication::translate("adminmenu_11", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Aktualne Rezerwacje</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenu_11: public Ui_adminmenu_11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_11_H
