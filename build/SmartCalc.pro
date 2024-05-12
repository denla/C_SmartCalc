QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    ../src/SmartCalc/calculator.c \
    ../src/SmartCalc/credit.cpp \
    ../src/SmartCalc/graph.cpp \
    ../src/SmartCalc/main.cpp \
    ../src/SmartCalc/mainwindow.cpp \
    ../src/SmartCalc/qcustomplot.cpp

HEADERS += \
    ../src/SmartCalc/calculator.h \
    ../src/SmartCalc/credit.h \
    ../src/SmartCalc/graph.h \
    ../src/SmartCalc/mainwindow.h \
    ../src/SmartCalc/qcustomplot.h

FORMS += \
    ../src/SmartCalc/credit.ui \
    ../src/SmartCalc/graph.ui \
    ../src/SmartCalc/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../src/SmartCalc/test.qrc

RC_ICONS = ../src/SmartCalc/images/icon.ico \
ICON = ../src/SmartCalc/images/icon.icns

DISTFILES += \
    ../src/SmartCalc/images/credit_icon.svg
