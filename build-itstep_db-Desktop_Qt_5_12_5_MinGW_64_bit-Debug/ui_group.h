/********************************************************************************
** Form generated from reading UI file 'group.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_H
#define UI_GROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_group
{
public:
    QTableWidget *tableGroup;
    QPushButton *buttonSearch;
    QLabel *label_pageGroup;
    QPushButton *pushAdd;
    QLabel *labelGroup;
    QTextEdit *textSearch;
    QPushButton *pushEdit;

    void setupUi(QWidget *group)
    {
        if (group->objectName().isEmpty())
            group->setObjectName(QString::fromUtf8("group"));
        group->resize(1280, 800);
        tableGroup = new QTableWidget(group);
        if (tableGroup->columnCount() < 3)
            tableGroup->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableGroup->setObjectName(QString::fromUtf8("tableGroup"));
        tableGroup->setGeometry(QRect(320, 110, 791, 611));
        buttonSearch = new QPushButton(group);
        buttonSearch->setObjectName(QString::fromUtf8("buttonSearch"));
        buttonSearch->setGeometry(QRect(1110, 30, 101, 31));
        label_pageGroup = new QLabel(group);
        label_pageGroup->setObjectName(QString::fromUtf8("label_pageGroup"));
        label_pageGroup->setGeometry(QRect(0, 0, 1280, 800));
        label_pageGroup->setPixmap(QPixmap(QString::fromUtf8("DesignImages/fon_end.png")));
        pushAdd = new QPushButton(group);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setGeometry(QRect(1080, 110, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("DesignImages/Add_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAdd->setIcon(icon);
        pushAdd->setIconSize(QSize(24, 24));
        labelGroup = new QLabel(group);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));
        labelGroup->setGeometry(QRect(600, 70, 231, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelGroup->setFont(font);
        textSearch = new QTextEdit(group);
        textSearch->setObjectName(QString::fromUtf8("textSearch"));
        textSearch->setGeometry(QRect(320, 30, 791, 31));
        pushEdit = new QPushButton(group);
        pushEdit->setObjectName(QString::fromUtf8("pushEdit"));
        pushEdit->setGeometry(QRect(1050, 110, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("DesignImages/EditButtonend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushEdit->setIcon(icon1);
        pushEdit->setIconSize(QSize(24, 24));
        label_pageGroup->raise();
        buttonSearch->raise();
        labelGroup->raise();
        tableGroup->raise();
        textSearch->raise();
        pushAdd->raise();
        pushEdit->raise();

        retranslateUi(group);

        QMetaObject::connectSlotsByName(group);
    } // setupUi

    void retranslateUi(QWidget *group)
    {
        group->setWindowTitle(QApplication::translate("group", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableGroup->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("group", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableGroup->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("group", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableGroup->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("group", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        buttonSearch->setText(QApplication::translate("group", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_pageGroup->setText(QString());
        pushAdd->setText(QString());
        labelGroup->setText(QApplication::translate("group", "<\320\230\320\274\321\217 \320\263\321\200\321\203\320\277\320\277\321\213>", nullptr));
        pushEdit->setText(QString());
    } // retranslateUi
};

namespace Ui {
    class group: public Ui_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_H
