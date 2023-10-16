#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    //void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

const QString css_stil="\
QMainWindow{background-color:#222; color:#ccc;}\
QPushButton{background-color:rgb(105,14,14); color:#ccc}\
QPushButton:hover{background: #3700b3;}\
QRadioButton{color:#ccc;margin:10px,5px}\
QRadioButton:indicator{background-color:#ccc; border:2px solid #ccc; border-radius:10px;}\
QRadioButton:indicator{width: 25px; height: 25px;}\
QRadioButton:indicator:checked{background-color:rgb(105,14,14);}\
QSpinBox{margin:0px 32px;background-color:#222; color:#ccc;}\
QSpinBox{width:50px; height:80px}\
QSpinBox:up-button{width: 60px; margin: 2px 0px; background-color: #555; border-top-left-radius: 10px; border-top-right-radius: 10px;}\
QSpinBox:down-button{width: 60px; margin: 2px 0px; background-color: #555; border-bottom-left-radius: 10px; border-bottom-right-radius: 10px;}\
QLineEdit{background-color:#555; color:#ccc;}\
";

const QString css_stil_android="\
QMainWindow{background-color:#222; color:#ccc;}\
QPushButton{background-color:rgb(105,14,14); color:#ccc}\
QPushButton:hover{background: #3700b3;}\
QRadioButton{color:#ccc;margin:40px,20px}\
QRadioButton:indicator{background-color:#ccc; border:8px solid #ccc; border-radius:40px;}\
QRadioButton:indicator{width: 90px; height: 90px;}\
QRadioButton:indicator:checked{background-color:rgb(105,14,14);}\
QSpinBox{margin:0px 32px;background-color:#222; color:#ccc;}\
QSpinBox{width:200px; height:400px}\
QSpinBox:up-button{min-width: 95%; margin: 10px 0px; background-color: #555; border-top-left-radius: 40%; border-top-right-radius: 40%;}\
QSpinBox:down-button{min-width: 95%; margin: 10px 0px; background-color: #555; border-bottom-left-radius: 40%; border-bottom-right-radius: 40%;}\
QLineEdit{background-color:#555; color:#ccc;}\
";
#endif // MAINWINDOW_H
