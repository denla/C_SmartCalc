#include "graph.h"

#include "mainwindow.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) : QWidget(parent), ui(new Ui::Graph) {
  ui->setupUi(this);

  ui->doubleSpinBox_Xmax->setMinimum(-1000000);
  ui->doubleSpinBox_Xmin->setMinimum(-1000000);
  ui->doubleSpinBox_Ymax->setMinimum(-1000000);
  ui->doubleSpinBox_Ymin->setMinimum(-1000000);

  ui->doubleSpinBox_Xmax->setMaximum(1000000);
  ui->doubleSpinBox_Xmin->setMaximum(1000000);
  ui->doubleSpinBox_Ymax->setMaximum(1000000);
  ui->doubleSpinBox_Ymin->setMaximum(1000000);

  ui->doubleSpinBox_Xmax->setValue(4);
  ui->doubleSpinBox_Ymax->setValue(4);
  ui->doubleSpinBox_Xmin->setValue(-4);
  ui->doubleSpinBox_Ymin->setValue(-4);

  double x_max = ui->doubleSpinBox_Xmax->text().toDouble();
  double y_max = ui->doubleSpinBox_Ymax->text().toDouble();
  double x_min = ui->doubleSpinBox_Xmin->text().toDouble();
  double y_min = ui->doubleSpinBox_Ymin->text().toDouble();
  ui->widget->xAxis->setRange(x_min, x_max);
  ui->widget->yAxis->setRange(y_min, y_max);

  connect(ui->doubleSpinBox_Xmax, SIGNAL(valueChanged(double)), this,
          SLOT(drawGraph()));
  connect(ui->doubleSpinBox_Ymax, SIGNAL(valueChanged(double)), this,
          SLOT(drawGraph()));
  connect(ui->doubleSpinBox_Xmin, SIGNAL(valueChanged(double)), this,
          SLOT(drawGraph()));
  connect(ui->doubleSpinBox_Ymin, SIGNAL(valueChanged(double)), this,
          SLOT(drawGraph()));
}

void Graph::clearGraph() {
  ui->widget->clearGraphs();
  x.clear();
  y.clear();

  ui->widget->replot();
}

void Graph::drawGraph() {
  double x_max = ui->doubleSpinBox_Xmax->value();
  double y_max = ui->doubleSpinBox_Ymax->value();
  double x_min = ui->doubleSpinBox_Xmin->value();
  double y_min = ui->doubleSpinBox_Ymin->value();

  ui->widget->xAxis->setRange(x_min, x_max);
  ui->widget->yAxis->setRange(y_max, y_min);

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();

  h = 0.1;
  xBegin = x_min;
  xEnd = x_max;

  QString str1 = ui->label->text();
  QByteArray ba = str1.toLocal8Bit();
  const char *c_str2 = ba.data();

  double res;
  if (checkErrors(c_str2) == 0) {
    for (X = xBegin; X <= xEnd; X += h) {
      calculate(c_str2, &res, X);
      x.push_back(X);
      if (res < -1000 || res > 1000) {
        y.push_back(std::numeric_limits<double>::quiet_NaN());
      } else {
        y.push_back(res);
      };
    }
  } else {
    ui->label->setText("Error");
  }

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();
}

Graph::~Graph() { delete ui; }

void Graph::slot(QString a) {
  clearGraph();
  ui->label->setText(a);
  drawGraph();
}

void Graph::on_pushButton_openGraph_clicked() { drawGraph(); }

void Graph::on_doubleSpinBox_Xmin_valueChanged(double arg1) {
  double x_max = ui->doubleSpinBox_Xmax->text().toDouble();
  double x_min = arg1;
  ui->widget->xAxis->setRange(x_min, x_max);
  drawGraph();
}

void Graph::on_doubleSpinBox_Xmax_valueChanged(double arg1) {
  double x_min = ui->doubleSpinBox_Xmin->text().toDouble();
  double x_max = arg1;
  ui->widget->xAxis->setRange(x_min, x_max);
  drawGraph();
}

void Graph::on_doubleSpinBox_Ymin_valueChanged(double arg1) {
  double y_max = ui->doubleSpinBox_Ymax->text().toDouble();
  double y_min = arg1;
  ui->widget->yAxis->setRange(y_min, y_max);
  drawGraph();
}

void Graph::on_doubleSpinBox_Ymax_valueChanged(double arg1) {
  double y_min = ui->doubleSpinBox_Ymin->text().toDouble();
  double y_max = arg1;
  ui->widget->yAxis->setRange(y_min, y_max);
  drawGraph();
}
