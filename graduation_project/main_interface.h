#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H

#include <QMainWindow>
#include "QTimer"
#include "QProcess"
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QVariantList>
#include <QVector>
#include "rfid.h"
#include "music.h"

namespace Ui {
class Main_interface;
}

class Main_interface : public QMainWindow
{
    Q_OBJECT

public:
    explicit Main_interface(QWidget *parent = 0);
    ~Main_interface();
private slots:
    void on_close_clicked();

    void on_entry_clicked();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);


    void onTimeout();

    void on_pushButton_clicked();

private:
    Ui::Main_interface *ui;
    QVector <QString> array;
    QTimer *timer;
    int fd,ic1,ic2,ic3,ic4;
    int sum,money;
    QProcess *por;
    QSqlDatabase database;
    QSqlQuery sql;
    QVector<unsigned int> strArray;
};

#endif // MAIN_INTERFACE_H
