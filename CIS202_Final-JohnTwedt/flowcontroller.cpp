#include "flowcontroller.h"
#include <QDebug>

FlowController::FlowController(QSignalMapper *parent)
{

}

FlowController::~FlowController()
{

}

bool FlowController::getMxmBVals() const
{
    return mxmBVals;
}

void FlowController::sxmScalarFlipped(bool msg)
{
    sxmScalar = msg;
    qDebug() << sxmScalar << " is the value of sxmScalar in flowcontroller.";
}

void FlowController::sxmRowsFlipped(bool)
{

}

void FlowController::sxmColsFlipped(bool)
{

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
