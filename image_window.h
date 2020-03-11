#ifndef IMAGE_WINDOW_H
#define IMAGE_WINDOW_H

#include <QMainWindow>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"


namespace Ui {
class Image_window;
}

class Image_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Image_window(cv::Mat rowimg, QImage img,QWidget *parent = nullptr);
    ~Image_window();
    Ui::Image_window *ui;
    QImage ResultImg;
    cv::Mat RowImg;
    QString strFileName;
private slots:
    void on_pushButton_clicked();

private:


};

#endif // IMAGE_WINDOW_H
