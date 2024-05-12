#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <View/graph.h>

#include <QMainWindow>
#include <QVector>

#include "credit.h"

extern "C" {
#include "Model/calculator.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void digits_numbers();
  void functions();
  void point();
  void clear();
  void remove();
  void copy();
  void result();
  void multiply();
  void sqrt();
  void const_pi();
  void const_exp();

  void on_pushButton_creditCalc_clicked();

  void openGraph();

  void on_pushButton_37_clicked();

 private:
  Ui::MainWindow *ui;
  Credit credit;
  Graph *graph;
  double xBegin, xEnd, h, X;
  int N;

  QVector<double> x, y;

 signals:
  void signal(QString);
};

#endif  // MAINWINDOW_H
