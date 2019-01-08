/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <key_por.h>

QT_BEGIN_NAMESPACE

class Ui_enroll
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *name_4;
    QLineEdit *passwor_4;
    QLineEdit *passwor_5;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    key_por *widget;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *close123;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *enroll)
    {
        if (enroll->objectName().isEmpty())
            enroll->setObjectName(QStringLiteral("enroll"));
        enroll->resize(800, 480);
        enroll->setStyleSheet(QStringLiteral("border-image: url(:/key/timg.jpg);"));
        centralwidget = new QWidget(enroll);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 80));
        label->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("border-image:url();"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        name_4 = new QLineEdit(centralwidget);
        name_4->setObjectName(QStringLiteral("name_4"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name_4->sizePolicy().hasHeightForWidth());
        name_4->setSizePolicy(sizePolicy);
        name_4->setMinimumSize(QSize(350, 60));
        name_4->setMaximumSize(QSize(290, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        name_4->setFont(font1);
        name_4->setStyleSheet(QLatin1String("border-image:url();\n"
""));
        name_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(name_4);

        passwor_4 = new QLineEdit(centralwidget);
        passwor_4->setObjectName(QStringLiteral("passwor_4"));
        sizePolicy.setHeightForWidth(passwor_4->sizePolicy().hasHeightForWidth());
        passwor_4->setSizePolicy(sizePolicy);
        passwor_4->setMinimumSize(QSize(350, 60));
        passwor_4->setMaximumSize(QSize(290, 60));
        passwor_4->setFont(font1);
        passwor_4->setStyleSheet(QStringLiteral("border-image:url();"));
        passwor_4->setEchoMode(QLineEdit::Password);
        passwor_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(passwor_4);

        passwor_5 = new QLineEdit(centralwidget);
        passwor_5->setObjectName(QStringLiteral("passwor_5"));
        sizePolicy.setHeightForWidth(passwor_5->sizePolicy().hasHeightForWidth());
        passwor_5->setSizePolicy(sizePolicy);
        passwor_5->setMinimumSize(QSize(350, 60));
        passwor_5->setMaximumSize(QSize(290, 60));
        passwor_5->setFont(font1);
        passwor_5->setStyleSheet(QStringLiteral("border-image:url();"));
        passwor_5->setEchoMode(QLineEdit::Password);
        passwor_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(passwor_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(64, 64));
        pushButton->setMaximumSize(QSize(64, 64));
        pushButton->setStyleSheet(QStringLiteral("border-image:url();"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget = new key_por(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(371, 121));
        widget->setMaximumSize(QSize(371, 121));
        widget->setStyleSheet(QStringLiteral("border-image:url();"));

        horizontalLayout_3->addWidget(widget);

        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(40);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMinimumSize(QSize(50, 30));
        toolButton->setMaximumSize(QSize(50, 30));
        toolButton->setStyleSheet(QLatin1String("border-image:url();\n"
""));

        horizontalLayout_3->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 3, 1);

        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        close123 = new QPushButton(centralwidget);
        close123->setObjectName(QStringLiteral("close123"));
        sizePolicy.setHeightForWidth(close123->sizePolicy().hasHeightForWidth());
        close123->setSizePolicy(sizePolicy);
        close123->setMinimumSize(QSize(64, 64));
        close123->setMaximumSize(QSize(64, 64));
        close123->setStyleSheet(QLatin1String("border-image:url();\n"
""));

        gridLayout->addWidget(close123, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 354, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        enroll->setCentralWidget(centralwidget);

        retranslateUi(enroll);

        QMetaObject::connectSlotsByName(enroll);
    } // setupUi

    void retranslateUi(QMainWindow *enroll)
    {
        enroll->setWindowTitle(QApplication::translate("enroll", "MainWindow", 0));
        label->setText(QApplication::translate("enroll", "\347\224\250\346\210\267\346\263\250\345\206\214", 0));
        name_4->setInputMask(QString());
        name_4->setText(QString());
        name_4->setPlaceholderText(QApplication::translate("enroll", "\350\264\246\345\217\267", 0));
        passwor_4->setText(QString());
        passwor_4->setPlaceholderText(QApplication::translate("enroll", "\345\257\206\347\240\201", 0));
        passwor_5->setText(QString());
        passwor_5->setPlaceholderText(QApplication::translate("enroll", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("enroll", "\346\263\250\345\206\214", 0));
        toolButton->setText(QApplication::translate("enroll", "\342\200\246\342\200\246", 0));
        close123->setText(QApplication::translate("enroll", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class enroll: public Ui_enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
