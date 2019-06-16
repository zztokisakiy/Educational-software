#include "zhuye.h"
#include "ui_zhuye.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

zhuye::zhuye(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zhuye)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

zhuye::~zhuye()
{
    delete ui;
}

void zhuye::on_LinkButton_zhaunyechaxun_clicked()
{
    new_zhuanye->show();
    this->lower();
}

void zhuye::on_LinkButton_xiaoqu_clicked()
{
    new_xiaoqu->show();
    this->lower();
}

void zhuye::on_LinkButton_zhuanyeluqu_clicked()
{
    new_zhengce->show();
    this->lower();
}

void zhuye::on_LinkButton_xinwen_clicked()
{
    new_xinwen->show();
    this->lower();
}

void zhuye::on_LinkButton_zhengce_clicked()
{
    new_zhengce->show();
    this->lower();
}

void zhuye::on_LinkButton_jilupian_clicked()
{
    new_jilupian->show();
    this->lower();
}

