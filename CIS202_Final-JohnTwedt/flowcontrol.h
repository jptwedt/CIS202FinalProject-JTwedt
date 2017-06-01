#ifndef FLOWCONTROL_H
#define FLOWCONTROL_H

#include <QSignalMapper>

/*
 * acts as a "gatekeeper" function for enabling/disabling form objects
 * contains input validation functions
 */

class FlowControl {
    Q_OBJECT
private:
    QSignalMapper tControl;
public:
    FlowControl();
    ~FlowControl();
    isValidSxM(qreal scalar, int rows, int cols);
    isValidMxM(int rowsA, int colsA, int rowsB, int colsB);
public slots:
   void rowColsEntered();
      //listens for "row/col entered" signal
   void valuesEntered();
      //listens for "values entered" signal
public signals:
   void
};

#endif // FLOWCONTROL_H
