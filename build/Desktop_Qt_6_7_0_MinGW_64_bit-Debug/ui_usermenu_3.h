/********************************************************************************
** Form generated from reading UI file 'usermenu_3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_3_H
#define UI_USERMENU_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_UserMenu_3
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QTableView *tableView_HistoriaTransakcji;
    QLabel *label;

    void setupUi(QDialog *UserMenu_3)
    {
        if (UserMenu_3->objectName().isEmpty())
            UserMenu_3->setObjectName("UserMenu_3");
        UserMenu_3->resize(800, 500);
        UserMenu_3->setMinimumSize(QSize(800, 500));
        UserMenu_3->setMaximumSize(QSize(800, 500));
        label_data_godzina = new QLabel(UserMenu_3);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(UserMenu_3);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(UserMenu_3);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 460, 83, 29));
        tableView_HistoriaTransakcji = new QTableView(UserMenu_3);
        tableView_HistoriaTransakcji->setObjectName("tableView_HistoriaTransakcji");
        tableView_HistoriaTransakcji->setGeometry(QRect(40, 90, 721, 271));
        label = new QLabel(UserMenu_3);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 801, 21));

        retranslateUi(UserMenu_3);

        QMetaObject::connectSlotsByName(UserMenu_3);
    } // setupUi

    void retranslateUi(QDialog *UserMenu_3)
    {
        UserMenu_3->setWindowTitle(QCoreApplication::translate("UserMenu_3", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("UserMenu_3", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("UserMenu_3", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("UserMenu_3", "Wstecz", nullptr));
        label->setText(QCoreApplication::translate("UserMenu_3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">Historia Transakcji</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenu_3: public Ui_UserMenu_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_3_H
