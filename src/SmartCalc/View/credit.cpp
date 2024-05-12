#include "credit.h"

#include <math.h>

#include <QDate>

#include "ui_credit.h"

Credit::Credit(QWidget *parent) : QWidget(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }

void Credit::on_pushButton_clicked() {
  double percent = ui->lineEdit_3->text().toDouble();
  double time = ui->lineEdit_2->text().toDouble();
  double sum = ui->lineEdit_1->text().toDouble();

  // GET DAYS IN CURRENT MONTH
  int year = QDate::currentDate().year();
  int month = QDate::currentDate().month();

  // GET TYPE OF CALCULATION
  int type = ui->comboBox->currentIndex();

  if (type == 0) {
    double month_percent = percent / 12 / 100;
    double ann_coefficient = ((month_percent * pow((month_percent + 1), time)) /
                              (pow((month_percent + 1), time) - 1));
    double month_payment = sum * ann_coefficient;
    double all_payment = month_payment * time;
    double overpayment = month_payment * time - sum;

    ui->res_1->setText(QString::number((month_payment)));
    ui->res_2->setText(QString::number((overpayment)));
    ui->res_3->setText(QString::number((all_payment)));

    ui->res_4->setText("");
  } else if (type == 1) {
    double summ = sum;
    double month_payment = sum / time;
    double percent_payment = 0;
    double percents_full = 0;

    int i = 0;
    double max_payment = 0;
    double min_payment = 0;

    while (summ > 0) {
      int daysMonth = 0;
      if (month < 12) {
        month++;
      } else {
        month = 1;
        year++;
      }
      daysMonth = QDate(year, month, 1).daysInMonth();

      percent_payment = summ * (percent / 100) * daysMonth / 366;

      percents_full += percent_payment;
      //         double month_payment_full = sum/time + percent_payment;
      summ = summ - month_payment;
      if (i == 0) {
        max_payment = sum / time + percent_payment;
      } else if (i == time - 1) {
        min_payment = sum / time + percent_payment;
      }
      i++;
    }

    ui->res_1->setText(QString::number((max_payment)));
    ui->res_2->setText(QString::number((percents_full)));
    ui->res_3->setText(QString::number((percents_full + sum)));
    ui->res_4->setText(QString::number((min_payment)));
    //        printf("Все проценты:%lf\n", percents_full);
    //        printf("Вся сумма:%lf\n", percents_full + sum);
  }
}
