#ifndef ZHENGCE_H
#define ZHENGCE_H

#include <QWidget>

namespace Ui {
class zhengce;
}

class zhengce : public QWidget
{
    Q_OBJECT

public:
    explicit zhengce(QWidget *parent = nullptr);
    ~zhengce();

private slots:
    void on_xinwen2_6_clicked();
    void on_xinwen2_5_clicked();
    void on_xinwen2_4_clicked();
    void on_xinwen2_3_clicked();
    void on_xinwen2_2_clicked();
    void on_xinwen2_1_clicked();
    void on_xinwen2_0_clicked();

private:
    Ui::zhengce *ui;
};

#endif // ZHENGCE_H
