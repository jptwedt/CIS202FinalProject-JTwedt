#ifndef MATRIX_H
#define MATRIX_H

#include <QtGlobal>

#include <QtDebug>

class Matrix {
private:
   qreal** m_matrix;
   int m_rows, m_cols;
public:
   Matrix();                        //default constructor
   Matrix(int rows, int cols);      //constructor
   Matrix(const Matrix &rhs);       //copy constructor
   ~Matrix();                       //destructor
   void emptyMatrix();
   void clearMatrix();
   int rows() const;
   void setRows(int rows);
   int cols() const;
   void setCols(int cols);
   qreal **matrix() const;
};
typedef Matrix* mPtr;
#endif // MATRIX_H
