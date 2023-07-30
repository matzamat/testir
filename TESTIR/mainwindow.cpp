#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    string stri;
    stri=to_string(value);
    QString qstr = QString::fromStdString(stri);
    ui->textBrowser_2->setText(qstr);
}

void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->setText("Клик по кнопке btnName");
}

void MainWindow::on_radioButton_clicked()
{
    ui->textBrowser->setText("выбран элемент radioItem 1 из radioName");
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->textBrowser->setText("выбран элемент radioItem 3 из radioName");
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->textBrowser->setText("выбран элемент radioItem 2 из radioName");
}

void MainWindow::on_comboBox_activated(int index)
{
    if(index==0){
        ui->textBrowser->setText("выбран элемент listName из списка listName");
    } else if(index==1){
        ui->textBrowser->setText("выбран элемент itemName1 из списка listName");
    } else if(index==2){
        ui->textBrowser->setText("выбран элемент itemName2 из списка listName");
    } else if(index==3){
        ui->textBrowser->setText("выбран элемент itemName3 из списка listName");
    } else if(index==4){
        ui->textBrowser->setText("выбран элемент itemName4 из списка listName");
    }
}
