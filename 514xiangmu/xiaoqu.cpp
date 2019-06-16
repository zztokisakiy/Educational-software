#include "xiaoqu.h"
#include "ui_xiaoqu.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

xiaoqu::xiaoqu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiaoqu)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

xiaoqu::~xiaoqu()
{
    delete ui;
}

void xiaoqu::on_LinkButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.huxiu.com/article/256291.html")));
}

void xiaoqu::on_LinkButton_0_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://edu.sina.com.cn/zt_d/edugongyi/")));
}


void xiaoqu::on_LinkButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.360doc.com/content/14/0107/15/8068587_343336077.shtml")));
}

void xiaoqu::on_LinkButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://k.sina.com.cn/article_6425350432_17efb1120001002swg.html")));
}
