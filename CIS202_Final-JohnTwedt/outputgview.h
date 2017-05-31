#ifndef OUTPUTGVIEW_H
#define OUTPUTGVIEW_H

#include <QGraphicsView>
#include "window.h"
#include "matrix.h"

class OutputGView : public QGraphicsView {
    Q_OBJECT
public:
    OutputGView();
    OutputGView(QWidget *parent = Q_NULLPTR);
public slots:
    void updateOutput(Matrix* result);
signals:
    void dataDisplayed(int msg);
      //if data has been output, an integer will be emitted
      //which will correspond to the type of message
      //ie, a matrix, or an error
};

#endif // OUTPUTGVIEW_H
