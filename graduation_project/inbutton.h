#ifndef INBUTTON_H
#define INBUTTON_H
#include <QToolButton>
#include <QMouseEvent>


class InButton : public QToolButton
{
public:
    explicit InButton(QWidget *parent=0);
    ~InButton();
    //设置背景图片
    void setButtonBackground(QString press, QString release);
    //鼠标事件--按触发改变按钮背景
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
private:
    QString press_pic;
    QString release_pic;
};

#endif // INBUTTON_H
