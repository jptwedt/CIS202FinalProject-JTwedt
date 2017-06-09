#include "matrix.h"

Matrix::Matrix(QObject *parent){
    sxm = true;
    mxm = false;
    add = true;
    subtract = false;
    multiply = false;
    matrixAFilled = false;
    matrixBFilled = false;
    m_rowsa = 0;
    m_colsa = 0;
    m_rowsb = 0;
    m_colsb = 0;
    m_scalar = 0.0;
    t = QTime::currentTime();
    qsrand((uint)t.msec());
}
/*
Matrix::Matrix(QObject *parent, int rows, int cols){
    m_rows = rows;
    m_cols = cols;
    m_matrix = new qreal*[cols];
    for(int i = 0; i < cols; i++){
        m_matrix[i] = new qreal[rows];
    }
}
*/

Matrix::~Matrix(){
    emptyMatrixA();
    delete [] m_matrixA;
    emptyMatrixB();
    delete [] m_matrixB;
}

void Matrix::emptyMatrixA() {
    for(int i = m_colsa - 1; i >= 0; --i){
        delete [] m_matrixA[i];
    }
    m_rowsa = 0;
    m_colsa = 0;
    matrixAFilled = false;
}

void Matrix::emptyMatrixB() {
    for(int i = m_colsb - 1; i >= 0; --i){
        delete [] m_matrixB[i];
    }
    m_rowsb = 0;
    m_colsb = 0;
    matrixBFilled = false;
}

void Matrix::clearMatrixA()
{
    for(int i = m_colsa - 1; i >= 0; --i){
        for(int j = m_rowsa - 1; j >= 0; --j){
            m_matrixA[i][j] = 0;
        }
    }
}

void Matrix::clearMatrixB()
{
    for(int i = m_colsb - 1; i >= 0; --i){
        for(int j = m_rowsb - 1; j >= 0; --j){
            m_matrixB[i][j] = 0;
        }
    }
}

int Matrix::rowsB() const
{
    return m_rowsb;
}

int Matrix::rowsA() const
{
    return m_rowsa;
}

void Matrix::setRowsA(int rows)
{
    m_rowsa = rows;
}

void Matrix::setRowsB(int rows)
{
    m_rowsb = rows;
}

int Matrix::colsA() const
{
    return m_colsa;
}

int Matrix::colsB() const
{
   return m_colsb;
}

void Matrix::setColsA(int cols)
{
    m_colsa = cols;
}

void Matrix::setColsB(int cols)
{
    m_colsb = cols;
}

qreal **Matrix::matrixA() const
{
    return m_matrixA;
}

void Matrix::sxmToggled(bool toggle)
{
    sxm = toggle;
    if(!sxm){
       if(m_colsa != 0){
           emptyMatrixA();
       }
    }
}

void Matrix::mxmToggled(bool toggle)
{
    mxm = toggle;
    if(!mxm){
       if(m_colsa != 0){
           emptyMatrixA();
       }
       if(m_colsb != 0){
           emptyMatrixB();
       }
    }
}

void Matrix::addToggled(bool toggle)
{
    add = toggle;
}

void Matrix::subtractToggled(bool toggle)
{
    subtract = toggle;
}

void Matrix::multiplyToggled(bool toggle)
{
    multiply = toggle;
}

void Matrix::goodScalar(qreal scalar)
{
    m_scalar = scalar;
}

void Matrix::goodRowsA(int rows)
{
    m_rowsa = rows;
}

void Matrix::goodColsA(int cols)
{
    m_colsa = cols;
}

void Matrix::goodRowsB(int rows)
{
    m_rowsb = rows;
}

void Matrix::goodColsB(int cols)
{
    m_colsb = cols;
}

void Matrix::goodMatrixA(QStringList ma)
{
    QStringListIterator iter(ma);
    m_matrixA = new qreal*[m_colsa];
    for(int i = 0; i < m_colsa; ++i){
        m_matrixA[i] = new qreal[m_rowsa];
        for(int j = 0; j < m_rowsa; ++j){
           if(iter.hasNext()){
              m_matrixA[i][j] = iter.next().toDouble();
              qDebug() << m_matrixA[i][j];
           }
           else{
               m_matrixA[i][j] = 0;
           }
        }
    }
    matrixAFilled = true;
}

void Matrix::goodMatrixB(QStringList mb)
{
    m_matrixB = new qreal*[m_colsb];
    for(int i = 0; i < m_colsb; ++i){
        m_matrixB[i] = new qreal[m_rowsb];
        for(int j = 0; j < m_rowsb; ++j){
            m_matrixB[i][j] = mb.at((i * j) + j).toDouble();
            qDebug() << m_matrixB[i][j];
        }
    }
    matrixBFilled = true;
}

void Matrix::autofillA()
{
   QString temp;
   m_matrixA = new qreal*[m_colsa];
   for(int i = 0; i < m_colsa; ++i){
      m_matrixA[i] = new qreal[m_rowsa];
      for(int j = 0; j < m_rowsa; ++j){
        m_matrixA[i][j] = (double)(qrand() % 200 - 100);
        temp = temp + " " + QString::number(m_matrixA[i][j]);
      }
   }
   matrixAFilled = true;
   emit autoFilledMatrixA(temp);
}

void Matrix::autofillB()
{
   if(matrixBFilled){
       emptyMatrixB();
   }
   for(int i = 0; i < m_colsa; ++i){
      for(int j = 0; j < m_rowsa; ++j){
          m_matrixB[i][j] = (double)(qrand() % 200 - 100);
          qDebug() << m_matrixB[i][j];
      }
   }
   matrixBFilled = true;
   emit autoFilledMatrixB(m_matrixB);
}

void Matrix::sxmSubmitted()
{
   //initialize stuff here
}

void Matrix::mxmSubmitted()
{
    //and here
}
