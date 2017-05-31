#ifndef MATRIX_H
#define MATRIX_H

#include <QVector>
#include <QtDebug>

class Matrix {
private:
   QVector<QVector<qreal> >* m_matrix ;
   int m_rows, m_cols;
 public:
   Matrix();      //constructor
   Matrix(int rows, int cols);      //constructor
   ~Matrix();     //destructor
      //function will determine whether or not the operation can
      //be carried out using the rules of matrices
   void emptyMatrix();
      //clears matrix of entries
   QString printCSV();
      //produces a string with contents in .csv format
   bool isValidOperation(Matrix *rhs);
   bool isValidOperation(qreal rhs);
friend operator+(Matrix lhs, Matrix rhs){
    //for matrix addition
    if(lhs.isValidOperation(&rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
friend operator+(Matrix lhs, qreal rhs){
    //for addition of scalar to matrix
    if(lhs.isValidOperation(rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
friend operator-(Matrix lhs, Matrix rhs){
    //for matrix subtraction
    if(lhs.isValidOperation(&rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
friend operator-(Matrix lhs,qreal rhs){
    //for subtraction of scalar from matrix
    if(lhs.isValidOperation(rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
friend operator*(Matrix lhs, Matrix rhs){
    //for matrix multiplication
    if(lhs.isValidOperation(&rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
friend operator*(Matrix lhs, qreal rhs){
    //for scalar multiplication of matrix
    if(lhs.isValidOperation(rhs)){
        //carry on here
    }
    else{
        qDebug() << "invalid operation.";
    }
}
};
typedef Matrix* mPtr;
#endif // MATRIX_H
