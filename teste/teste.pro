TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c \
    start-informatie.c \
    ammount.c \
    order.c \
    display.c \
    refill.c \
    reset.c

HEADERS += \
    locatie.h \
    refill.h \
    order.h \
    ammount.h \
    display.h

DISTFILES +=
