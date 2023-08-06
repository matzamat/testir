#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->radioButton, SIGNAL(clicked(bool)), this, SLOT(radio1click()));
    QObject::connect(ui->radioButton_2, SIGNAL(clicked(bool)), this, SLOT(radio2click()));
    QObject::connect(ui->radioButton_3, SIGNAL(clicked(bool)), this, SLOT(radio3click()));
    QObject::connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(buttonclick()));
    QObject::connect(ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(SliderChanged(int)));
    QObject::connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(comboBox(int)));

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::SliderChanged(int value){
    ui->textBrowser_2->setText(QString::number(value));
}

void MainWindow::buttonclick(){
    ui->textBrowser->setText("Клик по кнопке btnName");
}

void MainWindow::radio1click(){
    ui->textBrowser->setText("выбран элемент radioItem 1 из radioName");
}

void MainWindow::radio2click(){
    ui->textBrowser->setText("выбран элемент radioItem 2 из radioName");
}

void MainWindow::radio3click(){
    ui->textBrowser->setText("выбран элемент radioItem 3 из radioName");
}

void MainWindow::comboBox(int index){
    QString itemName = (index > 0) ? "itemName " + QString::number(index) : "listName";
    ui->textBrowser->setText("выбран элемент " + itemName + " из списка listName");
}
