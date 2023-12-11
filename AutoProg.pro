TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    header.h \
    client.h \
    maintenanceworks.h \
    parts.h \
    financialoperations.h \
    reports.h \
    administrator.h \
    notificationsystem.h \
    interface.h

