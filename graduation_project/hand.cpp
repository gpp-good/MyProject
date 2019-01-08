#include "hand.h"
#include "ui_hand.h"
#include "QDebug"
hand::hand(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hand)
{
    ui->setupUi(this);

    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        data = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        data = QSqlDatabase::addDatabase("QSQLITE");
        data.setDatabaseName("test.db");
    }
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("test.db");
    }

    flag = 0;
    ui->widget->hide ();
}

hand::~hand()
{
    delete ui;
}

void hand::on_close_clicked()
{
    this->parentWidget()->show();
    delete this;
}

void hand::on_toolButton_clicked()
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

//查询消费记录
void hand::on_pushButton_clicked()
{
    ui->listWidget->clear ();
    QSqlQuery sql_query(database);
    sql_query.prepare("select * from menoy");
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int number = sql_query.value(0).toInt();
            QString id = sql_query.value(1).toString();
            int  menoy = sql_query.value(2).toInt();
            QString ab = "        "+QString::number (number)+"                "+id+"        "+QString::number (menoy)+"元";
            ui->listWidget->addItem (ab);
        }
    }

}
//查询餐盘信息
void hand::on_pushButton_3_clicked()
{
    ui->listWidget_2->clear ();
    QSqlQuery sql_query(data);
    sql_query.prepare("select * from COMPANY");
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int number = sql_query.value(0).toInt();
            QString id = sql_query.value(1).toString();
            QString name = sql_query.value(2).toString();
            int  menoy = sql_query.value(3).toInt();
            QString ab = QString::number (number)+"     "+name+"    "+QString::number (menoy)+"元";
            ui->listWidget_2->addItem (ab);
        }
    }

}
//单击的行号
void hand::on_listWidget_2_clicked(const QModelIndex &index)
{
    currenRow = ui->listWidget_2->currentRow();//当前单击选中ListWidget控件的行号（第几行）
    qDebug()<<currenRow;
}

//修改餐盘价格
void hand::on_pushButton_2_clicked()
{
    QString mon = ui->lineEdit->text ();
    qDebug()<<mon.toInt ();
    QSqlQuery sql(data);
    sql.prepare(QString("update COMPANY set \"价格\" = %1 where \"序号\" = %2").arg(mon).arg (currenRow+1));
    if( !sql.exec() )
      qDebug() << sql.lastError();
    else
      qDebug( "Updated!" );
    ui->listWidget_2->clear ();
    on_pushButton_3_clicked();


}
//删除全部消费记录
void hand::on_pushButton_4_clicked()
{
    int ret =  QMessageBox::information (this,"提示","是否删除","删除","取消");

    if(ret==0)
    {
        QSqlQuery clear_sql(database);
        clear_sql.prepare("delete from menoy");
        if(!clear_sql.exec())
        {
            qDebug() << clear_sql.lastError();
        }
        else
        {
            qDebug() << "table cleared";
            ui->listWidget->clear ();
        }

    }
}



void hand::on_mmm_clicked()
{
    QString emprt = ui->lineEdit_2->text();
    if(!emprt.isEmpty())
    {
        QString mon ;
        int mm;
        QSqlQuery sql(database);
        sql.prepare("select * from meal");
        if(!sql.exec())
        {
            qDebug()<<sql.lastError();
        }
        else
        {
            while(sql.next())
            {
                 mm = sql.value(3).toInt();
            }
        }
        mon = ui->lineEdit_2->text ();
        mm = mon.toInt ()+mm;
        sql.prepare(QString("update meal set \"价格\" = %1 where \"名字\" = '饭卡'").arg(mm));
        if(!sql.exec())
        {
            qDebug() << sql.lastError();
        }
        else
        {
            QMessageBox::warning(this,"提示","充值成功","OK");
            qDebug() << "table cleared";

        }
    }
}
