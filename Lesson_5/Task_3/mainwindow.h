#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::Calculator *ui;
private slots:
    void numbers();
    void on_pushButton_dot_clicked();
    void actions();
    void on_pushButton_clear_clicked();
    void on_pushButton_rov_clicked();
    void sign();
};
#endif // MAINWINDOW_H
