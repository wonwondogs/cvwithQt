/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonBox;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QLineEdit *PrintPath;
    QPushButton *FileButton;
    QWidget *page_5;
    QLineEdit *PrintPath_2;
    QPushButton *FileButton_2;
    QCheckBox *checkBox;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTextBrowser *textBrowser;
    QWidget *page;
    QLabel *display_image;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(700, 300);
        MainWindow->setMinimumSize(QSize(700, 300));
        MainWindow->setMaximumSize(QSize(700, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonBox = new QPushButton(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(570, 190, 112, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setMouseTracking(true);
        buttonBox->setTabletTracking(true);
        buttonBox->setAutoFillBackground(false);
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(40, 170, 501, 61));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        PrintPath = new QLineEdit(page_4);
        PrintPath->setObjectName(QString::fromUtf8("PrintPath"));
        PrintPath->setGeometry(QRect(0, 20, 411, 21));
        FileButton = new QPushButton(page_4);
        FileButton->setObjectName(QString::fromUtf8("FileButton"));
        FileButton->setGeometry(QRect(423, 16, 75, 32));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        PrintPath_2 = new QLineEdit(page_5);
        PrintPath_2->setObjectName(QString::fromUtf8("PrintPath_2"));
        PrintPath_2->setGeometry(QRect(0, 20, 411, 21));
        FileButton_2 = new QPushButton(page_5);
        FileButton_2->setObjectName(QString::fromUtf8("FileButton_2"));
        FileButton_2->setGeometry(QRect(423, 16, 75, 32));
        stackedWidget_2->addWidget(page_5);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(570, 70, 111, 20));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 0, 511, 161));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        textBrowser = new QTextBrowser(page_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 20, 501, 141));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setAutoFillBackground(true);
        textBrowser->setAcceptRichText(false);
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        display_image = new QLabel(page);
        display_image->setObjectName(QString::fromUtf8("display_image"));
        display_image->setGeometry(QRect(0, 0, 501, 401));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonBox->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        PrintPath->setPlaceholderText(QCoreApplication::translate("MainWindow", "\343\203\217\343\203\254\343\203\274\343\202\267\343\203\247\343\203\263\351\231\244\345\216\273", nullptr));
        FileButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        PrintPath_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\206\205\351\203\250\347\251\272\345\255\224\346\212\275\345\207\272", nullptr));
        FileButton_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\206\205\351\203\250\347\251\272\345\255\224\346\212\275\345\207\272", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">\343\203\217\343\203\254\343\203\274\343\202\267\343\203\247\343\203\263\351\231\244\345\216\273\343\201\256\345\240\264\345\220\210\343\201\257\347\224\273\345\203\217\343\202\222\351\201\270\346\212\236\343\201\231\343\202\213\357\274\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">\345\206\205\351\203\250\347\251\272\345\255\224\346\212\275\345\207\272\343\201"
                        "\257\343\203\201\343\202\247\343\203\203\343\202\257\343\203\234\343\203\203\343\202\257\343\202\271\343\202\222\351\201\270\346\212\236\343\201\227\343\203\225\343\202\251\343\203\253\343\203\200\345\215\230\344\275\215\343\201\247\351\201\270\346\212\236\343\201\231\343\202\213\357\274\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">\343\201\251\343\201\241\343\202\211\343\202\202\351\201\270\346\212\236\345\276\214\343\201\253\357\274\214Run\343\201\247\345\256\237\350\241\214\343\201\231\343\202\213\357\274\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">Save as\343\201\247\345\220\215\345\211\215\343\202\222\344\273\230\343\201\221\343\201\246\344\273\273\346\204\217\343\201\256\345\240\264\346\211\200\343\201\270\344\277\235"
                        "\345\255\230\343\201\231\343\202\213\343\201\223\343\201\250\343\201\214\343\201\247\343\201\215\343\202\213\357\274\216</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont';\">----------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">By downloading, copying, installing o"
                        "r using the software you agree to this license. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\"> If you do not agree to this license, do not download, install,  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">copy or use the software.                           </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">License Agreement                </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">For Open So"
                        "urce Computer Vision Library </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\343\203\222\343\203\251\343\202\256\343\203\216\350\247\222\343\202\264 Pro W3','Hiragino Kaku Gothic Pro','\343\203\241\343\202\244\343\203\252\343\202\252','Meiryo','\357\274\255\357\274\263 \357\274\260\343\202\264\343\202\267\343\203\203\343\202\257','sans-serif'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">Copyright (C) 2000-2008, Intel Corporation, all rights reserved. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">Copyright (C) 2008-2009, Willow Garage Inc., all"
                        " rights reserved. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">Third party copyrights are property of their respective owners. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\343\203\222\343\203\251\343\202\256\343\203\216\350\247\222\343\202\264 Pro W3','Hiragino Kaku Gothic Pro','\343\203\241\343\202\244\343\203\252\343\202\252','Meiryo','\357\274\255\357\274\263 \357\274\260\343\202\264\343\202\267\343\203\203\343\202\257','sans-serif'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">Redistribution and use in source and binary forms, with or w"
                        "ithout modification, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">are permitted provided that the following conditions are met:   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\343\203\222\343\203\251\343\202\256\343\203\216\350\247\222\343\202\264 Pro W3','Hiragino Kaku Gothic Pro','\343\203\241\343\202\244\343\203\252\343\202\252','Meiryo','\357\274\255\357\274\263 \357\274\260\343\202\264\343\202\267\343\203\203\343\202\257','sans-serif'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">* Redistribution's of source code must retain the above c"
                        "opyright notice, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">   this list of conditions and the following disclaimer.   </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\343\203\222\343\203\251\343\202\256\343\203\216\350\247\222\343\202\264 Pro W3','Hiragino Kaku Gothic Pro','\343\203\241\343\202\244\343\203\252\343\202\252','Meiryo','\357\274\255\357\274\263 \357\274\260\343\202\264\343\202\267\343\203\203\343\202\257','sans-serif'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">* Redistribution's in binary form must reproduce the above copyrig"
                        "ht notice, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">   this list of conditions and the following disclaimer in the documentation     </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">   and/or other materials provided with the distribution.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">* The name of the copyright holders may not be used t"
                        "o endorse or promote products     </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">    derived from this software without specific prior written permission. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\343\203\222\343\203\251\343\202\256\343\203\216\350\247\222\343\202\264 Pro W3','Hiragino Kaku Gothic Pro','\343\203\241\343\202\244\343\203\252\343\202\252','Meiryo','\357\274\255\357\274\263 \357\274\260\343\202\264\343\202\267\343\203\203\343\202\257','sans-serif'; font-size:11pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">This software is provided by the c"
                        "opyright holders and contributors &quot;as is&quot; and </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">any express or implied warranties, including, but not limited to, the implied </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">warranties of merchantability and fitness for a particular purpose are disclaimed. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">In no event shall the Intel Corporation or contributors be liable for any direct, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">indirect, incidental, special, exemplary, or consequential damages </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">(including, but not limited to, procurement of substitute goods or services; </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">loss of use, data, or profits; or business interruption) however caused </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">and on any theory of liability, whether in contract, strict liability, </span></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\">or tort (including negligence or otherwise) arising in any way out of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:11pt;\"> the use of this software, even if advised of the possibility of such damage.</span></p></body></html>", nullptr));
        display_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
