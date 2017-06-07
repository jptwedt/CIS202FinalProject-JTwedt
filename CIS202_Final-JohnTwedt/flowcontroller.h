#ifndef FLOWCONTROLLER_H
#define FLOWCONTROLLER_H

#include <header.hpp>
#include <QSignalMapper>
/*
 * acts as a "gatekeeper" function for enabling/disabling form objects
 * holds status markers for denoting whether various ui elements are
 * (or should) be enabled or not, and whether they're selected
 *
 */

class FlowController : public QObject {
    Q_OBJECT
private:
    bool mxm,sxm,radioButtonAdd,radioButtonSubtract,radioButtonMultiply,
    sxmScalar,sxmRows,sxmCols,sxmVals,sxmValsOn,mxmARows,mxmACols,mxmAVals,
    mxmAValsOn,mxmBRows,mxmBCols,mxmBVals,mxmBValsOn,sxmSubmitOn,mxmSubmitOn;

public:
   explicit FlowController(QObject *parent = 0);
   ~FlowController();

public slots:
   void sxmSelected(bool toggle);
   void mxmSelected(bool toggle);
   void addButtonToggled(bool);
   void subtractButtonToggled(bool);
   void multiplyButtonToggled(bool);
   void sxmScalarGood(bool toggle);
   void sxmRowsGood(bool toggle);
   void sxmColsGood(bool toggle);
   void sxmValsGood(bool toggle);
   void mxmARowsGood(bool toggle);
   void mxmAColsGood(bool toggle);
   void mxmAValsGood(bool toggle);
   void mxmBRowsGood(bool toggle);
   void mxmBColsGood(bool toggle);
   void mxmBValsGood(bool toggle);

signals:
   void enableSxMVals(bool);
   void enableSxMSubmit(bool);
   void enableMxMAVals(bool);
   void enableMxMBVals(bool);
   void enableMxMSubmit(bool);
};

#endif // FLOWCONTROLLER_H
