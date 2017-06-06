#ifndef MATRIX_H
#define MATRIX_H

#include <QtGlobal>

#include <QtDebug>

class Matrix : public QObject {
    Q_OBJECT
private:
   qreal** m_matrix;
   int m_rows, m_cols;
   qreal m_scalar;
public:
   explicit Matrix(QObject *parent = 0);                        //default constructor
   //explicit Matrix(QObject *parent = 0,int rows, int cols);      //constructor
   Matrix(const Matrix &rhs);       //copy constructor
   ~Matrix();                       //destructor
   void emptyMatrix();
   void clearMatrix();
   int rows() const;
   void setRows(int rows);
   int cols() const;
   void setCols(int cols);
   qreal **matrix() const;

public slots:
   void goodScalar(qreal newScalar);

signals:
   void scalarToFormat(const QString &output);
};
typedef Matrix* mPtr;
#endif // MATRIX_H
