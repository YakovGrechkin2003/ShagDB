#-------------------------------------------------
#
# Project created by QtCreator 2020-02-11T19:38:43
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = itstep_db
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        faculty.cpp \
        group.cpp \
        main.cpp \
        mainwindow.cpp \
        students.cpp \
        teacher.cpp

HEADERS += \
        faculty.h \
        group.h \
        mainwindow.h \
        students.h \
        teacher.h \
        database.h \
        ModelFaculty.h \
        ModelGroup.h \
        ModelGroups.h \
        ModelManagers.h \
        ModelStudents.h \
        ModelTeachers.h

FORMS += \
    faculty.ui \
    group.ui \
        mainwindow.ui \
    groups.ui \
    students.ui \
    teacher.ui
    
    # Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
