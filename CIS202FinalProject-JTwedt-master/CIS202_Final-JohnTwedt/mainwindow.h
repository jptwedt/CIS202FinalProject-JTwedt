#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include "outputgview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

private slots:
    void on_radioButtonSxM_clicked(bool checked);

    void on_radioButtonMxM_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_scene;
    QGraphicsTextItem *m_text;
};

#endif // MAINWINDOW_H