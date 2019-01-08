/********************************************************************************
** Form generated from reading UI file 'hand.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAND_H
#define UI_HAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <key_por.h>

QT_BEGIN_NAMESPACE

class Ui_hand
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    key_por *widget;
    QToolButton *toolButton;
    QLineEdit *lineEdit_2;
    QPushButton *mmm;
    QPushButton *close;

    void setupUi(QMainWindow *hand)
    {
        if (hand->objectName().isEmpty())
            hand->setObjectName(QStringLiteral("hand"));
        hand->resize(800, 483);
        hand->setStyleSheet(QStringLiteral("border-image: url(:/key/photo1.jpg);"));
        centralwidget = new QWidget(hand);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 40));
        label->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(70, 40));
        pushButton->setMaximumSize(QSize(70, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(70, 40));
        pushButton_4->setMaximumSize(QSize(70, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(8);
        pushButton_4->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setMinimumSize(QSize(90, 30));
        lineEdit_4->setMaximumSize(QSize(90, 30));
        lineEdit_4->setFont(font2);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_4);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMinimumSize(QSize(150, 30));
        lineEdit_3->setMaximumSize(QSize(150, 30));
        lineEdit_3->setFont(font2);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_3);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setMinimumSize(QSize(90, 30));
        lineEdit_5->setMaximumSize(QSize(90, 30));
        lineEdit_5->setFont(font2);
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(150, 50));
        lineEdit->setMaximumSize(QSize(150, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(9);
        lineEdit->setFont(font3);
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(64, 64));
        pushButton_2->setMaximumSize(QSize(64, 64));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        pushButton_2->setFont(font4);

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(64, 64));
        pushButton_3->setMaximumSize(QSize(64, 64));
        pushButton_3->setFont(font3);

        horizontalLayout_6->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(400, 200));
        listWidget->setMaximumSize(QSize(400, 200));

        horizontalLayout_4->addWidget(listWidget);

        listWidget_2 = new QListWidget(centralwidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        sizePolicy1.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy1);
        listWidget_2->setMinimumSize(QSize(365, 200));
        listWidget_2->setMaximumSize(QSize(365, 200));

        horizontalLayout_4->addWidget(listWidget_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new key_por(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(310, 107));
        widget->setMaximumSize(QSize(310, 107));

        horizontalLayout->addWidget(widget);

        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMinimumSize(QSize(50, 40));
        toolButton->setMaximumSize(QSize(50, 40));
        toolButton->setStyleSheet(QLatin1String("border-image:url();\n"
""));

        horizontalLayout->addWidget(toolButton);


        horizontalLayout_5->addLayout(horizontalLayout);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(100, 40));
        lineEdit_2->setMaximumSize(QSize(100, 40));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_2);

        mmm = new QPushButton(centralwidget);
        mmm->setObjectName(QStringLiteral("mmm"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mmm->sizePolicy().hasHeightForWidth());
        mmm->setSizePolicy(sizePolicy2);
        mmm->setMinimumSize(QSize(75, 40));
        mmm->setMaximumSize(QSize(75, 40));
        mmm->setFont(font4);

        horizontalLayout_5->addWidget(mmm);

        close = new QPushButton(centralwidget);
        close->setObjectName(QStringLiteral("close"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy3);
        close->setMinimumSize(QSize(64, 64));
        close->setMaximumSize(QSize(64, 64));

        horizontalLayout_5->addWidget(close);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        hand->setCentralWidget(centralwidget);

        retranslateUi(hand);

        QMetaObject::connectSlotsByName(hand);
    } // setupUi

    void retranslateUi(QMainWindow *hand)
    {
        hand->setWindowTitle(QApplication::translate("hand", "MainWindow", 0));
        label->setText(QApplication::translate("hand", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", 0));
        pushButton->setText(QApplication::translate("hand", "\346\266\210\350\264\271\350\256\260\345\275\225", 0));
        pushButton_4->setText(QApplication::translate("hand", "\346\270\205\347\251\272\350\256\260\345\275\225", 0));
        lineEdit_4->setText(QApplication::translate("hand", "\345\272\217\345\217\267", 0));
        lineEdit_3->setText(QApplication::translate("hand", "IC\345\215\241\345\217\267", 0));
        lineEdit_5->setText(QApplication::translate("hand", "\346\266\210\350\264\271", 0));
        lineEdit->setPlaceholderText(QApplication::translate("hand", "\350\257\267\350\276\223\345\205\245\351\244\220\347\233\230\344\273\267\346\240\274", 0));
        pushButton_2->setText(QApplication::translate("hand", "\344\277\256\346\224\271", 0));
        pushButton_3->setText(QApplication::translate("hand", "\346\237\245\350\257\242", 0));
        toolButton->setText(QApplication::translate("hand", "\342\200\246\342\200\246", 0));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("hand", "\345\205\205\345\200\274\351\207\221\351\242\235", 0));
        mmm->setText(QApplication::translate("hand", "\345\205\205\345\200\274", 0));
        close->setText(QApplication::translate("hand", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class hand: public Ui_hand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAND_H
