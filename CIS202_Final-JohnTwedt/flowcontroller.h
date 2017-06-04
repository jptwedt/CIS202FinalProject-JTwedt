#ifndef FLOWCONTROLLER_H
#define FLOWCONTROLLER_H

#include <QSignalMapper>
/*
 * acts as a "gatekeeper" function for enabling/disabling form objects
 *
 */

class FlowController : public QObject {
    Q_OBJECT
private:
    bool radioButtonAdd,radioButtonSubtract,radioButtonMultiply,
    sxmScalar,sxmRows,sxmCols,sxmVals,mxmARows,mxmACols,mxmAVals,
    mxmBRows,mxmBCols,mxmBVals;

public:
   explicit FlowController(QObject *parent = 0);
   ~FlowController();
   bool getSxmScalar() const;
   bool getSxmRows() const;
   bool getSxmCols() const;
   bool getSxmVals() const;
   bool getMxmARows() const;
   bool getMxmACols() const;
   bool getMxmAVals() const;
   bool getMxmBRows() const;
   bool getMxmBCols() const;
   bool getMxmBVals() const;

public slots:
   void addButtonToggled(bool);
   void subtractButtonToggled(bool);
   void multiplyButtonToggled(bool);
   void sxmScalarEdited();
   void sxmRowsEdited();
   void sxmColsEdited();
   void sxmValsFlipped(bool);
   void mxmARowsFlipped(bool);
   void mxmAColsFlipped(bool);
   void mxmAValsFlipped(bool);
   void mxmBRowsFlipped(bool);
   void mxmBColsFlipped(bool);
   void mxmBValsFlipped(bool);

signals:
   void sxmValsEnabled(bool);
};

#endif // FLOWCONTROLLER_H
