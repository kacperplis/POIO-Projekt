QT       += core gui
QT += widgets
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminmenu.cpp \
    adminmenu_1.cpp \
    adminmenu_11.cpp \
    adminmenu_2.cpp \
    adminmenu_3.cpp \
    main.cpp \
    mainwindow.cpp \
    usermenu.cpp \
    usermenu_1.cpp \
    usermenu_2.cpp \
    usermenu_3.cpp

HEADERS += \
    adminmenu.h \
    adminmenu_1.h \
    adminmenu_11.h \
    adminmenu_2.h \
    adminmenu_3.h \
    mainwindow.h \
    usermenu.h \
    usermenu_1.h \
    usermenu_2.h \
    usermenu_3.h

FORMS += \
    adminmenu.ui \
    adminmenu_1.ui \
    adminmenu_11.ui \
    adminmenu_2.ui \
    adminmenu_3.ui \
    mainwindow.ui \
    usermenu.ui \
    usermenu_1.ui \
    usermenu_2.ui \
    usermenu_3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    dane.qrc \
    resources.qrc \
    resources.qrc
