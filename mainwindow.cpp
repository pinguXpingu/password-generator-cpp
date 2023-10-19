#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QClipboard"
#include "ctime"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox->findChild<QLineEdit*>()->setReadOnly(true);
    ui->spinBox->findChild<QLineEdit*>()->setFocusPolicy(Qt::NoFocus);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_genButton_clicked()
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
    this->resizeFont();
}

void MainWindow::on_copyButton_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString originalText = ui->lineEdit->text();
    clipboard->setText(originalText);
}

void MainWindow::resizeFont()
{
    qDebug() << ">>>>>>>>>>>>>>>>>>>>>>" <<  ui->lineEdit->text().count();
    if (ui->lineEdit->text().count() > 25) {
        ui->lineEdit->setStyleSheet(css_stil_text2);
        }
    else if (ui->lineEdit->text().count() > 20) {
        ui->lineEdit->setStyleSheet(css_stil_text3);
    }
    else {
        ui->lineEdit->setStyleSheet(css_stil_android);
    }

}

