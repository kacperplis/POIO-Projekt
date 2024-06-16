/********************************************************************************
** Form generated from reading UI file 'usermenu_2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_2_H
#define UI_USERMENU_2_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu_2
{
public:
    QLabel *label_data_godzina;
    QPushButton *pushButton_wyloguj;
    QPushButton *pushButton_Wstecz;
    QTableView *tableView_BazaSamochodow;
    QGroupBox *groupBox_Wypozycz;
    QPushButton *pushButton_Sprawdz;
    QLineEdit *lineEdit_BLIK;
    QLineEdit *lineEdit_Karta;
    QRadioButton *radioButton_Blik;
    QRadioButton *radioButton_Karta;
    QPushButton *pushButton_Zaplac_Wypozycz;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_PodajID;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_IleDni;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_Cena;
    QLabel *label_KoncowaData;
    QLabel *label_3;

    void setupUi(QDialog *UserMenu_2)
    {
        if (UserMenu_2->objectName().isEmpty())
            UserMenu_2->setObjectName("UserMenu_2");
        UserMenu_2->resize(800, 600);
        UserMenu_2->setMinimumSize(QSize(800, 600));
        UserMenu_2->setMaximumSize(QSize(800, 600));
        label_data_godzina = new QLabel(UserMenu_2);
        label_data_godzina->setObjectName("label_data_godzina");
        label_data_godzina->setGeometry(QRect(0, 0, 121, 41));
        pushButton_wyloguj = new QPushButton(UserMenu_2);
        pushButton_wyloguj->setObjectName("pushButton_wyloguj");
        pushButton_wyloguj->setGeometry(QRect(710, 10, 83, 29));
        pushButton_Wstecz = new QPushButton(UserMenu_2);
        pushButton_Wstecz->setObjectName("pushButton_Wstecz");
        pushButton_Wstecz->setGeometry(QRect(710, 560, 83, 29));
        tableView_BazaSamochodow = new QTableView(UserMenu_2);
        tableView_BazaSamochodow->setObjectName("tableView_BazaSamochodow");
        tableView_BazaSamochodow->setGeometry(QRect(100, 100, 611, 192));
        groupBox_Wypozycz = new QGroupBox(UserMenu_2);
        groupBox_Wypozycz->setObjectName("groupBox_Wypozycz");
        groupBox_Wypozycz->setGeometry(QRect(20, 330, 751, 201));
        pushButton_Sprawdz = new QPushButton(groupBox_Wypozycz);
        pushButton_Sprawdz->setObjectName("pushButton_Sprawdz");
        pushButton_Sprawdz->setGeometry(QRect(450, 30, 80, 24));
        lineEdit_BLIK = new QLineEdit(groupBox_Wypozycz);
        lineEdit_BLIK->setObjectName("lineEdit_BLIK");
        lineEdit_BLIK->setGeometry(QRect(100, 110, 113, 24));
        lineEdit_Karta = new QLineEdit(groupBox_Wypozycz);
        lineEdit_Karta->setObjectName("lineEdit_Karta");
        lineEdit_Karta->setGeometry(QRect(100, 140, 113, 24));
        radioButton_Blik = new QRadioButton(groupBox_Wypozycz);
        radioButton_Blik->setObjectName("radioButton_Blik");
        radioButton_Blik->setGeometry(QRect(10, 110, 71, 22));
        radioButton_Karta = new QRadioButton(groupBox_Wypozycz);
        radioButton_Karta->setObjectName("radioButton_Karta");
        radioButton_Karta->setGeometry(QRect(10, 140, 71, 22));
        pushButton_Zaplac_Wypozycz = new QPushButton(groupBox_Wypozycz);
        pushButton_Zaplac_Wypozycz->setObjectName("pushButton_Zaplac_Wypozycz");
        pushButton_Zaplac_Wypozycz->setGeometry(QRect(640, 160, 101, 31));
        layoutWidget = new QWidget(groupBox_Wypozycz);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 227, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_PodajID = new QLineEdit(layoutWidget);
        lineEdit_PodajID->setObjectName("lineEdit_PodajID");

        horizontalLayout->addWidget(lineEdit_PodajID);

        layoutWidget1 = new QWidget(groupBox_Wypozycz);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(250, 30, 174, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_IleDni = new QLineEdit(layoutWidget1);
        lineEdit_IleDni->setObjectName("lineEdit_IleDni");

        horizontalLayout_2->addWidget(lineEdit_IleDni);

        layoutWidget2 = new QWidget(groupBox_Wypozycz);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(580, 30, 129, 40));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Cena = new QLabel(layoutWidget2);
        label_Cena->setObjectName("label_Cena");

        verticalLayout->addWidget(label_Cena);

        label_KoncowaData = new QLabel(layoutWidget2);
        label_KoncowaData->setObjectName("label_KoncowaData");

        verticalLayout->addWidget(label_KoncowaData);

        label_3 = new QLabel(UserMenu_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 50, 801, 21));

        retranslateUi(UserMenu_2);

        QMetaObject::connectSlotsByName(UserMenu_2);
    } // setupUi

    void retranslateUi(QDialog *UserMenu_2)
    {
        UserMenu_2->setWindowTitle(QCoreApplication::translate("UserMenu_2", "Dialog", nullptr));
        label_data_godzina->setText(QCoreApplication::translate("UserMenu_2", "TextLabel", nullptr));
        pushButton_wyloguj->setText(QCoreApplication::translate("UserMenu_2", "Wyloguj", nullptr));
        pushButton_Wstecz->setText(QCoreApplication::translate("UserMenu_2", "Wstecz", nullptr));
        groupBox_Wypozycz->setTitle(QCoreApplication::translate("UserMenu_2", "Wypo\305\274ycz Samoch\303\263d", nullptr));
        pushButton_Sprawdz->setText(QCoreApplication::translate("UserMenu_2", "Sprawd\305\272", nullptr));
        radioButton_Blik->setText(QCoreApplication::translate("UserMenu_2", "BLIK", nullptr));
        radioButton_Karta->setText(QCoreApplication::translate("UserMenu_2", "Karta", nullptr));
        pushButton_Zaplac_Wypozycz->setText(QCoreApplication::translate("UserMenu_2", "Zap\305\202a\304\207 i wypo\305\274ycz", nullptr));
        label->setText(QCoreApplication::translate("UserMenu_2", "<html><head/><body><p>Podaj ID Samochodu</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("UserMenu_2", "<html><head/><body><p>Na ile dni ?</p></body></html>", nullptr));
        label_Cena->setText(QCoreApplication::translate("UserMenu_2", "Cena", nullptr));
        label_KoncowaData->setText(QCoreApplication::translate("UserMenu_2", "Ko\305\204cowa data wynajmu", nullptr));
        label_3->setText(QCoreApplication::translate("UserMenu_2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">Baza Samochod\303\263w</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenu_2: public Ui_UserMenu_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_2_H
