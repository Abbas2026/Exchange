QT       += core gui
QT += core gui network
QT += svg
QT += concurrent
QT += core network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    dashboard.cpp \
    deposit.cpp \
    exchange.cpp \
    main.cpp \
    form.cpp \
    mywallet.cpp \
    priceupdater.cpp \
    profile.cpp \
    signin.cpp \
    walldetails.cpp \
    coingeckoapi.cpp \
    CurrentPrice.cpp \
    withdrawal.cpp \

HEADERS += \
    client.h \
    dashboard.h \
    deposit.h \
    exchange.h \
    form.h \
    mywallet.h \
    priceupdater.h \
    profile.h \
    signin.h \
    walldetails.h \
    coingeckoapi.h \
    CurrentPrice.h \
    withdrawal.h \


FORMS += \
    dashboard.ui \
    deposit.ui \
    exchange.ui \
    form.ui \
    mywallet.ui \
    profile.ui \
    signin.ui \
    walldetails.ui \
    coingeckoapi.ui \
    CurrentPrice.ui \
    withdrawal.ui \
    exchange.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
