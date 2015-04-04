#-------------------------------------------------
#
# Project created by QtCreator 2015-04-04T16:14:27
#
#-------------------------------------------------

QT       -= gui

TARGET = QtHtmlParser
TEMPLATE = app

DEFINES += QTHTMLPARSER_LIBRARY

SOURCES += qthtmlparser.cpp \
    node.cpp \
    attributes.cpp \
    attribute.cpp \
    main.cpp

HEADERS += qthtmlparser.h\
        qthtmlparser_global.h \
    node.h \
    attributes.h \
    attribute.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
