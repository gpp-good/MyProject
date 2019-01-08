#ifndef HAND_H
#define HAND_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
namespace Ui {
class hand;
}

class hand : public QMainWindow
{
    Q_OBJECT

public:
    explicit hand(QWidget *parent = 0);
    ~hand();

private slots:
    void on_close_clicked();

    void on_toolButton_clicked();


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_listWidget_2_clicked(const QModelIndex &index);



    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();


    void on_mmm_clicked();

private:
    Ui::hand *ui;
    int flag;
    QSqlDatabase database,data;
    int currenRow;

};

#endif // HAND_H
