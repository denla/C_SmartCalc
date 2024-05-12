#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
extern "C" {
#include "Model/calculator.h"
}

namespace Ui {
class Graph;
}

class Graph : public QWidget {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr);
  ~Graph();

 public slots:
  void slot(QString a);

 private slots:
  void on_pushButton_openGraph_clicked();

  void on_doubleSpinBox_Xmin_valueChanged(double arg1);

  void on_doubleSpinBox_Xmax_valueChanged(double arg1);

  void on_doubleSpinBox_Ymin_valueChanged(double arg1);

  void on_doubleSpinBox_Ymax_valueChanged(double arg1);

 private:
  Ui::Graph *ui;
  void drawGraph();
  void clearGraph();

  double xBegin, xEnd, h, X;
  int N;

  QVector<double> x, y;
};

#endif  // GRAPH_H
