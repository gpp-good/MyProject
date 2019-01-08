#include "function.h"
#include "ui_function.h"
#include "hand.h"
#include "enroll.h"

function::function(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::function)
{
    ui->setupUi(this);
    flag = 0;
    ui->widget->hide ();
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("test.db");
    }

}

function::~function()
{
    delete ui;
}

void function::on_close_clicked()
{
    this->parentWidget()->show();
    delete this;
}
void function::on_toolButton_clicked()
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


void function::on_entry_clicked()
{
    if(database.open())
    {
        QSqlQuery query;
        query.exec("create table sql(姓名 text,密码 int)");
        QString user_name = ui->nameEdit->text ();
        QString user_pass = ui->passwordEdit->text ();
        if(user_name.isEmpty ()||user_pass.isEmpty ())
        {
            QMessageBox::warning (this,"提示","请输入账号或密码");
        }
        else
        {
            QSqlQuery query;
            query.exec(QString("select * from sql where 姓名='%1'and 密码='%2' ").arg(user_name).arg(user_pass));
            if(query.first())
            {
                database.close();
                hand *t = new hand(this);
                t->show();
                this->hide();
            }
            else
            {
                QMessageBox::warning (this,"提示","账号或密码错误");
                ui->nameEdit->clear ();
                ui->passwordEdit->clear ();
            }
        }
    }
}

void function::on_entry_2_clicked()
{
    enroll *rr = new enroll(this);
    rr->show();
    this->hide();
}
