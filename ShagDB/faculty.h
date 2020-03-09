#ifndef FACULTY_H
#define FACULTY_H

#include <QWidget>

namespace Ui {
class faculty;
}

class faculty : public QWidget
{
    Q_OBJECT

public:
    explicit faculty(QWidget *parent = nullptr);
    ~faculty();

private:
    Ui::faculty *ui;
};

#endif // FACULTY_H
