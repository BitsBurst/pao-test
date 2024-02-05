#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    main(new QWidget(this)),
    layout(new QBoxLayout(QBoxLayout::Direction::TopToBottom)),
    button1(new QPushButton("Bottone 1", this)),
    button2(new QPushButton("Bottone 2", this))
{
    setCentralWidget(main);
    centralWidget()->setLayout(layout);
    centralWidget()->layout()->addWidget(button1);
    centralWidget()->layout()->addWidget(button2);
    connect(button1, &QPushButton::clicked, this, &MainWindow::ButtonClick1);
    connect(button2, &QPushButton::clicked, this, &MainWindow::ButtonClick2);
    button1->setEnabled(false);
}

MainWindow::~MainWindow() {}

void MainWindow::ButtonClick1() {
    qDebug() << "Click Bottone 1 !";
    button1->setEnabled(false);
    button2->setEnabled(true);
}
void MainWindow::ButtonClick2() {
    qDebug() << "Click Bottone 2 !";
    button1->setEnabled(true);
    button2->setEnabled(false);
}

