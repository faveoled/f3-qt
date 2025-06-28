#-------------------------------------------------
#
# Project created by QtCreator 2016-03-23T17:54:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = f3-qt
TEMPLATE = app

DEFINES += QT_DISABLE_DEPRECATED_UP_TO=0x050F00

VER_MAJ = 2
VER_MIN = 2
VER_PAT = 0
VERSION = 2.2.0
VERSION_PE_HEADER = 2.2.0

DEFINES += APP_VERSION=\\\"$$VERSION\\\"

SOURCES += main.cpp\
        mainwindow.cpp \
    f3_launcher.cpp \
    helpwindow.cpp

HEADERS  += mainwindow.h \
    f3_launcher.h \
    helpwindow.h

FORMS    += mainwindow.ui \
    helpwindow.ui

DISTFILES +=

RESOURCES += \
    icon.qrc

target.path = $${PREFIX}/bin/

INSTALLS += target
