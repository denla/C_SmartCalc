QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    Model/calculator.c \
    View/credit.cpp \
    View/graph.cpp \
    View/mainwindow.cpp \
    QCustomLibrary/qcustomplot.cpp

HEADERS += \
    Model/calculator.h \
    View/credit.h \
    View/graph.h \
    View/mainwindow.h \
    QCustomLibrary/qcustomplot.h

FORMS += \
    View/credit.ui \
    View/graph.ui \
    View/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    test.qrc

RC_ICONS = images/icon.ico
ICON = images/icon.icns

DISTFILES += \
    images/credit_icon.svg \
    images/icon.icns
