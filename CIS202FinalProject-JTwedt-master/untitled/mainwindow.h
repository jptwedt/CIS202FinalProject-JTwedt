#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsTextItem>

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

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_scene;
    QGraphicsTextItem *m_text;
};

#endif // MAINWINDOW_H
