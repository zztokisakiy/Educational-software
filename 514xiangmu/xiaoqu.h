#ifndef XIAOQU_H
#define XIAOQU_H

#include <QWidget>

namespace Ui {
class xiaoqu;
}

class xiaoqu : public QWidget
{
    Q_OBJECT

public:
    explicit xiaoqu(QWidget *parent = nullptr);
    ~xiaoqu();

private slots:
    void on_LinkButton_clicked();
    void on_LinkButton_0_clicked();
    void on_LinkButton_2_clicked();
    void on_LinkButton_3_clicked();


private:
    Ui::xiaoqu *ui;
};

#endif // XIAOQU_H
