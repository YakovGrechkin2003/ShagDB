/********************************************************************************
** Form generated from reading UI file 'faculty.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTY_H
#define UI_FACULTY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_faculty
{
public:
    QPushButton *pushSearch;
    QTextEdit *textSearch;
    QLabel *label_pageCourses;
    QTableWidget *tableCourses;
    QLineEdit *lineFaculty;
    QPushButton *pushAdd;

    void setupUi(QWidget *faculty)
    {
        if (faculty->objectName().isEmpty())
            faculty->setObjectName(QString::fromUtf8("faculty"));
        faculty->resize(1280, 800);
        pushSearch = new QPushButton(faculty);
        pushSearch->setObjectName(QString::fromUtf8("pushSearch"));
        pushSearch->setGeometry(QRect(1100, 20, 101, 31));
        textSearch = new QTextEdit(faculty);
        textSearch->setObjectName(QString::fromUtf8("textSearch"));
        textSearch->setGeometry(QRect(310, 20, 791, 31));
        label_pageCourses = new QLabel(faculty);
        label_pageCourses->setObjectName(QString::fromUtf8("label_pageCourses"));
        label_pageCourses->setGeometry(QRect(0, 0, 1280, 800));
        label_pageCourses->setPixmap(QPixmap(QString::fromUtf8("DesignImages/fon_end.png")));
        tableCourses = new QTableWidget(faculty);
        if (tableCourses->columnCount() < 2)
            tableCourses->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableCourses->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableCourses->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableCourses->rowCount() < 1000)
            tableCourses->setRowCount(1000);
        tableCourses->setObjectName(QString::fromUtf8("tableCourses"));
        tableCourses->setGeometry(QRect(310, 120, 891, 631));
        tableCourses->setRowCount(1000);
        tableCourses->horizontalHeader()->setMinimumSectionSize(39);
        tableCourses->verticalHeader()->setDefaultSectionSize(29);
        lineFaculty = new QLineEdit(faculty);
        lineFaculty->setObjectName(QString::fromUtf8("lineFaculty"));
        lineFaculty->setGeometry(QRect(650, 80, 231, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lineFaculty->setFont(font);
        pushAdd = new QPushButton(faculty);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setGeometry(QRect(1154, 120, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("DesignImages/Add_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAdd->setIcon(icon);
        pushAdd->setIconSize(QSize(24, 24));
        label_pageCourses->raise();
        lineFaculty->raise();
        pushSearch->raise();
        tableCourses->raise();
        textSearch->raise();
        pushAdd->raise();

        retranslateUi(faculty);

        QMetaObject::connectSlotsByName(faculty);
    } // setupUi

    void retranslateUi(QWidget *faculty)
    {
        faculty->setWindowTitle(QApplication::translate("faculty", "Form", nullptr));
        pushSearch->setText(QApplication::translate("faculty", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_pageCourses->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableCourses->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("faculty", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableCourses->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("faculty", "\320\232\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        lineFaculty->setText(QApplication::translate("faculty", "   \320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202\321\213", nullptr));
        pushAdd->setText(QString());
    } // retranslateUi
};

namespace Ui {
    class faculty: public Ui_faculty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTY_H
