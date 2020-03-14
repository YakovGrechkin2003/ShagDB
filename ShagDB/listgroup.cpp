#include "listgroup.h"
#include "ui_listgroup.h"

listgroup::listgroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listgroup)
{
    ui->setupUi(this);
}

listgroup::~listgroup()
{
    delete ui;
}
