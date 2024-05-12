/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *res_1;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *res_2;
    QLabel *res_3;
    QLabel *res_4;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(432, 484);
        Credit->setStyleSheet(QString::fromUtf8("background: white;"));
        verticalLayout_3 = new QVBoxLayout(Credit);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(Credit);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setStyleSheet(QString::fromUtf8("QLineEdit { \n"
"border-radius: 12px;\n"
"border: 1px solid rgb(222, 222, 222);\n"
"\n"
"padding-left: 12px;\n"
"height: 40px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border: 1px solid #bfff6a;\n"
"}"));

        verticalLayout->addWidget(lineEdit_1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 7, 0, 1, 1);

        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_10 = new QLabel(Credit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_10, 10, 0, 1, 1);

        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(Credit);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit { \n"
"border-radius: 12px;\n"
"border: 1px solid rgb(222, 222, 222);\n"
"\n"
"padding-left: 12px;\n"
"height: 40px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border: 1px solid #bfff6a;\n"
"}"));

        gridLayout_2->addWidget(lineEdit_3, 2, 2, 1, 1);

        comboBox = new QComboBox(Credit);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"height: 40px;"));

        gridLayout_2->addWidget(comboBox, 10, 2, 1, 1);

        res_1 = new QLabel(Credit);
        res_1->setObjectName(QString::fromUtf8("res_1"));
        res_1->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
""));

        gridLayout_2->addWidget(res_1, 4, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 11, 0, 1, 1);

        label_9 = new QLabel(Credit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        res_2 = new QLabel(Credit);
        res_2->setObjectName(QString::fromUtf8("res_2"));
        res_2->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
""));

        gridLayout_2->addWidget(res_2, 6, 2, 1, 1);

        res_3 = new QLabel(Credit);
        res_3->setObjectName(QString::fromUtf8("res_3"));
        res_3->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
""));

        gridLayout_2->addWidget(res_3, 8, 2, 1, 1);

        res_4 = new QLabel(Credit);
        res_4->setObjectName(QString::fromUtf8("res_4"));
        res_4->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
""));

        gridLayout_2->addWidget(res_4, 4, 3, 1, 1);

        lineEdit_2 = new QLineEdit(Credit);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit { \n"
"border-radius: 12px;\n"
"border: 1px solid rgb(222, 222, 222);\n"
"\n"
"padding-left: 12px;\n"
"height: 40px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"border: 1px solid #bfff6a;\n"
"}"));

        gridLayout_2->addWidget(lineEdit_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);

        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(Credit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Form", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 (\320\274\320\265\321\201)", nullptr));
        label_10->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));

        res_1->setText(QCoreApplication::translate("Credit", "-", nullptr));
        label_9->setText(QCoreApplication::translate("Credit", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        res_2->setText(QCoreApplication::translate("Credit", "-", nullptr));
        res_3->setText(QCoreApplication::translate("Credit", "-", nullptr));
        res_4->setText(QCoreApplication::translate("Credit", "-", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
