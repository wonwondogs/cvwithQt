#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QStandardPaths>
#include <QFileDialog>
#include <QTextStream>
#include <QLineEdit>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"


#include "global.h"
#include "image_window.h"



namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void DisplayImage();
    void on_FileButton_clicked();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     QImage imdisplay,disp;
     QTimer* Timer;
     Image_window *imageview;
     QString strFileName;
     cv::Mat img;
private slots:
     //void on_PrintPath_textChanged(const QString &arg1);

     void on_PrintPath_returnPressed();

     void on_buttonBox_clicked();

     void dragEnterEvent(QDragEnterEvent *e);

     void dropEvent(QDropEvent *e);

     void on_checkBox_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    Ui::Image_window *imgui;
};


#endif // MAINWINDOW_H
