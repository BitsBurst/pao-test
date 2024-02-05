#include "mainwindow.h"
#include <QBoxLayout>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QBoxLayout* layout = new QBoxLayout(QBoxLayout::Direction::TopToBottom);
    QPushButton* button1 = new QPushButton("Bottone 1", this);
    connect(button1, &QPushButton::clicked, this, &MainWindow::ButtonClick);
    layout->addWidget(button1);
    QWidget* main = new QWidget(this);
    setCentralWidget(main);
    centralWidget()->setLayout(layout);
    centralWidget()->layout()->addWidget(button1);
}

MainWindow::~MainWindow() {}

void MainWindow::ButtonClick() {
    qDebug() << "Click Bottone !";
}
