#ifndef JILUPIAN_H
#define JILUPIAN_H

#include <QWidget>

namespace Ui {
class jilupian;
}

class jilupian : public QWidget
{
    Q_OBJECT

public:
    explicit jilupian(QWidget *parent = nullptr);
    ~jilupian();

private slots:
    void on_LinkButton_clicked();
    void on_LinkButton_2_clicked();
    void on_LinkButton_3_clicked();
    void on_LinkButton_4_clicked();
    void on_LinkButton_jiaoyubilibili_clicked();

private:
    Ui::jilupian *ui;
};

#endif // JILUPIAN_H
