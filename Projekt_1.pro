QT += core
QT -= gui

TARGET = Projekt_1
CONFIG += console
CONFIG -= app_bundle
CONFIG += c++11

TEMPLATE = app

SOURCES += main.cpp \
    matrixgraph.cpp \
    listgraph.cpp

HEADERS += \
    matrixgraph.h \
    listgraph.h

