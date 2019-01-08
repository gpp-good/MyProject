/********************************************************************************
** Form generated from reading UI file 'main_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_INTERFACE_H
#define UI_MAIN_INTERFACE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_interface
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QListWidget *recvList;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QPushButton *entry;
    QPushButton *close;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QMainWindow *Main_interface)
    {
        if (Main_interface->objectName().isEmpty())
            Main_interface->setObjectName(QStringLiteral("Main_interface"));
        Main_interface->resize(824, 483);
        Main_interface->setStyleSheet(QStringLiteral("border-image: url(:/key/photo1.jpg);"));
        centralWidget = new QWidget(Main_interface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(800, 80));
        label->setMaximumSize(QSize(800, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(480, 30));
        label_2->setMaximumSize(QSize(480, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMinimumSize(QSize(101, 20));
        lineEdit_3->setMaximumSize(QSize(101, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(8);
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setMinimumSize(QSize(101, 20));
        lineEdit_4->setMaximumSize(QSize(101, 20));
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setMinimumSize(QSize(101, 20));
        lineEdit_5->setMaximumSize(QSize(101, 20));
        lineEdit_5->setFont(font1);
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout);

        recvList = new QListWidget(centralWidget);
        recvList->setObjectName(QStringLiteral("recvList"));
        recvList->setMinimumSize(QSize(480, 300));
        recvList->setMaximumSize(QSize(480, 300));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        recvList->setFont(font2);

        verticalLayout->addWidget(recvList);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(140, 50));
        lineEdit_6->setMaximumSize(QSize(140, 50));

        verticalLayout_2->addWidget(lineEdit_6);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(140, 40));
        label_3->setMaximumSize(QSize(140, 40));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(140, 60));
        lineEdit->setMaximumSize(QSize(140, 60));

        verticalLayout_2->addWidget(lineEdit);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(140, 40));
        label_4->setMaximumSize(QSize(140, 40));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(140, 60));
        lineEdit_2->setMaximumSize(QSize(140, 60));

        verticalLayout_2->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        entry = new QPushButton(centralWidget);
        entry->setObjectName(QStringLiteral("entry"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(entry->sizePolicy().hasHeightForWidth());
        entry->setSizePolicy(sizePolicy2);
        entry->setMinimumSize(QSize(64, 64));
        entry->setMaximumSize(QSize(64, 64));

        gridLayout->addWidget(entry, 0, 0, 1, 1);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(64, 64));
        close->setMaximumSize(QSize(64, 64));
        close->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(close, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        radioButton->setMinimumSize(QSize(120, 45));
        radioButton->setMaximumSize(QSize(120, 30));

        verticalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        radioButton_2->setMinimumSize(QSize(120, 45));
        radioButton_2->setMaximumSize(QSize(120, 30));

        verticalLayout_4->addWidget(radioButton_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        Main_interface->setCentralWidget(centralWidget);

        retranslateUi(Main_interface);

        QMetaObject::connectSlotsByName(Main_interface);
    } // setupUi

    void retranslateUi(QMainWindow *Main_interface)
    {
        Main_interface->setWindowTitle(QApplication::translate("Main_interface", "Main_interface", 0));
        label->setText(QApplication::translate("Main_interface", "\346\254\242\350\277\216\344\275\277\347\224\250\346\231\272\350\203\275\351\244\220\347\233\230\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("Main_interface", "\346\266\210\350\264\271\344\277\241\346\201\257", 0));
        lineEdit_3->setText(QApplication::translate("Main_interface", "\351\244\220\347\233\230\345\272\217\345\217\267", 0));
        lineEdit_4->setText(QApplication::translate("Main_interface", "\345\220\215\345\255\227", 0));
        lineEdit_5->setText(QApplication::translate("Main_interface", "\344\273\267\346\240\274", 0));
        label_3->setText(QApplication::translate("Main_interface", "\345\211\251\344\275\231\351\207\221\351\242\235", 0));
        label_4->setText(QApplication::translate("Main_interface", "\346\266\210\350\264\271\351\207\221\351\242\235\346\200\273\350\256\241", 0));
        pushButton->setText(QApplication::translate("Main_interface", "\347\273\223\347\256\227", 0));
        entry->setText(QApplication::translate("Main_interface", "\347\256\241\347\220\206\345\221\230", 0));
        close->setText(QApplication::translate("Main_interface", "\345\205\263\351\227\255", 0));
        radioButton->setText(QApplication::translate("Main_interface", "\345\274\200\345\220\257", 0));
        radioButton_2->setText(QApplication::translate("Main_interface", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_interface: public Ui_Main_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_INTERFACE_H
