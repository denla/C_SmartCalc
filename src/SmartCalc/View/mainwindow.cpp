#include "mainwindow.h"

#include <QClipboard>
// #include <QDesktopWidget>
#include <QMainWindow>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  graph = new Graph;
  connect(this, &MainWindow::signal, graph, &Graph::slot);

  QPushButton *numButtons[32];
  QString buttonNames[32] = {QString("0"),    QString("1"),   QString("2"),
                             QString("3"),    QString("4"),   QString("5"),
                             QString("6"),    QString("7"),   QString("8"),
                             QString("9"),    QString("x"),   QString("br_1"),
                             QString("br_2"), QString("pow"), QString("add"),
                             QString("sub"),  QString("div")};

  for (int i = 0; i < 32; i++) {
    QString buttonName = "pushButton_" + buttonNames[i];
    numButtons[i] = MainWindow::findChild<QPushButton *>(buttonName);
    connect(numButtons[i], SIGNAL(clicked()), this, SLOT(digits_numbers()));
  }

  QPushButton *funcButtons[32];
  QString funcButtonNames[32] = {
      QString("sin"),  QString("cos"),  QString("tan"),  QString("ctg"),
      QString("asin"), QString("acos"), QString("atan"), QString("ln"),
      QString("log"),  QString("mod")};

  for (int i = 0; i < 32; i++) {
    QString funcButtonName = "pushButton_" + funcButtonNames[i];
    funcButtons[i] = MainWindow::findChild<QPushButton *>(funcButtonName);
    connect(funcButtons[i], SIGNAL(clicked()), this, SLOT(functions()));
  }

  connect(ui->pushButton_point, SIGNAL(clicked()), this, SLOT(point()));

  connect(ui->pushButton_mult, SIGNAL(clicked()), this, SLOT(multiply()));
  connect(ui->pushButton_clear, SIGNAL(clicked()), this, SLOT(clear()));
  connect(ui->pushButton_remove, SIGNAL(clicked()), this, SLOT(remove()));
  connect(ui->pushButton_copy, SIGNAL(clicked()), this, SLOT(copy()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(sqrt()));

  connect(ui->pushButton_pi, SIGNAL(clicked()), this, SLOT(const_pi()));
  connect(ui->pushButton_e, SIGNAL(clicked()), this, SLOT(const_exp()));

  connect(ui->pushButton_result, SIGNAL(clicked()), this, SLOT(result()));

  connect(ui->pushButton_graph, SIGNAL(clicked()), this, SLOT(openGraph()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::digits_numbers() {
  QPushButton *button = (QPushButton *)sender();
  if (ui->label->text() == "0") {
    ui->label->setText(button->text());
  } else {
    ui->label->setText(ui->label->text() + button->text());
  }
}

void MainWindow::functions() {
  QPushButton *button = (QPushButton *)sender();
  if (ui->label->text() == "0") {
    ui->label->setText(button->text() + "(");
  } else {
    ui->label->setText(ui->label->text() + button->text() + "(");
  }
}

void MainWindow::clear() {
  ui->label->setText("0");
  ui->label_2->setText("");
}

void MainWindow::remove() {
  QString str1 = ui->label->text();
  QByteArray ba = str1.toLocal8Bit();
  char *c_str2 = ba.data();
  ui->label->setText(removeLastChar(c_str2));
}

void MainWindow::copy() {
  QClipboard *clipboard = QApplication::clipboard();
  clipboard->setText(ui->label->text());
}

void MainWindow::multiply() { ui->label->setText(ui->label->text() + "*"); }

void MainWindow::sqrt() {
  if (ui->label->text() == "0") {
    ui->label->setText("sqrt(");
  } else {
    ui->label->setText(ui->label->text() + "sqrt(");
  }
}

void MainWindow::point() { ui->label->setText(ui->label->text() + "."); }

void MainWindow::const_pi() {
  if (ui->label->text() == "0") {
    ui->label->setText("3.141592");
  } else {
    ui->label->setText(ui->label->text() + "3.141592");
  }
}

void MainWindow::const_exp() {
  if (ui->label->text() == "0") {
    ui->label->setText("2.718281");
  } else {
    ui->label->setText(ui->label->text() + "2.718281");
  }
}

void MainWindow::result() {
  ui->label_2->setText(ui->label->text() + "=");

  QString str1 = ui->label->text();
  QByteArray ba = str1.toLocal8Bit();
  const char *c_str2 = ba.data();

  double x = ui->doubleSpinBox->value();

  checkErrors(c_str2);

  double res;
  if (calculate(c_str2, &res, x) == 0) {
    QString s = QString::number(res);
    ui->label->setText(s);
  } else {
    ui->label->setText("Error");
  }
}

void MainWindow::on_pushButton_creditCalc_clicked() { credit.show(); }

void MainWindow::openGraph() {
  emit signal(ui->label->text());
  graph->show();
}

void MainWindow::on_pushButton_37_clicked() {
  QString str1 = ui->label->text();
  QByteArray ba = str1.toLocal8Bit();
  const char *c_str2 = ba.data();
  if (hasStringOnlyNums(c_str2)) {
    double num = ui->label->text().toDouble();
    num *= -1;
    ui->label->setText(QString::number(num));
  }
}
