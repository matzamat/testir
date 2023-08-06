#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void SliderChanged(int value);

    void buttonclick();

    void radio1click();

    void radio2click();

    void radio3click();

    void comboBox(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
