#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T10:56:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pokedex
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pokemon.cpp \
    infopokemon.cpp \
    type.cpp \
    effet.cpp \
    attaque.cpp \
    pokemoncreate.cpp \
    pokedexclass.cpp \
    typecreate.cpp \
    details.cpp \
    gameclass.cpp \
    attaquecreate.cpp \
    effetcreate.cpp \
    infocreate.cpp \
    keyenterreceiver.cpp

HEADERS  += mainwindow.h \
    pokemon.h \
    infopokemon.h \
    type.h \
    effet.h \
    attaque.h \
    pokemoncreate.h \
    pokedexclass.h \
    typecreate.h \
    details.h \
    gameclass.h \
    attaquecreate.h \
    effetcreate.h \
    infocreate.h \
    keyenterreceiver.h

FORMS    += mainwindow.ui \
    details.ui

RESOURCES += \
    images.qrc
