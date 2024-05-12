/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QCustomLibrary/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label;
    QCustomPlot *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Ymax;
    QDoubleSpinBox *doubleSpinBox_Xmin;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_Xmax;
    QDoubleSpinBox *doubleSpinBox_Ymin;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(523, 659);
        Graph->setStyleSheet(QString::fromUtf8("background: white;"));
        verticalLayout = new QVBoxLayout(Graph);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(Graph);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
" qproperty-alignment: 'AlignVCenter || AlignRight';\n"
" font-size: 32px;\n"
" font-weight: 500;\n"
"}"));

        horizontalLayout_3->addWidget(label_6);

        label = new QLabel(Graph);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
" qproperty-alignment: 'AlignVCenter || AlignRight';\n"
" font-size: 32px;\n"
" font-weight: 500;\n"
"}"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        widget = new QCustomPlot(Graph);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setAutoFillBackground(false);

        verticalLayout->addWidget(widget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(Graph);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-family: SF Pro Display;"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label_2 = new QLabel(Graph);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-family: SF Pro Display;"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        doubleSpinBox_Ymax = new QDoubleSpinBox(Graph);
        doubleSpinBox_Ymax->setObjectName(QString::fromUtf8("doubleSpinBox_Ymax"));
        doubleSpinBox_Ymax->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	padding: 0 12px;\n"
"	border-radius: 12px;\n"
"	border: 1px solid rgb(222, 222, 222);\n"
"	font-family: SF Pro Display;\n"
"	height: 40px;\n"
"}\n"
"\n"
"QDoubleSpinBox :focus {\n"
"	border: 1px solid #bfff6a;\n"
"}"));
        doubleSpinBox_Ymax->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(doubleSpinBox_Ymax, 1, 4, 1, 1);

        doubleSpinBox_Xmin = new QDoubleSpinBox(Graph);
        doubleSpinBox_Xmin->setObjectName(QString::fromUtf8("doubleSpinBox_Xmin"));
        doubleSpinBox_Xmin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	padding: 0 12px;\n"
"	border-radius: 12px;\n"
"	border: 1px solid rgb(222, 222, 222);\n"
"	font-family: SF Pro Display;\n"
"	height: 40px;\n"
"}\n"
"\n"
"QDoubleSpinBox :focus {\n"
"	border: 1px solid #bfff6a;\n"
"}"));
        doubleSpinBox_Xmin->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(doubleSpinBox_Xmin, 0, 1, 1, 1);

        label_3 = new QLabel(Graph);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-family: SF Pro Display;"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        doubleSpinBox_Xmax = new QDoubleSpinBox(Graph);
        doubleSpinBox_Xmax->setObjectName(QString::fromUtf8("doubleSpinBox_Xmax"));
        doubleSpinBox_Xmax->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	padding: 0 12px;\n"
"	border-radius: 12px;\n"
"	border: 1px solid rgb(222, 222, 222);\n"
"	font-family: SF Pro Display;\n"
"	height: 40px;\n"
"}\n"
"\n"
"QDoubleSpinBox :focus {\n"
"	border: 1px solid #bfff6a;\n"
"}"));
        doubleSpinBox_Xmax->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(doubleSpinBox_Xmax, 0, 4, 1, 1);

        doubleSpinBox_Ymin = new QDoubleSpinBox(Graph);
        doubleSpinBox_Ymin->setObjectName(QString::fromUtf8("doubleSpinBox_Ymin"));
        doubleSpinBox_Ymin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	padding: 0 12px;\n"
"	border-radius: 12px;\n"
"	border: 1px solid rgb(222, 222, 222);\n"
"	font-family: SF Pro Display;\n"
"	height: 40px;\n"
"}\n"
"\n"
"QDoubleSpinBox :focus {\n"
"	border: 1px solid #bfff6a;\n"
"}"));
        doubleSpinBox_Ymin->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(doubleSpinBox_Ymin, 1, 1, 1, 1);

        label_5 = new QLabel(Graph);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-family: SF Pro Display;"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        label_6->setText(QCoreApplication::translate("Graph", "y=", nullptr));
        label->setText(QCoreApplication::translate("Graph", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Graph", "Ymax", nullptr));
        label_2->setText(QCoreApplication::translate("Graph", "Xmin", nullptr));
        label_3->setText(QCoreApplication::translate("Graph", "Xmax", nullptr));
        label_5->setText(QCoreApplication::translate("Graph", "Ymin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
