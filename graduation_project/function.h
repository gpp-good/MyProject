#ifndef FUNCTION_H
#define FUNCTION_H

#include <QMainWindow>
#include <QPixmap>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextCodec>
namespace Ui {
class function;
}

class function : public QMainWindow
{
    Q_OBJECT

public:
    explicit function(QWidget *parent = 0);
    ~function();

private slots:
    void on_close_clicked();

    void on_toolButton_clicked();


    void on_entry_clicked();

    void on_entry_2_clicked();

private:
    Ui::function *ui;
    int flag;

    QSqlDatabase database;
};

#endif // FUNCTION_H
