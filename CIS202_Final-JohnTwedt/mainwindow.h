#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGenericMatrix>
#include <QTextEdit>
#include <QRadioButton>
#include <QLineEdit>
#include "flowcontrol.h"

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
    void on_radioButtonMxM_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    //QGraphicsScene *m_scene;
    //QGraphicsTextItem *m_text;
};

#endif // MAINWINDOW_H
