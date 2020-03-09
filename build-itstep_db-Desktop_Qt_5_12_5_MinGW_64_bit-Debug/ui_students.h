/********************************************************************************
** Form generated from reading UI file 'students.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTS_H
#define UI_STUDENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Students
{
public:
    QLabel *label_pageStudents;
    QLabel *lab_avatar;
    QLineEdit *lineEdit;
    QTableWidget *tableStudents;
    QPushButton *pushButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *lab_Firstname;
    QLineEdit *line_LastName;
    QLabel *lab_Name;
    QLineEdit *line_Name;
    QLabel *lab_Patronimyc;
    QLineEdit *line_Patronymic;
    QLabel *lab_Age;
    QLineEdit *line_Age;
    QLabel *lab_Sex;
    QLineEdit *line_Sex;
    QLabel *lab_Phone;
    QLineEdit *line_Phone;
    QLabel *lab_Email;
    QLineEdit *line_Email;
    QLabel *lab_GroupNumber;
    QLineEdit *line_GroupNumber;
    QLabel *lab_Status;
    QLineEdit *line_Status;
    QLabel *lab_Faculty;
    QLineEdit *line_Faculty;
    QLabel *lab_StartEdu;
    QLineEdit *line_StartEdu;
    QLineEdit *line_EndEdu;
    QLabel *lab_EndEdu;
    QPushButton *ButtonSearch;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton_Edit;
    QTextEdit *textSearch;

    void setupUi(QWidget *Students)
    {
        if (Students->objectName().isEmpty())
            Students->setObjectName(QString::fromUtf8("Students"));
        Students->resize(1280, 800);
        label_pageStudents = new QLabel(Students);
        label_pageStudents->setObjectName(QString::fromUtf8("label_pageStudents"));
        label_pageStudents->setGeometry(QRect(0, 0, 1280, 800));
        label_pageStudents->setPixmap(QPixmap(QString::fromUtf8("DesignImages/fon_end.png")));
        lab_avatar = new QLabel(Students);
        lab_avatar->setObjectName(QString::fromUtf8("lab_avatar"));
        lab_avatar->setGeometry(QRect(870, 60, 227, 242));
        lab_avatar->setPixmap(QPixmap(QString::fromUtf8("DesignImages/Photo.png")));
        lineEdit = new QLineEdit(Students);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 0, 441, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("MoolBoran"));
        font.setPointSize(72);
        lineEdit->setFont(font);
        tableStudents = new QTableWidget(Students);
        if (tableStudents->columnCount() < 3)
            tableStudents->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableStudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableStudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableStudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableStudents->rowCount() < 1000)
            tableStudents->setRowCount(1000);
        tableStudents->setObjectName(QString::fromUtf8("tableStudents"));
        tableStudents->setGeometry(QRect(20, 330, 600, 451));
        tableStudents->setLineWidth(1);
        tableStudents->setRowCount(1000);
        tableStudents->horizontalHeader()->setDefaultSectionSize(181);
        pushButton = new QPushButton(Students);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 330, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("DesignImages/Add_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(31, 31));
        formLayoutWidget_2 = new QWidget(Students);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(760, 320, 501, 281));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(0);
        formLayout_2->setVerticalSpacing(0);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Firstname = new QLabel(formLayoutWidget_2);
        lab_Firstname->setObjectName(QString::fromUtf8("lab_Firstname"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lab_Firstname->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lab_Firstname);

        line_LastName = new QLineEdit(formLayoutWidget_2);
        line_LastName->setObjectName(QString::fromUtf8("line_LastName"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, line_LastName);

        lab_Name = new QLabel(formLayoutWidget_2);
        lab_Name->setObjectName(QString::fromUtf8("lab_Name"));
        lab_Name->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lab_Name);

        line_Name = new QLineEdit(formLayoutWidget_2);
        line_Name->setObjectName(QString::fromUtf8("line_Name"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, line_Name);

        lab_Patronimyc = new QLabel(formLayoutWidget_2);
        lab_Patronimyc->setObjectName(QString::fromUtf8("lab_Patronimyc"));
        lab_Patronimyc->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lab_Patronimyc);

        line_Patronymic = new QLineEdit(formLayoutWidget_2);
        line_Patronymic->setObjectName(QString::fromUtf8("line_Patronymic"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, line_Patronymic);

        lab_Age = new QLabel(formLayoutWidget_2);
        lab_Age->setObjectName(QString::fromUtf8("lab_Age"));
        lab_Age->setFont(font1);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, lab_Age);

        line_Age = new QLineEdit(formLayoutWidget_2);
        line_Age->setObjectName(QString::fromUtf8("line_Age"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, line_Age);

        lab_Sex = new QLabel(formLayoutWidget_2);
        lab_Sex->setObjectName(QString::fromUtf8("lab_Sex"));
        lab_Sex->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, lab_Sex);

        line_Sex = new QLineEdit(formLayoutWidget_2);
        line_Sex->setObjectName(QString::fromUtf8("line_Sex"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, line_Sex);

        lab_Phone = new QLabel(formLayoutWidget_2);
        lab_Phone->setObjectName(QString::fromUtf8("lab_Phone"));
        lab_Phone->setFont(font1);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, lab_Phone);

        line_Phone = new QLineEdit(formLayoutWidget_2);
        line_Phone->setObjectName(QString::fromUtf8("line_Phone"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, line_Phone);

        lab_Email = new QLabel(formLayoutWidget_2);
        lab_Email->setObjectName(QString::fromUtf8("lab_Email"));
        lab_Email->setFont(font1);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, lab_Email);

        line_Email = new QLineEdit(formLayoutWidget_2);
        line_Email->setObjectName(QString::fromUtf8("line_Email"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, line_Email);

        lab_GroupNumber = new QLabel(formLayoutWidget_2);
        lab_GroupNumber->setObjectName(QString::fromUtf8("lab_GroupNumber"));
        lab_GroupNumber->setFont(font1);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, lab_GroupNumber);

        line_GroupNumber = new QLineEdit(formLayoutWidget_2);
        line_GroupNumber->setObjectName(QString::fromUtf8("line_GroupNumber"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, line_GroupNumber);

        lab_Status = new QLabel(formLayoutWidget_2);
        lab_Status->setObjectName(QString::fromUtf8("lab_Status"));
        lab_Status->setFont(font1);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, lab_Status);

        line_Status = new QLineEdit(formLayoutWidget_2);
        line_Status->setObjectName(QString::fromUtf8("line_Status"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, line_Status);

        lab_Faculty = new QLabel(formLayoutWidget_2);
        lab_Faculty->setObjectName(QString::fromUtf8("lab_Faculty"));
        lab_Faculty->setFont(font1);

        formLayout_2->setWidget(10, QFormLayout::LabelRole, lab_Faculty);

        line_Faculty = new QLineEdit(formLayoutWidget_2);
        line_Faculty->setObjectName(QString::fromUtf8("line_Faculty"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, line_Faculty);

        lab_StartEdu = new QLabel(formLayoutWidget_2);
        lab_StartEdu->setObjectName(QString::fromUtf8("lab_StartEdu"));
        lab_StartEdu->setFont(font1);

        formLayout_2->setWidget(11, QFormLayout::LabelRole, lab_StartEdu);

        line_StartEdu = new QLineEdit(formLayoutWidget_2);
        line_StartEdu->setObjectName(QString::fromUtf8("line_StartEdu"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, line_StartEdu);

        line_EndEdu = new QLineEdit(formLayoutWidget_2);
        line_EndEdu->setObjectName(QString::fromUtf8("line_EndEdu"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, line_EndEdu);

        lab_EndEdu = new QLabel(formLayoutWidget_2);
        lab_EndEdu->setObjectName(QString::fromUtf8("lab_EndEdu"));
        lab_EndEdu->setFont(font1);

        formLayout_2->setWidget(12, QFormLayout::LabelRole, lab_EndEdu);

        ButtonSearch = new QPushButton(Students);
        ButtonSearch->setObjectName(QString::fromUtf8("ButtonSearch"));
        ButtonSearch->setGeometry(QRect(530, 290, 91, 31));
        buttonBox = new QDialogButtonBox(Students);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setGeometry(QRect(920, 700, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton_Edit = new QPushButton(Students);
        pushButton_Edit->setObjectName(QString::fromUtf8("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(974, 732, 101, 31));
        textSearch = new QTextEdit(Students);
        textSearch->setObjectName(QString::fromUtf8("textSearch"));
        textSearch->setGeometry(QRect(20, 290, 511, 31));

        retranslateUi(Students);

        QMetaObject::connectSlotsByName(Students);
    } // setupUi

    void retranslateUi(QWidget *Students)
    {
        Students->setWindowTitle(QApplication::translate("Students", "Form", nullptr));
        label_pageStudents->setText(QString());
        lab_avatar->setText(QString());
        lineEdit->setText(QApplication::translate("Students", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Students", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Students", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Students", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        pushButton->setText(QString());
        lab_Firstname->setText(QApplication::translate("Students", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        lab_Name->setText(QApplication::translate("Students", "\320\230\320\274\321\217", nullptr));
        lab_Patronimyc->setText(QApplication::translate("Students", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        lab_Age->setText(QApplication::translate("Students", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        lab_Sex->setText(QApplication::translate("Students", "\320\237\320\276\320\273", nullptr));
        lab_Phone->setText(QApplication::translate("Students", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        lab_Email->setText(QApplication::translate("Students", "E-mail", nullptr));
        lab_GroupNumber->setText(QApplication::translate("Students", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        lab_Status->setText(QApplication::translate("Students", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        lab_Faculty->setText(QApplication::translate("Students", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
        lab_StartEdu->setText(QApplication::translate("Students", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        lab_EndEdu->setText(QApplication::translate("Students", "\320\232\320\276\320\275\320\265\321\206 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        ButtonSearch->setText(QApplication::translate("Students", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton_Edit->setText(QApplication::translate("Students", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Students: public Ui_Students {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTS_H
