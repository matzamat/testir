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
    void on_verticalSlider_valueChanged(int value);

    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
