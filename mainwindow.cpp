#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <iostream>
#include <QLineEdit>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("あいうえおtest文字コード確認");
    Timer = new QTimer(this);
    //QLineEdit *edit = new QLineEdit("");
    connect(Timer, SIGNAL(timeout()), this, SLOT(DisplayImage()));
    Timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DisplayImage(){
    Mat img;
    img = imread("/Users/sukesuke/Programing/qtfirst/onegai.png");
    cv::resize(img, img, Size(512, 384), 0, 0, INTER_LINEAR);
    cv::cvtColor(img,img,COLOR_BGR2RGB);
    QImage imdisplay((uchar*)img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
    ui->display_image->setPixmap(QPixmap::fromImage(imdisplay));
}

void MainWindow::on_FileButton_clicked(){
    strFileName = QFileDialog::getExistingDirectory(this, tr("ファイル選択画面"), QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    MainWindow::ui->PrintPath->insert(strFileName);
    std::cout << strFileName.toStdString() <<std::endl;

}


void MainWindow::on_PrintPath_returnPressed()
{
    //ui->PrintPath->setValidator(new QIntValidator(this));
    strFileName = ui->PrintPath->text();
    std::cout << strFileName.toStdString() <<std::endl;
    ui->stackedWidget->setCurrentIndex(1); //遷移

}


