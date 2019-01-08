/********************************************************************************
** Form generated from reading UI file 'function.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_H
#define UI_FUNCTION_H

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

class Ui_function
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameEdit;
    QLineEdit *passwordEdit;
    QPushButton *entry;
    QPushButton *entry_2;
    QHBoxLayout *horizontalLayout_3;
    key_por *widget;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *function)
    {
        if (function->objectName().isEmpty())
            function->setObjectName(QStringLiteral("function"));
        function->resize(800, 480);
        function->setStyleSheet(QStringLiteral("border-image: url(:/key/timg.jpg);"));
        centralwidget = new QWidget(function);
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
        label->setStyleSheet(QLatin1String("border-image:url();\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setMinimumSize(QSize(350, 60));
        nameEdit->setMaximumSize(QSize(290, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        nameEdit->setFont(font1);
        nameEdit->setStyleSheet(QStringLiteral("border-image:url();"));
        nameEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(nameEdit);

        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);
        passwordEdit->setMinimumSize(QSize(350, 60));
        passwordEdit->setMaximumSize(QSize(290, 60));
        passwordEdit->setFont(font1);
        passwordEdit->setStyleSheet(QStringLiteral("border-image:url();"));
        passwordEdit->setEchoMode(QLineEdit::Password);
        passwordEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(passwordEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        entry = new QPushButton(centralwidget);
        entry->setObjectName(QStringLiteral("entry"));
        sizePolicy.setHeightForWidth(entry->sizePolicy().hasHeightForWidth());
        entry->setSizePolicy(sizePolicy);
        entry->setMinimumSize(QSize(64, 64));
        entry->setMaximumSize(QSize(64, 64));
        entry->setStyleSheet(QStringLiteral("border-image:url();"));

        horizontalLayout->addWidget(entry);

        entry_2 = new QPushButton(centralwidget);
        entry_2->setObjectName(QStringLiteral("entry_2"));
        sizePolicy.setHeightForWidth(entry_2->sizePolicy().hasHeightForWidth());
        entry_2->setSizePolicy(sizePolicy);
        entry_2->setMinimumSize(QSize(64, 64));
        entry_2->setMaximumSize(QSize(64, 64));
        entry_2->setStyleSheet(QStringLiteral("border-image:url();"));

        horizontalLayout->addWidget(entry_2);


        verticalLayout->addLayout(horizontalLayout);

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

        horizontalSpacer = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        close = new QPushButton(centralwidget);
        close->setObjectName(QStringLiteral("close"));
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(64, 64));
        close->setMaximumSize(QSize(64, 64));
        close->setStyleSheet(QStringLiteral("border-image:url();"));

        gridLayout->addWidget(close, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 354, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        function->setCentralWidget(centralwidget);

        retranslateUi(function);

        QMetaObject::connectSlotsByName(function);
    } // setupUi

    void retranslateUi(QMainWindow *function)
    {
        function->setWindowTitle(QApplication::translate("function", "MainWindow", 0));
        label->setText(QApplication::translate("function", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242\347\231\273\345\275\225", 0));
        nameEdit->setInputMask(QString());
        nameEdit->setText(QString());
        nameEdit->setPlaceholderText(QApplication::translate("function", "\350\264\246\345\217\267", 0));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QApplication::translate("function", "\345\257\206\347\240\201", 0));
        entry->setText(QApplication::translate("function", "\347\231\273\345\275\225", 0));
        entry_2->setText(QApplication::translate("function", "\346\263\250\345\206\214", 0));
        toolButton->setText(QApplication::translate("function", "\342\200\246\342\200\246", 0));
        close->setText(QApplication::translate("function", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class function: public Ui_function {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_H
