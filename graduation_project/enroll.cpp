#include "enroll.h"
#include "ui_enroll.h"

enroll::enroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::enroll)
{
    ui->setupUi(this);
    flag = 0;
    ui->widget->hide ();
}

enroll::~enroll()
{
    delete ui;
}

void enroll::on_pushButton_clicked()
{
    QString name,pass,pass1;
    name = ui->name_4->text ();
    pass = ui->passwor_4->text ();
    pass1 = ui->passwor_5->text ();
    if(pass != pass1)
    {
     QMessageBox::information(this,tr("消息"),tr("密码输入不一致"));

    }
    else if(pass.isEmpty()|| pass1.isEmpty()|| name.isEmpty())
    {
     QMessageBox::information(this,tr("消息"),tr("注册信息不完善"));

    }
    else if(pass == pass1)
    {
        QString i=QString("insert into sql values ('%1','%2'); ").arg(name).arg(pass);
        QString S =QString("select * from sql where 姓名='%1' ").arg(name);
        QSqlQuery query;
        if(query.exec(i))
        {
            QMessageBox::warning(NULL, "提示", "注册成功！");
            this->parentWidget()->show();
            delete this;//删除本窗口
        }
        else if(query.exec(S)&&query.first())
            QMessageBox::warning(NULL,"错误","用户名重复，请重试！");
        else
            QMessageBox::warning(NULL,"错误","注册失败，请重试！");
    }
}

void enroll::on_close123_clicked()
{
    this->parentWidget()->show();
    delete this;//删除本窗口
}

void enroll::on_toolButton_clicked()
{
    if(flag == 0)
    {
        ui->widget->show();
        flag = 1;
    }
    else
    {
        ui->widget->hide ();
        flag = 0;
    }
}
