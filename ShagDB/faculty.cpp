#include "faculty.h"
#include "ui_faculty.h"

faculty::faculty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::faculty)
{
    ui->setupUi(this);
}

faculty::~faculty()
{
    delete ui;
}
