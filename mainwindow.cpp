#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(image.load("/home/mparlaktuna/workspace/eigen_qt_playground/data/lenna.png"))
    {
        qInfo() << "loaded" ;
    }
    qInfo() << "test" << image.size();
    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->mainImage->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
