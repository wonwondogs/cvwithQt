#include "image_window.h"
#include "mainwindow.h"
#include "ui_image_window.h"

#include <QTimer>
#include <iostream>
#include <QLineEdit>
#include <QDropEvent>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"


Image_window::Image_window(cv::Mat rowimg,QImage img,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Image_window)
{
    ui->setupUi(this);
    this->setWindowTitle("Image");
    setWindowFlags(Qt::Window);
    ResultImg = img;
    RowImg = rowimg;
    ui->imagespace->setPixmap(QPixmap::fromImage(ResultImg));
}

Image_window::~Image_window()
{
    delete ui;
}

void Image_window::on_pushButton_clicked()
{
 strFileName = QFileDialog::getSaveFileName(this,tr("Save File"), "",tr("Image Files (*.bmp)"));
 std::cout << strFileName.toStdString();
 cv::imwrite(strFileName.toStdString(),RowImg);
}
