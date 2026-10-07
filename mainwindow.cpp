#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_sum_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text();
    QString text_2 = ui->lineEdit_value_2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1, 10);
    int value_2 = text_2.toInt(&correct_2, 10);

    if(correct_1 && correct_2){
        int sum = value_1 + value_2;
        QString result = QString::number(sum,10);
        ui->label_result_value->setText(result);
    }
    else{
        ui->label_result_value->setText("Ошибка!");
    }
}

void MainWindow::on_pushButton_raz_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text();
    QString text_2 = ui->lineEdit_value_2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1, 10);
    int value_2 = text_2.toInt(&correct_2, 10);

    if(correct_1 && correct_2){
        int raz = value_1 - value_2;
        QString result = QString::number(raz,10);
        ui->label_result_value->setText(result);
    }
    else{
        ui->label_result_value->setText("Ошибка!");
    }
}


void MainWindow::on_pushButton_umn_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text();
    QString text_2 = ui->lineEdit_value_2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1, 10);
    int value_2 = text_2.toInt(&correct_2, 10);

    if(correct_1 && correct_2){
        long long umn = (long long) value_1 * value_2;
        QString result = QString::number(umn,10);
        ui->label_result_value->setText(result);
    }
    else{
        ui->label_result_value->setText("Ошибка!");
    }
}

void MainWindow::on_pushButton_del_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text();
    QString text_2 = ui->lineEdit_value_2->text();

    bool correct_1 = false;
    bool correct_2 = false;

    int value_1 = text_1.toInt(&correct_1, 10);
    int value_2 = text_2.toInt(&correct_2, 10);

    if(correct_1 && correct_2 and value_2 != 0){
        float del = (float) value_1 / value_2;
        QString result = QString::number(del, 'g', 10);
        ui->label_result_value->setText(result);
    }
    else{
        ui->label_result_value->setText("Ошибка!");
    }
}
