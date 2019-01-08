#include "key_por.h"
#include "ui_key_por.h"

key_por::key_por(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::key_por)
{
    ui->setupUi(this);
}

key_por::~key_por()
{
    delete ui;
}
