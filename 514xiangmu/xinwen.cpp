#include "xinwen.h"
#include "ui_xinwen.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

xinwen::xinwen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xinwen)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

xinwen::~xinwen()
{
    delete ui;
}

void xinwen::on_xinwenjiaoyubu_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.moe.gov.cn/jyb_xwfb/")));
}
void xinwen::on_xinwen0_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.sohu.com/a/195461996_387136")));
}
void xinwen::on_xinwen1_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://baijiahao.baidu.com/s?id=1602536176931761173&wfr=spider&for=pc")));
}

void xinwen::on_xinwen2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://xszz.cydf.org.cn/")));
}


void xinwen::on_xinwen3_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://news.qq.com/zt/2009/statestep/1989.htm")));
}

void xinwen::on_xinwen4_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://xhgy.xinhuanet.com/p/camrp4nyx9v1wdy3wx1ez6gzloqk783e?partner_id=cam7klxnremov5gydo1019z84pwq237o")));
}

void xinwen::on_xinwen5_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://wenku.baidu.com/view/fd24bd3da58da0116c1749f7.html")));
}

void xinwen::on_xinwen6_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://wenku.baidu.com/view/823ca49827284b73f24250fe.html?rec_flag=default&sxts=1560658972901")));
}

void xinwen::on_xinwen7_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://sh.qihoo.com/pc/97140d1910e0e19d0?cota=4&tj_url=so_rec&sign=360_57c3bbd1&refer_scene=so_1")));
}

void xinwen::on_xinwen8_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://nmg.huatu.com/2019/0606/1568569.html")));
}

void xinwen::on_xinwen9_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://baijiahao.baidu.com/s?id=1606381035745300105&wfr=spider&for=pc")));
}

void xinwen::on_xinwen10_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://sh.qihoo.com/pc/90b104f8a53e05696?cota=4&tj_url=so_rec&sign=360_57c3bbd1&refer_scene=so_1")));
}
