#ifndef CHAXUN_H
#define CHAXUN_H

#include <QWidget>

namespace Ui {
class chaxun;
}

class chaxun : public QWidget
{
    Q_OBJECT

public:
    explicit chaxun(QWidget *parent = nullptr);
    ~chaxun();

private:
    Ui::chaxun *ui;
};

#endif // CHAXUN_H
