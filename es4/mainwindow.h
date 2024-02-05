#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>
#include <QPushButton>
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QWidget* main;
    QBoxLayout* layout;
    QPushButton* button1;
    QPushButton* button2;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ButtonClick1();
    void ButtonClick2();
};
#endif // MAINWINDOW_H
