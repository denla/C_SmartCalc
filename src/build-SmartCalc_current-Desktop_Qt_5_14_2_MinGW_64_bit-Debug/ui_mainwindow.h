/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_x;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_br_1;
    QPushButton *pushButton_point;
    QPushButton *pushButton_log;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_br_2;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_copy;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_e;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_depositCalc;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_ctg;
    QPushButton *pushButton_37;
    QPushButton *pushButton_creditCalc;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_5;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_add;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_8;
    QPushButton *pushButton_div;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 530);
        MainWindow->setStyleSheet(QString::fromUtf8("background: #ffffff;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
" qproperty-alignment: 'AlignVCenter || AlignRight';\n"
" font-size: 36px;\n"
"\n"
" font-weight: 500;\n"
"}"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        sizePolicy1.setHeightForWidth(pushButton_pow->sizePolicy().hasHeightForWidth());
        pushButton_pow->setSizePolicy(sizePolicy1);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_pow, 1, 2, 1, 1);

        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        sizePolicy1.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy1);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_x, 0, 6, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_0, 5, 0, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy1.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy1);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_cos, 3, 6, 1, 1);

        pushButton_br_1 = new QPushButton(centralwidget);
        pushButton_br_1->setObjectName(QString::fromUtf8("pushButton_br_1"));
        sizePolicy1.setHeightForWidth(pushButton_br_1->sizePolicy().hasHeightForWidth());
        pushButton_br_1->setSizePolicy(sizePolicy1);
        pushButton_br_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_br_1, 2, 5, 1, 1);

        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        sizePolicy1.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy1);
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_point, 5, 1, 1, 1);

        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        sizePolicy1.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy1);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_log, 5, 5, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        pushButton_br_2 = new QPushButton(centralwidget);
        pushButton_br_2->setObjectName(QString::fromUtf8("pushButton_br_2"));
        sizePolicy1.setHeightForWidth(pushButton_br_2->sizePolicy().hasHeightForWidth());
        pushButton_br_2->setSizePolicy(sizePolicy1);
        pushButton_br_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_br_2, 3, 5, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        sizePolicy1.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy1);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_sub, 3, 3, 1, 1);

        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        sizePolicy1.setHeightForWidth(pushButton_graph->sizePolicy().hasHeightForWidth());
        pushButton_graph->setSizePolicy(sizePolicy1);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"qproperty-icon: url(:/images/graph.svg);\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));
        pushButton_graph->setCheckable(false);

        gridLayout->addWidget(pushButton_graph, 1, 5, 1, 1);

        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy1.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy1);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_sin, 2, 6, 1, 1);

        pushButton_copy = new QPushButton(centralwidget);
        pushButton_copy->setObjectName(QString::fromUtf8("pushButton_copy"));
        sizePolicy1.setHeightForWidth(pushButton_copy->sizePolicy().hasHeightForWidth());
        pushButton_copy->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Fluent Icons"));
        pushButton_copy->setFont(font);
        pushButton_copy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"qproperty-icon: url(:/images/copy.svg);\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_copy, 0, 5, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy1.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy1);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_clear, 0, 2, 1, 1);

        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        sizePolicy1.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy1);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_atan, 4, 7, 1, 1);

        pushButton_e = new QPushButton(centralwidget);
        pushButton_e->setObjectName(QString::fromUtf8("pushButton_e"));
        sizePolicy1.setHeightForWidth(pushButton_e->sizePolicy().hasHeightForWidth());
        pushButton_e->setSizePolicy(sizePolicy1);
        pushButton_e->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_e, 1, 1, 1, 1);

        pushButton_remove = new QPushButton(centralwidget);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        sizePolicy1.setHeightForWidth(pushButton_remove->sizePolicy().hasHeightForWidth());
        pushButton_remove->setSizePolicy(sizePolicy1);
        pushButton_remove->setFont(font);
        pushButton_remove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"qproperty-icon: url(:/images/clear.svg);\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_remove, 0, 3, 1, 1);

        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        sizePolicy1.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy1);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_mult, 2, 3, 1, 1);

        pushButton_depositCalc = new QPushButton(centralwidget);
        pushButton_depositCalc->setObjectName(QString::fromUtf8("pushButton_depositCalc"));
        sizePolicy1.setHeightForWidth(pushButton_depositCalc->sizePolicy().hasHeightForWidth());
        pushButton_depositCalc->setSizePolicy(sizePolicy1);
        pushButton_depositCalc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_depositCalc, 1, 7, 1, 1);

        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        sizePolicy1.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy1);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_asin, 2, 7, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        sizePolicy1.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy1);
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	padding: 0 12px;\n"
"	border-radius: 12px;\n"
"	border: 1px solid rgb(222, 222, 222);\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QDoubleSpinBox :focus {\n"
"	border: 1px solid #bfff6a;\n"
"}"));
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(doubleSpinBox, 0, 7, 1, 1);

        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        sizePolicy1.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy1);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_tan, 4, 6, 1, 1);

        pushButton_ctg = new QPushButton(centralwidget);
        pushButton_ctg->setObjectName(QString::fromUtf8("pushButton_ctg"));
        sizePolicy1.setHeightForWidth(pushButton_ctg->sizePolicy().hasHeightForWidth());
        pushButton_ctg->setSizePolicy(sizePolicy1);
        pushButton_ctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_ctg, 5, 6, 1, 1);

        pushButton_37 = new QPushButton(centralwidget);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_37, 0, 1, 1, 1);

        pushButton_creditCalc = new QPushButton(centralwidget);
        pushButton_creditCalc->setObjectName(QString::fromUtf8("pushButton_creditCalc"));
        sizePolicy1.setHeightForWidth(pushButton_creditCalc->sizePolicy().hasHeightForWidth());
        pushButton_creditCalc->setSizePolicy(sizePolicy1);
        pushButton_creditCalc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_creditCalc, 1, 6, 1, 1);

        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        sizePolicy1.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy1);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_acos, 3, 7, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy1.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy1);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_sqrt, 0, 0, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy1.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy1);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_add, 4, 3, 1, 1);

        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        sizePolicy1.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy1);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"font-weight: 500;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_ln, 4, 5, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy1.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_div, 1, 3, 1, 1);

        pushButton_pi = new QPushButton(centralwidget);
        pushButton_pi->setObjectName(QString::fromUtf8("pushButton_pi"));
        sizePolicy1.setHeightForWidth(pushButton_pi->sizePolicy().hasHeightForWidth());
        pushButton_pi->setSizePolicy(sizePolicy1);
        pushButton_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_pi, 1, 0, 1, 1);

        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy1.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy1);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: #f4f4f4;\n"
"font-size: 16px;\n"
"height: 60px;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:pressed {\n"
"background: rgb(219, 220, 224);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:rgb(240, 240, 240);\n"
"}"));

        gridLayout->addWidget(pushButton_mod, 5, 7, 1, 1);

        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        sizePolicy1.setHeightForWidth(pushButton_result->sizePolicy().hasHeightForWidth());
        pushButton_result->setSizePolicy(sizePolicy1);
        pushButton_result->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 12px;\n"
"background: rgb(255, 161, 97);\n"
"font-size: 16px;\n"
"height: 60px;\n"
"}"));

        gridLayout->addWidget(pushButton_result, 5, 2, 1, 2);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_br_1->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_br_2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_graph->setText(QString());
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_copy->setText(QString());
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_e->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        pushButton_remove->setText(QString());
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_depositCalc->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_creditCalc->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
