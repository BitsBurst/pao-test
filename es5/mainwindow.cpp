#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    main(new QWidget(this)),
    layout(new QBoxLayout(QBoxLayout::Direction::TopToBottom)),
    button1(new QPushButton("Leggi", this)),
    button2(new QPushButton("Scrivi", this))
{
    setCentralWidget(main);
    centralWidget()->setLayout(layout);
    centralWidget()->layout()->addWidget(button1);
    centralWidget()->layout()->addWidget(button2);
    connect(button1, &QPushButton::clicked, this, &MainWindow::ButtonClick1);
    connect(button2, &QPushButton::clicked, this, &MainWindow::ButtonClick2);
}

MainWindow::~MainWindow() {}

void MainWindow::ButtonClick1() {
    qDebug() << "Click Bottone Leggi !";
    QFile file("test.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "Errore", file.errorString());
    }
    qDebug() << file.readAll();
    file.close();
}
void MainWindow::ButtonClick2() {
    qDebug() << "Click Bottone Scrivi !";
    QFile file("test.txt");
    if(!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(0, "Errore", file.errorString());
    }
    file.write("Ciao\n");
    file.close();
}

