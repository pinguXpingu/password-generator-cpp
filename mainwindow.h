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
    void on_genButton_clicked();

    void on_copyButton_clicked();

private:
    Ui::MainWindow *ui;
    void resizeFont();
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
QPushButton{background-color:rgb(105,14,14); color:#ccc; padding:12px 48px;;margin:20px 0px}\
QPushButton:hover{background: #3700b3;}\
QRadioButton{color:#ccc;margin:32px 20px;}\
QRadioButton:indicator{background-color:#ccc; border:8px solid #ccc; border-radius:24px;}\
QRadioButton:indicator{width: 32px; height: 32px;margin-right:24px;}\
QRadioButton:indicator:checked{background-color:rgb(105,14,14);}\
QSpinBox{margin:0px 32px;background-color:#222; color:#ccc;}\
QSpinBox{width:200px; height:400px;}\
QSpinBox:up-button{min-width: 64px; margin: 10px 0px; background-color: #555; border-top-left-radius: 24px; border-top-right-radius: 24px;}\
QSpinBox:down-button{min-width: 64px; margin: 10px 0px; background-color: #555; border-bottom-left-radius: 24px; border-bottom-right-radius: 24px;}\
QSpinBox:lineEdit{background-color:#555; color:#ccc;}\
QLineEdit{background-color:#555; color:#ccc}\
";

const QString css_stil_text2="\
QLineEdit{font-size:20px;}\
";

const QString css_stil_text3="\
    QLineEdit{font-size:24px;}\
    ";


#endif // MAINWINDOW_H
