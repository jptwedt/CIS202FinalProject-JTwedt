#include "flowcontroller.h"
#include <QDebug>
/*
 bool radioButtonAdd,radioButtonSubtract,radioButtonMultiply,
 sxmScalar,sxmRows,sxmCols,sxmVals,mxmARows,mxmACols,mxmAVals,
 mxmBRows,mxmBCols,mxmBVals;
 */
FlowController::FlowController(QObject *parent)
{
   sxm = true;
   mxm = false;
   radioButtonAdd = true;
   radioButtonSubtract = false;
   radioButtonMultiply = false;
   sxmScalar = false;
   sxmCols = false;
   sxmRows = false;
   sxmVals = false;
   sxmValsOn = false;
   mxmACols = false;
   mxmARows = false;
   mxmAVals = false;
   mxmAValsOn = false;
   mxmBCols = false;
   mxmBRows = false;
   mxmBVals = false;
   mxmBValsOn = false;
}

FlowController::~FlowController()
{

}

bool FlowController::getMxmBVals() const
{
    return mxmBVals;
}

void FlowController::sxmSelected(bool toggle)
{
   sxm = toggle;
   qDebug() << sxm << " sxm val : " << mxm << " mxm val.";
}

void FlowController::mxmSelected(bool toggle)
{
   mxm = toggle;
   qDebug() << mxm << " mxm val : " << sxm << " sxm val.";
}

void FlowController::addButtonToggled(bool status)
{
   radioButtonAdd = status;
   qDebug() << radioButtonAdd << " is current value of radioButtonAdd in tControl.";
}

void FlowController::subtractButtonToggled(bool status)
{
   radioButtonSubtract = status;
   qDebug() << radioButtonSubtract << " is current value of radioButtonSubtract in tControl.";
}

void FlowController::multiplyButtonToggled(bool status)
{
   radioButtonMultiply = status;
   qDebug() << radioButtonMultiply << " is current value of radioButtonMultiply in tControl.";
}

void FlowController::sxmScalarEdited()
{
    sxmScalar = true;
    if(sxmCols == true && sxmRows == true){
       emit sxmValsEnabled(true);
    }
    qDebug() << sxmScalar << " is the value of sxmScalar in flowcontroller.";
}

void FlowController::sxmRowsEdited()
{
    sxmRows = true;
    if(sxmScalar == true && sxmRows == true){
       emit sxmValsEnabled(true);
    }
    qDebug() << sxmScalar << " is the value of sxmScalar in flowcontroller.";
}

void FlowController::sxmColsEdited()
{
    sxmCols = true;
    if(sxmScalar == true && sxmRows == true){
       emit sxmValsEnabled(true);
    }
    qDebug() << sxmScalar << " is the value of sxmScalar in flowcontroller.";
}

void FlowController::sxmValsFlipped(bool)
{

}

void FlowController::mxmARowsFlipped(bool)
{

}

void FlowController::mxmAColsFlipped(bool)
{

}

void FlowController::mxmAValsFlipped(bool)
{

}

void FlowController::mxmBRowsFlipped(bool)
{

}

void FlowController::mxmBColsFlipped(bool)
{

}

void FlowController::mxmBValsFlipped(bool)
{

}

bool FlowController::getSxmRows() const
{
    return sxmRows;
}

bool FlowController::getSxmCols() const
{
    return sxmCols;
}

bool FlowController::getSxmVals() const
{
    return sxmVals;
}

bool FlowController::getMxmARows() const
{
    return mxmARows;
}

bool FlowController::getMxmACols() const
{
    return mxmACols;
}

bool FlowController::getMxmAVals() const
{
    return mxmAVals;
}

bool FlowController::getMxmBRows() const
{
    return mxmBRows;
}

bool FlowController::getMxmBCols() const
{
    return mxmBCols;
}


bool FlowController::getSxmScalar() const
{
    return sxmScalar;
}
