#ifndef LISTGROUP_H
#define LISTGROUP_H

#include <QWidget>

namespace Ui {
class listgroup;
}

class listgroup : public QWidget
{
    Q_OBJECT

public:
    explicit listgroup(QWidget *parent = nullptr);
    ~listgroup();

private:
    Ui::listgroup *ui;
};

#endif // LISTGROUP_H
