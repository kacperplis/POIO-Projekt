/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_zakladaniekonta;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Login_new;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Haslo_new;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_PowtorzHaslo_new;
    QPushButton *pushButton_ZalozKonto;
    QGroupBox *groupBox_Logowanie;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Haslo;
    QPushButton *pushButton_Logowanie;
    QLabel *label;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_zakladaniekonta = new QGroupBox(centralwidget);
        groupBox_zakladaniekonta->setObjectName("groupBox_zakladaniekonta");
        groupBox_zakladaniekonta->setGeometry(QRect(470, 200, 271, 191));
        verticalLayout_2 = new QVBoxLayout(groupBox_zakladaniekonta);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox_zakladaniekonta);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit_Login_new = new QLineEdit(groupBox_zakladaniekonta);
        lineEdit_Login_new->setObjectName("lineEdit_Login_new");

        horizontalLayout_3->addWidget(lineEdit_Login_new);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(groupBox_zakladaniekonta);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        lineEdit_Haslo_new = new QLineEdit(groupBox_zakladaniekonta);
        lineEdit_Haslo_new->setObjectName("lineEdit_Haslo_new");
        lineEdit_Haslo_new->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_Haslo_new);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(groupBox_zakladaniekonta);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        lineEdit_PowtorzHaslo_new = new QLineEdit(groupBox_zakladaniekonta);
        lineEdit_PowtorzHaslo_new->setObjectName("lineEdit_PowtorzHaslo_new");
        lineEdit_PowtorzHaslo_new->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEdit_PowtorzHaslo_new);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pushButton_ZalozKonto = new QPushButton(groupBox_zakladaniekonta);
        pushButton_ZalozKonto->setObjectName("pushButton_ZalozKonto");

        verticalLayout_2->addWidget(pushButton_ZalozKonto);

        groupBox_Logowanie = new QGroupBox(centralwidget);
        groupBox_Logowanie->setObjectName("groupBox_Logowanie");
        groupBox_Logowanie->setGeometry(QRect(70, 200, 251, 191));
        verticalLayout = new QVBoxLayout(groupBox_Logowanie);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox_Logowanie);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_Login = new QLineEdit(groupBox_Logowanie);
        lineEdit_Login->setObjectName("lineEdit_Login");

        horizontalLayout->addWidget(lineEdit_Login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_Logowanie);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Haslo = new QLineEdit(groupBox_Logowanie);
        lineEdit_Haslo->setObjectName("lineEdit_Haslo");
        lineEdit_Haslo->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Haslo);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Logowanie = new QPushButton(groupBox_Logowanie);
        pushButton_Logowanie->setObjectName("pushButton_Logowanie");

        verticalLayout->addWidget(pushButton_Logowanie);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 801, 71));
        label->setWordWrap(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_zakladaniekonta->setTitle(QCoreApplication::translate("MainWindow", "Za\305\202\303\263\305\274 konto", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Has\305\202o", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Powt\303\263rz has\305\202o", nullptr));
        pushButton_ZalozKonto->setText(QCoreApplication::translate("MainWindow", "Za\305\202\303\263\305\274 konto", nullptr));
        groupBox_Logowanie->setTitle(QCoreApplication::translate("MainWindow", "Logowanie", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Has\305\202o", nullptr));
        pushButton_Logowanie->setText(QCoreApplication::translate("MainWindow", "Zaloguj si\304\231", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">WYPO\305\273YCZALNIA SAMOCHOD\303\223W</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
