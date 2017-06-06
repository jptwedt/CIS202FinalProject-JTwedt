#ifndef MATRIX_H
#define MATRIX_H

#include <QtDebug>
#include <QString>
#include <QtGlobal>
#include <QTime>

class Matrix : public QObject {
    Q_OBJECT

private:
   qreal **m_matrixA, **m_matrixB;
   int m_rowsa,m_colsa,m_rowsb,m_colsb;
   qreal m_scalar;
   QString matrixAVals, matrixBVals;
   bool add,subtract,multiply;
   QTime t;

public:
   explicit Matrix(QObject *parent = 0);                        //default constructor
   //explicit Matrix(QObject *parent = 0,int rows, int cols);      //constructor
   ~Matrix();                       //destructor
   void emptyMatrixA();
   void emptyMatrixB();
   void clearMatrixA();
   void clearMatrixB();
   int rowsA() const;
   int rowsB() const;
   void setRowsA(int rows);
   void setRowsB(int rows);
   int colsA() const;
   int colsB() const;
   void setColsA(int cols);
   void setColsB(int cols);
   qreal **matrixA() const;
   qreal **matrixB() const;

public slots:
   void addToggled(bool toggle);
   void subtractToggled(bool toggle);
   void multiplyToggled(bool toggle);
   void goodScalar(qreal newScalar);
   void goodMatrixA(const QString &ma);
   void goodMatrixB(const QString &mb);
   void autofillA();
   void autofillB();
   void sxmSubmitted();
   void mxmSubmitted();

signals:
   void scalarToFormat(const QString &output);
   void matrixToFormat(const QString &output);
   void matrixAToFormat(const QString &output);
   void matrixBToFormat(const QString &output);
};
#endif // MATRIX_H
