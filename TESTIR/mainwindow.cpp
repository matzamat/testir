#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(on_verticalSlider_valueChanged(int)));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
    connect(ui->radioButton, SIGNAL(clicked()), this, SLOT(on_radioButton_clicked()));
    connect(ui->radioButton_3, SIGNAL(clicked()), this, SLOT(on_radioButton_3_clicked()));
    connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(on_radioButton_2_clicked()));
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(on_comboBox_activated(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    ui->textBrowser_2->setText(QString::number(value));
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
    QString itemName = (index > 0) ? "itemName " + QString::number(index) : "listName";
    ui->textBrowser->setText("выбран элемент " + itemName + " из списка listName");
}
