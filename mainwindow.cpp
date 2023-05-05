#include "mainwindow.hh"
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


void MainWindow::on_countButton_clicked()
{
    float BMI = 0;

    if ( height_ == 0 || weight_ == 0 )
    {
        ui->resultLabel->setText("Cannot count.");
        return;
    }

    BMI = (weight_ / (height_*height_)) * 10000;

    QString strBMI = QString::number(BMI);

    ui->resultLabel->setText(strBMI);

    if ( BMI < 18.5 )
    {
        ui->infoTextBrowser->setText("You are underweight.");
    }

    else if ( (BMI >= 18.5) && (BMI <= 25) )
    {
        ui->infoTextBrowser->setText("Your weight is normal.");
    }

    else if ( BMI > 25 )
    {
        ui->infoTextBrowser->setText("You are overweight.");
    }

}


void MainWindow::on_weightLineEdit_textChanged(const QString &weight)
{
     weight_ = weight.toFloat();

}


void MainWindow::on_heightLineEdit_textChanged(const QString &height)
{
    height_ = height.toFloat();
}

