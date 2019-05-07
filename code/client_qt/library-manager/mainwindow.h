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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onDemandRefresh_btn();
    void onDemandSubmit_btn();
    void onBuyRefresh_btn();
    void onDelete_btn();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
