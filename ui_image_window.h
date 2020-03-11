/********************************************************************************
** Form generated from reading UI file 'image_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_WINDOW_H
#define UI_IMAGE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Image_window
{
public:
    QWidget *centralwidget;
    QLabel *imagespace;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Image_window)
    {
        if (Image_window->objectName().isEmpty())
            Image_window->setObjectName(QString::fromUtf8("Image_window"));
        Image_window->resize(800, 600);
        centralwidget = new QWidget(Image_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        imagespace = new QLabel(centralwidget);
        imagespace->setObjectName(QString::fromUtf8("imagespace"));
        imagespace->setGeometry(QRect(10, 30, 650, 500));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 480, 112, 32));
        Image_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Image_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Image_window->setMenuBar(menubar);
        statusbar = new QStatusBar(Image_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Image_window->setStatusBar(statusbar);

        retranslateUi(Image_window);

        QMetaObject::connectSlotsByName(Image_window);
    } // setupUi

    void retranslateUi(QMainWindow *Image_window)
    {
        Image_window->setWindowTitle(QCoreApplication::translate("Image_window", "MainWindow", nullptr));
        imagespace->setText(QCoreApplication::translate("Image_window", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Image_window", "Save as", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Image_window: public Ui_Image_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_WINDOW_H
