#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //initializing
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    setWindowTitle(tr("PacMan"));

    ui->mainGraphic->setStyleSheet("QGraphicsView {border: none;}");
    ui->mainGraphic->setBackgroundBrush(Qt::black);
    ui->mainGraphic->setFocusPolicy(Qt::NoFocus);



}

MainWindow::~MainWindow()
{
    delete ui;
}
