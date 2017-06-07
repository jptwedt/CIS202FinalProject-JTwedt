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
   sxmSubmitOn = false;
   mxmACols = false;
   mxmARows = false;
   mxmAVals = false;
   mxmAValsOn = false;
   mxmBCols = false;
   mxmBRows = false;
   mxmBVals = false;
   mxmBValsOn = false;
   mxmSubmitOn = false;
}

FlowController::~FlowController()
{

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

void FlowController::sxmScalarGood(bool toggle)
{
   sxmScalar = toggle;
   sxmRows = true;
   if(sxmCols && sxmScalar && sxmRows){
      sxmValsOn = true;
   }
   else{
      sxmValsOn = false;
   }
   emit enableSxMVals(sxmValsOn);
}

void FlowController::sxmRowsGood(bool toggle)
{
    sxmRows = toggle;
    if(sxmCols && sxmScalar && sxmRows){
       sxmValsOn = true;
    }
    else{
       sxmValsOn = false;
    }
    emit enableSxMVals(sxmValsOn);
}

void FlowController::sxmColsGood(bool toggle)
{
   sxmCols = toggle;
   if(sxmCols && sxmScalar && sxmRows){
      sxmValsOn = true;
   }
   else{
      sxmValsOn = false;
   }
   emit enableSxMVals(sxmValsOn);
}

void FlowController::sxmValsGood(bool toggle)
{
   sxmVals = toggle;
   if(sxmVals){
       sxmSubmitOn = true;
   }
   else{
       sxmSubmitOn = false;
   }
   emit enableSxMSubmit(sxmSubmitOn);
}

void FlowController::mxmARowsGood(bool toggle)
{
    mxmARows = toggle;
    if(mxmARows && mxmACols){
       mxmAValsOn = true;
    }
    else{
       mxmAValsOn = false;
    }
    emit enableMxMAVals(mxmAValsOn);
}

void FlowController::mxmAColsGood(bool toggle)
{
    mxmACols = toggle;
    if(mxmARows && mxmACols){
       mxmAValsOn = true;
    }
    else{
       mxmAValsOn = false;
    }
    emit enableMxMAVals(mxmAValsOn);
}

void FlowController::mxmAValsGood(bool toggle)
{
   mxmAVals = toggle;
   if(mxmAVals && mxmBVals){
       mxmSubmitOn = true;
   }
   else{
       mxmSubmitOn = false;
   }
   emit enableMxMSubmit(mxmSubmitOn);
}

void FlowController::mxmBRowsGood(bool toggle)
{
    mxmBRows = toggle;
    if(mxmBRows && mxmBCols){
       mxmBValsOn = true;
    }
    else{
       mxmBValsOn = false;
    }
    emit enableMxMBVals(mxmBValsOn);
}

void FlowController::mxmBColsGood(bool toggle)
{
    mxmBCols = toggle;
    if(mxmBRows && mxmBCols){
       mxmBValsOn = true;
    }
    else{
       mxmBValsOn = false;
    }
    emit enableMxMBVals(mxmBValsOn);
}

void FlowController::mxmBValsGood(bool toggle)
{
   mxmBVals = toggle;
   if(mxmAVals && mxmBVals){
       mxmSubmitOn = true;
   }
   else{
       mxmSubmitOn = false;
   }
   emit enableMxMSubmit(mxmSubmitOn);
}

