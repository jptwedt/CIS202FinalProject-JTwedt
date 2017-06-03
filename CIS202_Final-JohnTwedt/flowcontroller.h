#ifndef FLOWCONTROLLER_H
#define FLOWCONTROLLER_H

#include <QSignalMapper>
/*
 * acts as a "gatekeeper" function for enabling/disabling form objects
 *
 */

class FlowController : public QSignalMapper {
    Q_OBJECT
private:
    bool sxmScalar,sxmRows,sxmCols,sxmVals,mxmARows,mxmACols,mxmAVals,
      mxmBRows,mxmBCols,mxmBVals;

public:
   explicit FlowController(QSignalMapper *parent = 0);
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
   void sxmScalarFlipped(bool);
   void sxmRowsFlipped(bool);
   void sxmColsFlipped(bool);
   void sxmValsFlipped(bool);
   void mxmARowsFlipped(bool);
   void mxmAColsFlipped(bool);
   void mxmAValsFlipped(bool);
   void mxmBRowsFlipped(bool);
   void mxmBColsFlipped(bool);
   void mxmBValsFlipped(bool);
};

#endif // FLOWCONTROLLER_H
