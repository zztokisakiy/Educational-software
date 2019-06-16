#include "jilupian.h"
#include "ui_jilupian.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

jilupian::jilupian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jilupian)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

jilupian::~jilupian()
{
    delete ui;
}
void jilupian::on_LinkButton_jiaoyubilibili_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://search.bilibili.com/all?keyword=%E6%95%99%E8%82%B2&from_source=banner_search")));
}


void jilupian::on_LinkButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av17898244")));
}

void jilupian::on_LinkButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av13021423")));
}

void jilupian::on_LinkButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av2891614")));
}

void jilupian::on_LinkButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av2686647")));
}
