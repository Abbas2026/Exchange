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
    main.cpp \
    form.cpp \
    mywallet.cpp \
    priceupdater.cpp \
    signin.cpp \
    walldetails.cpp

HEADERS += \
    client.h \
    dashboard.h \
    form.h \
    mywallet.h \
    priceupdater.h \
    signin.h \
    walldetails.h

FORMS += \
    dashboard.ui \
    form.ui \
    mywallet.ui \
    signin.ui \
    walldetails.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
