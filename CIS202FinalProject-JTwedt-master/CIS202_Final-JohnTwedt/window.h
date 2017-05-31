#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QGroupBox>
#include "mainwindow.h"

class Window : public QWidget {
    Q_OBJECT
public:
    Window(QWidget *parent = 0);
private:
    QGroupBox *createElementBox();
    QGroupBox *createOperationBox();
    QGroupBox *createSonMBox();
    QGroupBox *createMonMBox();
};

#endif // WINDOW_H
