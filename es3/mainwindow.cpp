#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::ButtonClick1);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::ButtonClick2);
    ui->pushButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::ButtonClick1() {
    qDebug() << "Click Bottone 1 !";
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
}
void MainWindow::ButtonClick2() {
    qDebug() << "Click Bottone 2 !";
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
}

