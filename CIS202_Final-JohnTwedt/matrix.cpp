#include "matrix.h"

Matrix::Matrix(QObject *parent){
    sxm = true;
    mxm = false;
    add = true;
    subtract = false;
    multiply = false;
    matrixFilled = false;
    matrixAFilled = false;
    matrixBFilled = false;
    matrixRFilled = false;
    m_scalar = 0.0;
    m_rows = 0;
    m_cols = 0;
    m_rowsa = 0;
    m_colsa = 0;
    m_rowsb = 0;
    m_colsb = 0;
    m_rowsr = 0;
    m_colsr = 0;
    t = QTime::currentTime();
    qsrand((uint)t.msec());
}

Matrix::~Matrix(){
    emptyMatrix();
    delete [] m_matrix;
    emptyMatrixA();
    delete [] m_matrixA;
    emptyMatrixB();
    delete [] m_matrixB;
    emptyMatrixR();
    delete [] m_matrixR;
}

void Matrix::emptyMatrix()
{
    for(int i = m_rows - 1; i >= 0; --i){
        delete [] m_matrix[i];
    }
    matrixFilled = false;
}

void Matrix::emptyMatrixA() {
    for(int i = m_rowsa - 1; i >= 0; --i){
        delete [] m_matrixA[i];
    }
    matrixAFilled = false;
}

void Matrix::emptyMatrixB() {
    for(int i = m_rowsb - 1; i >= 0; --i){
        delete [] m_matrixB[i];
    }
    matrixBFilled = false;
}

void Matrix::emptyMatrixR() {
    for(int i = m_rowsr - 1; i >= 0; --i){
        delete [] m_matrixR[i];
    }
    matrixRFilled = false;
}

void Matrix::clearMatrix()
{
    for(int i = m_rows - 1; i >= 0; --i){
        for(int j = m_cols - 1; j >= 0; --j){
            m_matrix[i][j] = 0;
        }
    }
}

void Matrix::clearMatrixA()
{
    for(int i = m_rowsa - 1; i >= 0; --i){
        for(int j = m_colsa - 1; j >= 0; --j){
            m_matrixA[i][j] = 0;
        }
    }
}

void Matrix::clearMatrixB()
{
    for(int i = m_rowsb - 1; i >= 0; --i){
        for(int j = m_colsb - 1; j >= 0; --j){
            m_matrixB[i][j] = 0;
        }
    }
}

void Matrix::clearMatrixR()
{
    for(int i = m_rowsr - 1; i >= 0; --i){
        for(int j = m_colsr - 1; j >= 0; --j){
            m_matrixB[i][j] = 0;
        }
    }
}

void Matrix::sxmToggled(bool toggle)
{
    sxm = toggle;
    if(matrixAFilled){
        emptyMatrixA();
    }
    if(matrixBFilled){
        emptyMatrixB();
    }
    if(matrixRFilled){
        emptyMatrixB();
    }
}

void Matrix::mxmToggled(bool toggle)
{
    mxm = toggle;
    if(matrixAFilled){
        emptyMatrixA();
    }
    if(matrixBFilled){
        emptyMatrixB();
    }
    if(matrixRFilled){
        emptyMatrixB();
    }
}

void Matrix::addToggled(bool toggle)
{
    add = toggle;
    emptyMatrixR();
    emit operationChanged();
}

void Matrix::subtractToggled(bool toggle)
{
    subtract = toggle;
    emptyMatrixR();
    emit operationChanged();
}

void Matrix::multiplyToggled(bool toggle)
{
    multiply = toggle;
    emptyMatrixR();
    emit operationChanged();
}

void Matrix::goodScalar(qreal scalar)
{
    m_scalar = scalar;
}

void Matrix::goodRows(int rows)
{
   m_rows = rows;
}

void Matrix::goodCols(int cols)
{
   m_cols = cols;
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
    qDebug() << m_rowsb << " is rowsb value in matrix";
}

void Matrix::goodColsB(int cols)
{
    m_colsb = cols;
    qDebug() << m_colsb << " is colsb value in matrix";
}

void Matrix::goodMatrix(const QStringList &m)
{
    if(matrixFilled){
        emptyMatrix();
    }
    QStringListIterator iter(m);
    m_matrix = new qreal*[m_rows];
    for(int i = 0; i < m_rows; ++i){
        m_matrix[i] = new qreal[m_cols];
        for(int j = 0; j < m_cols; ++j){
           if(iter.hasNext()){
              m_matrix[i][j] = iter.next().toDouble();
              qDebug() << m_matrix[i][j];
           }
           else{
               m_matrix[i][j] = 0;
           }
        }
    }
    matrixFilled = true;
}

