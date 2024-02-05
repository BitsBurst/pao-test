#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::ButtonClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ButtonClick() {
    qDebug() << "Click Bottone !";
}
