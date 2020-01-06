
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
*/

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void DisplayImage();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     QImage imdisplay;
     QTimer* Timer;
private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
