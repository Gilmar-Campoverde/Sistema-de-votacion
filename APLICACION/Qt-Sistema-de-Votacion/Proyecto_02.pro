QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrador.cpp \
    certificado.cpp \
    controlador.cpp \
    main.cpp \
    principal.cpp \
    resultados.cpp \
    votacion.cpp \
    votante.cpp

HEADERS += \
    administrador.h \
    certificado.h \
    controlador.h \
    principal.h \
    resultados.h \
    votacion.h \
    votante.h

FORMS += \
    administrador.ui \
    certificado.ui \
    principal.ui \
    resultados.ui \
    votacion.ui

TRANSLATIONS += \
    Proyecto_02_es_EC.ts \
    Proyecto_02_en_US.ts \
    Proyecto_02_qu_EC.ts


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recursos.qrc
