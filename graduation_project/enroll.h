#ifndef ENROLL_H
#define ENROLL_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextCodec>
namespace Ui {
class enroll;
}

class enroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit enroll(QWidget *parent = 0);
    ~enroll();

private slots:
    void on_pushButton_clicked();

    void on_close123_clicked();

    void on_toolButton_clicked();

private:
    Ui::enroll *ui;
    int flag;
};

#endif // ENROLL_H