void Matrix::goodMatrixA(const QStringList &ma)
{
    if(matrixAFilled){
        emptyMatrixA();
    }
    QStringListIterator iter(ma);
    m_matrixA = new qreal*[m_rowsa];
    for(int i = 0; i < m_rowsa; ++i){
        m_matrixA[i] = new qreal[m_colsa];
        for(int j = 0; j < m_colsa; ++j){
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

void Matrix::goodMatrixB(const QStringList &mb)
{
   if(matrixBFilled){
       emptyMatrixB();
   }
   QStringListIterator iter(mb);
   m_matrixB = new qreal*[m_rowsb];
   for(int i = 0; i < m_rowsb; ++i){
      m_matrixB[i] = new qreal[m_colsb];
      for(int j = 0; j < m_colsb; ++j){
         if(iter.hasNext()){
            m_matrixB[i][j] = iter.next().toDouble();
            qDebug() << m_matrixB[i][j];
         }
         else{
             m_matrixB[i][j] = 0;
         }
      }
   }
   matrixBFilled = true;
}

void Matrix::autofill()
{
   QString temp;
   if(matrixFilled){
      emptyMatrix();
   }
   m_matrix = new qreal*[m_rows];
   for(int i = 0; i < m_rows; ++i){
      m_matrix[i] = new qreal[m_cols];
      for(int j = 0; j < m_cols; ++j){
         m_matrix[i][j] = (double)(qrand() % 200 - 100);
         temp = temp + " " + QString::number(m_matrix[i][j]);
      }
   }
   matrixFilled = true;
   emit autoFilledMatrix(temp);
}

void Matrix::autofillA()
{
   QString temp;
   if(matrixAFilled){
      emptyMatrixA();
   }
   m_matrixA = new qreal*[m_rowsa];
   for(int i = 0; i < m_rowsa; ++i){
      m_matrixA[i] = new qreal[m_colsa];
      for(int j = 0; j < m_colsa; ++j){
         m_matrixA[i][j] = (double)(qrand() % 20 - 10);
         temp = temp + " " + QString::number(m_matrixA[i][j]);
      }
   }
   matrixAFilled = true;
   emit autoFilledMatrixA(temp);
}

void Matrix::autofillB()
{
   QString temp;
   if(matrixBFilled){
       emptyMatrixB();
   }
   m_matrixB = new qreal*[m_rowsb];
   for(int i = 0; i < m_rowsb; ++i){
      m_matrixB[i] = new qreal[m_colsb];
      for(int j = 0; j < m_colsb; ++j){
        m_matrixB[i][j] = (double)(qrand() % 20 - 10);
        temp = temp + " " + QString::number(m_matrixB[i][j]);
      }
   }
   matrixBFilled = true;
   emit autoFilledMatrixB(temp);
}

void Matrix::sxmSubmitted()
{
   if(matrixRFilled){
       emptyMatrixR();
   }
   matrixRVals.clear();
   if(add){
       for(int i = 0; i < m_rows; ++i){
           for(int j = 0; j < m_cols; ++j){
               m_matrix[i][j] += m_scalar;
               matrixRVals << QString::number(m_matrix[i][j]);
           }
       }
   }
   else if(subtract){
       for(int i = 0; i < m_rows; ++i){
           for(int j = 0; j < m_cols; ++j){
               m_matrix[i][j] -= m_scalar;
               matrixRVals << QString::number(m_matrix[i][j]);
           }
       }
   }
   else if(multiply){
       for(int i = 0; i < m_rows; ++i){
           for(int j = 0; j < m_cols; ++j){
               m_matrix[i][j] *= m_scalar;
               matrixRVals << QString::number(m_matrix[i][j]);
           }
       }
   }
   emit matrixToOutput(m_rows,m_cols,matrixRVals);
}

void Matrix::mxmSubmitted()
{
   if(matrixRFilled){
       emptyMatrixR();
   }
   if(multiply){
      if(m_colsa == m_rowsb){
         m_rowsr = m_rowsa;
         m_colsr = m_colsb;
         m_matrixR = new qreal*[m_rowsr];
         for(int i = 0; i < m_rowsr; ++i){
             m_matrixR[i] = new qreal[m_colsr];
             for(int j = 0; j < m_colsr; ++j){
                 qreal temp = 0;
                 for(int x = 0; x < m_colsa; ++x){
                    temp += (m_matrixA[i][x] * m_matrixB[x][j]);
                 }
                 matrixRVals << QString::number(temp);
             }
         }
      }
      else{
         matrixRVals << "Error:  Matrix A Cols != Matrix B Rows";
      }
   }
   else if(m_rowsa == m_rowsb && m_colsa == m_colsb){
      m_rowsr = m_rowsa;
      m_colsr = m_colsa;
      if(add){
          for(int i = 0; i < m_rowsr; ++i){
              m_matrixR[i] = new qreal[m_colsr];
              for(int j = 0; j < m_colsr; ++j){
                  m_matrixR[i][j] = (m_matrixA[i][j] + m_matrixB[i][j]);
                  matrixRVals << QString::number(m_matrixR[i][j]);
              }
          }
      }
      else if(subtract){
          for(int i = 0; i < m_rowsr; ++i){
              m_matrixR[i] = new qreal[m_colsr];
              for(int j = 0; j < m_colsr; ++j){
                  m_matrixR[i][j] = (m_matrixA[i][j] - m_matrixB[i][j]);
                  matrixRVals << QString::number(m_matrixR[i][j]);
              }
          }
      }
      else{
         matrixRVals << "matrix operation selection error";
      }
   }
   else{
      matrixRVals << "invalid matrix dimensions for operation specified.";
   }
   emit matrixToOutput(m_rowsr,m_colsr,matrixRVals);
   matrixRVals.clear();
}
