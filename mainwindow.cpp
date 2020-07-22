#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QClipboard"
#include "ctime"

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

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText("");
    QString nums="0123456789";
    QString alphas="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz0123456789";
    QString others=alphas+"!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"+alphas;

    int randIndex=0;
    srand(time(NULL));

    if (ui->sel1->isChecked()){
        for (int i=0; i<ui->spinBox->text().toInt();i++){
            randIndex=rand()%nums.length();
            ui->lineEdit->setText(ui->lineEdit->text()+nums[randIndex]);
        }
    }
    else if (ui->sel2->isChecked()){
        for (int i=0; i<ui->spinBox->text().toInt();i++){
            randIndex=rand()%alphas.length();
            ui->lineEdit->setText(ui->lineEdit->text()+alphas[randIndex]);
        }
    }
    else if (ui->sel3->isChecked()){
        for (int i=0; i<ui->spinBox->text().toInt();i++){
            randIndex=rand()%others.length();
            ui->lineEdit->setText(ui->lineEdit->text()+others[randIndex]);
        }
    }
    else{
        ui->lineEdit->setText("Choose one");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString originalText = ui->lineEdit->text();
    clipboard->setText(originalText);
}
/*
void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
*/
