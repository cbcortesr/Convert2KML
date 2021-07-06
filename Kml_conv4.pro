QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acercatfm.cpp \
    generar_kml.cpp \
    generar_kml2.cpp \
    main.cpp \
    puntoscampo.cpp \
    ventanaprincipal.cpp

HEADERS += \
    acercatfm.h \
    generar_kml.h \
    generar_kml2.h \
    puntoscampo.h \
    ventanaprincipal.h

FORMS += \
    acercatfm.ui \
    ventanaprincipal.ui

RC_ICONS = icono.ico
# <div>Iconos diseñados por <a href="https://www.freepik.com" title="Freepik">Freepik</a> from <a href="https://www.flaticon.es/" title="Flaticon">www.flaticon.es</a></div>

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
