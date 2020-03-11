#ifndef OPENCVWORKER_H
#define OPENCVWORKER_H

#include <QObject>
#include <QImage>
#include <stdio.h>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>


class OpenCvWorker : public QObject
{
    Q_OBJECT
private:
    cv::Mat _frameOriginal;
public:
    explicit OpenCvWorker(QObject *parent = nullptr);

signals:

};

#endif // OPENCVWORKER_H
