
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QStandardPaths>
#include <QFileDialog>
#include <QTextStream>
#include <QLineEdit>


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
     QImage imdisplay;
     QTimer* Timer;
     QString strFileName;
private slots:
     //void on_PrintPath_textChanged(const QString &arg1);

     void on_PrintPath_returnPressed();


private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
