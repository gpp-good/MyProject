#ifndef KEY_POR_H
#define KEY_POR_H

#include <QWidget>

namespace Ui {
class key_por;
}

class key_por : public QWidget
{
    Q_OBJECT

public:
    explicit key_por(QWidget *parent = 0);
    ~key_por();

private:
    Ui::key_por *ui;
};

#endif // KEY_POR_H
