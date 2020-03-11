#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "image_window.h"
#include <QTimer>
#include <iostream>
#include <QLineEdit>
#include <QDropEvent>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("QtCV");
    setAcceptDrops(true);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete imageview;
}

void MainWindow::DisplayImage(){

}

void MainWindow::on_FileButton_clicked(){
    strFileName = QFileDialog::getOpenFileName(this, tr("ファイル選択画面"), QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
    MainWindow::ui->PrintPath->insert(strFileName);
    std::cout << strFileName.toStdString() <<std::endl;
}


void MainWindow::on_PrintPath_returnPressed()
{
    //ui->PrintPath->setValidator(new QIntValidator(this));
    strFileName = ui->PrintPath->text();
    std::cout << strFileName.toStdString() <<std::endl;
    //connect(buttonBox, SIGNAL(clicked()), this, SLOT(DisplayImage()));
    //connect(on_buttonBox_clicked,SIGNAL(true()),&imdisplay,SLOT(on_buttonBox_clicked));
}



void MainWindow::on_buttonBox_clicked()
{
    //ui->stackedWidget->setCurrentIndex(1);
    img = imread(strFileName.toStdString(),0);
    //cv::resize(img, img, Size(300,300), 0, 0, INTER_LINEAR);
    Mat background,foreground,result;
    cv::morphologyEx(img,background,cv::MORPH_OPEN,cv::getStructuringElement(cv::MORPH_ELLIPSE,cv::Size(15,15))); //オープニング処理
    cv::absdiff(img,background,foreground);
    cv::threshold(foreground, result, 0, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);
    cv::cvtColor(result,result,COLOR_BGR2RGB); //BGR
    QImage imdisplay((uchar*)result.data, result.cols, result.rows, result.step, QImage::Format_RGB888);
    QImage disp = imdisplay.scaled(650,500,Qt::KeepAspectRatio);
    //ui->display_image->setPixmap(QPixmap::fromImage(disp));
    imageview = new Image_window(img,disp,this);
    imageview->show();
}

void MainWindow::dragEnterEvent(QDragEnterEvent *e)
{
    if(e->mimeData()->hasFormat("text/uri-list"))
    {
        e->acceptProposedAction();
    }
}


void MainWindow::dropEvent(QDropEvent *e)
{
    strFileName = e->mimeData()->urls().first().toLocalFile();
    ui->PrintPath->setText(e->mimeData()->urls().first().toLocalFile());
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked==true){
        ui->stackedWidget_2->setCurrentIndex(1);
    }else{
        ui->stackedWidget_2->setCurrentIndex(0);
    }
}
