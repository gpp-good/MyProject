#include "main_interface.h"
#include "ui_main_interface.h"
#include "function.h"

int num = 1;
unsigned int card_id;
Main_interface::Main_interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main_interface)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    sum = 0;
    money = 200;
}

Main_interface::~Main_interface()
{
    delete ui;

}
void Main_interface::onTimeout ()
{
    int off = 0;
    card_id = recv_id (fd);

    strArray.insert(1,card_id);
    for (int i = 0; i < strArray.size(); ++i)
    {
        if(strArray.at (i)==card_id)
        {

            off++;
        }
     }
     if(off<2)
     {
    switch(card_id)
    {
        case 1418326313: sum+=ic1;ui->lineEdit_2->clear();ui->lineEdit->clear();
                         ui->recvList->addItem(array.at (0));
                         ui->lineEdit_6->clear ();
                         ui->recvList->setCurrentRow(ui->recvList->count()-1);//自动光标下移
                         break;
        case 2121330729: sum+=ic2;ui->lineEdit_2->clear();ui->lineEdit->clear();
                         ui->recvList->addItem(array.at (1));
                         ui->lineEdit_6->clear ();
                         ui->recvList->setCurrentRow(ui->recvList->count()-1);break;
        case 36624569:   sum+=ic3;ui->lineEdit_2->clear();ui->lineEdit->clear();
                         ui->recvList->addItem(array.at (2));
                         ui->lineEdit_6->clear ();
                         ui->recvList->setCurrentRow(ui->recvList->count()-1);break;
        case -593438791: sum+=ic4;ui->lineEdit_2->clear();ui->lineEdit->clear();
                         ui->recvList->addItem(array.at (3));
                         ui->lineEdit_6->clear ();
                         ui->recvList->setCurrentRow(ui->recvList->count()-1);break;
        case -2146728281:{
                         if(money>=sum)
                         {
                             money-=sum;ui->lineEdit->setText(QString::number (money));
                             ui->recvList->clear ();
                             ui->recvList->clear ();

                             if(database.isOpen ())
                             {
                                 QSqlQuery sql(database);
                                 qDebug()<<"open";
                                 if(!sql.exec(QString("INSERT INTO menoy VALUES(%1,\"-2146728281\",%2)").arg (num).arg (sum)))
                                 {
                                     qDebug() << sql.lastError();
                                 }
                                 else
                                 {
                                     qDebug() << "inserted Wang!";
                                     ui->lineEdit_6->setText ("付款成功");
                                     system ("aplay speech/ok.wav");
                                 }
                                 QSqlQuery sql_mm(database);
                                 sql_mm.prepare(QString("update meal set \"价格\" = %1 where \"名字\" = '饭卡'").arg(money));
                                 if(!sql_mm.exec())
                                 {
                                     qDebug() << sql_mm.lastError();
                                 }
                                 else
                                 {
                                     qDebug() << "table cleared";

                                 }

                             }
                             else
                                 qDebug()<<"unopen";
                             sum = 0;
                             off = 0;
                             num++;
                         }
                         else
                         {
                                ui->lineEdit_6->setText ("余额不足");
                                ui->lineEdit_2->clear();
                                ui->recvList->clear ();
                         }
                         break;
                         }
        case 0 :break;
    }
     }
}

void Main_interface::on_close_clicked()
{


    this->close ();
}
//管理员
void Main_interface::on_entry_clicked()
{
    ui->lineEdit_6->clear ();
    ui->lineEdit->clear ();
    ui->lineEdit_2->clear ();
    ui->recvList->clear ();
    function *t = new function(this);
    t->show();
    this->hide();
}
//开启读卡
void Main_interface::on_radioButton_clicked(bool checked)
{
    if(checked)
    {
        fd = init_fd();
        timer->start (500);
        if (QSqlDatabase::contains("qt_sql_default_connection"))
        {
            database = QSqlDatabase::database("qt_sql_default_connection");
        }
        else
        {
            database = QSqlDatabase::addDatabase("QSQLITE");
            database.setDatabaseName("test.db");
        }
        if(database.open())
        {

            qDebug()<<"Database Opened";
            array.clear ();
            QSqlQuery sql_mon(database);
            sql_mon.prepare("select * from meal where \"名字\" like '饭卡'");
            if(!sql_mon.exec())
            {
                qDebug()<<sql_mon.lastError();
            }
            else
            {
                while(sql_mon.next())
                {
                     money = sql_mon.value(3).toInt();
                }
            }
            sql_mon.prepare("select * from COMPANY where \"名字\" like '餐盘1'");
            if(!sql_mon.exec())
            {
                qDebug()<<sql_mon.lastError();
            }
            else
            {
                while(sql_mon.next())
                {
                     ic1 = sql_mon.value(3).toInt();
                }
            }
            sql_mon.prepare("select * from COMPANY where \"名字\" like '餐盘2'");
            if(!sql_mon.exec())
            {
                qDebug()<<sql_mon.lastError();
            }
            else
            {
                while(sql_mon.next())
                {
                     ic2 = sql_mon.value(3).toInt();
                }
            }
            sql_mon.prepare("select * from COMPANY where \"名字\" like '餐盘3'");
            if(!sql_mon.exec())
            {
                qDebug()<<sql_mon.lastError();
            }
            else
            {
                while(sql_mon.next())
                {
                     ic3 = sql_mon.value(3).toInt();
                }
            }
            sql_mon.prepare("select * from COMPANY where \"名字\" like '餐盘4'");
            if(!sql_mon.exec())
            {
                qDebug()<<sql_mon.lastError();
            }
            else
            {
                while(sql_mon.next())
                {
                     ic4 = sql_mon.value(3).toInt();
                }
            }
            QSqlQuery sql_query(database);
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
                    QString ab = "          "+QString::number (number)+"                           "+name+"                   "+QString::number (menoy)+"元";
                    array.append (ab);
                }
            }
        }
    }
}


//关闭读卡
void Main_interface::on_radioButton_2_clicked(bool checked)
{
    if(checked)
    {
        close_fd(fd);
        timer->stop ();
    }
}

void Main_interface::on_pushButton_clicked()
{
    ui->lineEdit_2->setText (QString::number (sum));
    ui->lineEdit_6->setText ("请付款");
    strArray.clear ();
    system ("aplay speech/please.wav");
    //speech_th("speech/please.wav");
    //por->start ("aplay speech/please.wav");
    //sleep(1);
    //por->terminate();
    //por->waitForFinished();
    //por->start("taskkill aplay");
}


