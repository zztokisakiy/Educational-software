#include "zhuye.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QSqlQuery>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //添加数据库驱动
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    //设置数据库名称
    db.setDatabaseName("./SYSU.db");

    if(db.open())
    {
        qDebug()<<"open success";
    }
    else
    {
        qDebug()<<"open failed";
        return false;
    }

    zhuye w;
    w.setStyleSheet("QMainWindow{background-image: url(:/image/tubiaoboshiblank.png)}");
    w.show();

    return a.exec();
}
