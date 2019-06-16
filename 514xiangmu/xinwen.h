#ifndef XINWEN_H
#define XINWEN_H

#include <QWidget>

namespace Ui {
class xinwen;
}

class xinwen : public QWidget
{
    Q_OBJECT

public:
    explicit xinwen(QWidget *parent = nullptr);
    ~xinwen();

private slots:
    void on_xinwen0_clicked();
    void on_xinwenjiaoyubu_clicked();
    void on_xinwen1_clicked();
    void on_xinwen2_clicked();
    void on_xinwen3_clicked();
    void on_xinwen4_clicked();
    void on_xinwen5_clicked();
    void on_xinwen6_clicked();
    void on_xinwen7_clicked();
    void on_xinwen8_clicked();
    void on_xinwen9_clicked();
    void on_xinwen10_clicked();

private:
    Ui::xinwen *ui;
};

#endif // XINWEN_H
