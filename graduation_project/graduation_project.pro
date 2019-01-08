#-------------------------------------------------
#
# Project created by QtCreator 2018-09-14T11:00:49
#
#-------------------------------------------------

QT       += core gui
QT      +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graduation_project
TEMPLATE = app


SOURCES += main.cpp\
        main_interface.cpp \
    key_por.cpp \
    inbutton.cpp \
    function.cpp \
    hand.cpp \
    rfid.cpp \
    music.cpp \
    enroll.cpp

HEADERS  += main_interface.h \
    key_por.h \
    inbutton.h \
    function.h \
    hand.h \
    rfid.h \
    music.h \
    enroll.h

FORMS    += main_interface.ui \
    key_por.ui \
    function.ui \
    hand.ui \
    enroll.ui

RESOURCES += \
    png.qrc
