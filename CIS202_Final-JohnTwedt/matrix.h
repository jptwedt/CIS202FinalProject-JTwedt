#ifndef MATRIX_H
#define MATRIX_H

#include <header.hpp>
#include <QtDebug>
#include <QString>
#include <QtGlobal>
#include <QTime>

/*
 * This class is really more of a "layer", in that it handles the operations
 * between the mathematical objects.  It receives after it has been validated,
 * gets a signal to perform operations, then sends the results to the
 * textinjector.
 */

class Matrix : public QObject {
    Q_OBJECT

private:
   qreal **m_matrix, **m_matrixA, **m_matrixB, **m_matrixR, m_scalar;
   int m_rows,m_cols,m_rowsa,m_colsa,m_rowsb,m_colsb, m_rowsr,m_colsr;
   QStringList matrixVals,matrixAVals, matrixBVals, matrixRVals;
   bool add,subtract,multiply,mxm,sxm,matrixFilled,matrixAFilled,matrixBFilled,
      matrixRFilled;
   QTime t;

public:
   explicit Matrix(QObject *parent = 0);                        //default constructor
   ~Matrix();                       //destructor
   void emptyMatrix();
   void emptyMatrixA();
   void emptyMatrixB();
   void emptyMatrixR();
   void clearMatrix();
   void clearMatrixA();
   void clearMatrixB();
   void clearMatrixR();

public slots:
   void sxmToggled(bool toggle);
   void mxmToggled(bool toggle);
   void addToggled(bool toggle);
   void subtractToggled(bool toggle);
   void multiplyToggled(bool toggle);
   void goodScalar(qreal scalar);
   void goodRows(int rows);
   void goodCols(int cols);
   void goodRowsA(int rows);
   void goodColsA(int cols);
   void goodRowsB(int rows);
   void goodColsB(int cols);
   void goodMatrix(const QStringList &m);
   void goodMatrixA(const QStringList &ma);
   void goodMatrixB(const QStringList &mb);
   void autofill();
   void autofillA();
   void autofillB();
   void sxmSubmitted();
   void mxmSubmitted();

signals:
   void matrixToOutput(int,int, const QStringList&);
   void autoFilledMatrix(const QString&);
   void autoFilledMatrixA(const QString&);
   void autoFilledMatrixB(const QString&);
   void operationChanged();
};
#endif // MATRIX_H
