#include "chaxun.h"
#include "ui_chaxun.h"

chaxun::chaxun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chaxun)
{
    ui->setupUi(this);
}

chaxun::~chaxun()
{
    delete ui;
}
