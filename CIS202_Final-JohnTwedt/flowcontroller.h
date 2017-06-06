#ifndef FLOWCONTROLLER_H
#define FLOWCONTROLLER_H

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
    mxmAValsOn,mxmBRows,mxmBCols,mxmBVals,mxmBValsOn;

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
   void sxmSelected(bool toggle);
   void mxmSelected(bool toggle);
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
