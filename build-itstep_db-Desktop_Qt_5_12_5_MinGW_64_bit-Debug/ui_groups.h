/********************************************************************************
** Form generated from reading UI file 'groups.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPS_H
#define UI_GROUPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_pageGroups;
    QTextEdit *textSearch;
    QPushButton *buttonSearch;
    QTableWidget *tableGroup;
    QLabel *labelGroup;
    QPushButton *buttonBack;
    QToolButton *toolEdit;
    QPushButton *pushAdd;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1280, 800);
        label_pageGroups = new QLabel(Form);
        label_pageGroups->setObjectName(QString::fromUtf8("label_pageGroups"));
        label_pageGroups->setGeometry(QRect(0, 0, 1280, 800));
        label_pageGroups->setPixmap(QPixmap(QString::fromUtf8("DesignImages/fon_end.png")));
        textSearch = new QTextEdit(Form);
        textSearch->setObjectName(QString::fromUtf8("textSearch"));
        textSearch->setGeometry(QRect(330, 10, 791, 31));
        buttonSearch = new QPushButton(Form);
        buttonSearch->setObjectName(QString::fromUtf8("buttonSearch"));
        buttonSearch->setGeometry(QRect(1120, 10, 101, 31));
        tableGroup = new QTableWidget(Form);
        if (tableGroup->columnCount() < 5)
            tableGroup->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableGroup->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableGroup->setObjectName(QString::fromUtf8("tableGroup"));
        tableGroup->setGeometry(QRect(440, 80, 561, 611));
        labelGroup = new QLabel(Form);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));
        labelGroup->setGeometry(QRect(590, 50, 231, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelGroup->setFont(font);
        buttonBack = new QPushButton(Form);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        buttonBack->setGeometry(QRect(14, 2, 281, 271));
        buttonBack->setFlat(true);
        toolEdit = new QToolButton(Form);
        toolEdit->setObjectName(QString::fromUtf8("toolEdit"));
        toolEdit->setEnabled(true);
        toolEdit->setGeometry(QRect(940, 80, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("DesignImages/EditButtonend.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolEdit->setIcon(icon);
        toolEdit->setIconSize(QSize(24, 24));
        toolEdit->setCheckable(false);
        toolEdit->setPopupMode(QToolButton::DelayedPopup);
        toolEdit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolEdit->setArrowType(Qt::NoArrow);
        pushAdd = new QPushButton(Form);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setGeometry(QRect(970, 80, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("DesignImages/Add_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAdd->setIcon(icon1);
        pushAdd->setIconSize(QSize(24, 24));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_pageGroups->setText(QString());
        buttonSearch->setText(QApplication::translate("Form", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableGroup->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "\320\230\320\274\321\217 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableGroup->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "\320\244\320\276\321\200\320\274\320\260 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableGroup->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableGroup->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "\320\232\320\276\320\275\320\265\321\206 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableGroup->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Form", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        labelGroup->setText(QApplication::translate("Form", "   \320\241\320\277\320\270\321\201\320\276\320\272 \320\263\321\200\321\203\320\277\320\277", nullptr));
        buttonBack->setText(QString());
        toolEdit->setText(QString());
        pushAdd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPS_H
