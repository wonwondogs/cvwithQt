#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Timer = new QTimer(this);
    connect(Timer, SIGNAL(timeout()), this, SLOT(DisplayImage()));
    Timer->start();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::DisplayImage(){
    Mat img;
    img = imread("/Users/sukesuke/Programing/qtfirst/onegai.jpg");
    cv::resize(img, img, Size(512, 384), 0, 0, INTER_LINEAR);
    cv::cvtColor(img,img,COLOR_BGR2RGB);
    QImage imdisplay((uchar*)img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    ui->display_image->setPixmap(QPixmap::fromImage(imdisplay));
}

/*
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
*/
