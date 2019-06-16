#include "zhengce.h"
#include "ui_zhengce.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

zhengce::zhengce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhengce)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

zhengce::~zhengce()
{
    delete ui;
}
void zhengce::on_xinwen2_6_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://zhidao.baidu.com/question/621803096561038092.html")));
}
void zhengce::on_xinwen2_3_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.aiyangedu.com/JiaoYuXinWen/479457.html")));
}

void zhengce::on_xinwen2_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.mj.org.cn/mjzt/content/2019-03/01/content_316095.htm")));
}

void zhengce::on_xinwen2_5_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("news.163.com/12/0221/00/7QOCD2DN00014AED_mobile.html")));
}

void zhengce::on_xinwen2_1_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.xzbu.com/9/view-5691285.htm")));
}

void zhengce::on_xinwen2_4_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://baijiahao.baidu.com/s?id=1611909633900286875&wfr=spider&for=pc")));
}

void zhengce::on_xinwen2_0_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.gov.cn/zhengce/2015-11/20/content_2968962.htm")));
}


