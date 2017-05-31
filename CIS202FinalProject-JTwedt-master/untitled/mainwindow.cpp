#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_scene = new QGraphicsScene();
    ui->graphicsView->setScene(m_scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
