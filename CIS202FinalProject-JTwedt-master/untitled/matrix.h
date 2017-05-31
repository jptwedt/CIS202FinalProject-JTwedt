#ifndef MATRIX_H
#define MATRIX_H

#include <QVector>
#include "matrix.cpp"

class Matrix {
    Private:
      QVector<QVector<qreal> >* m_matrix ;
      int m_rows, m_cols;
    Public:
      Matrix();      //constructor
      Matrix(int rows, int cols);      //constructor
      ~Matrix();     //destructor
      bool isValidOperation(Matrix lhs, Matrix rhs);
         //function will determine whether or not the operation can
         //be carried out using the rules of matrices
      bool isValidOperation(qreal lhs, Matrix rhs);
         //function will determine whether or not the operation can
         //be carried out using the rules of matrices
      void emptyMatrix();
         //clears matrix of entries
      QString printCSV();
         //produces a string with contents in .csv format
friend operator+(Matrix lhs, Matrix rhs){
    //for matrix addition
    if(isValidOperation(lhs,rhs,"add")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
friend operator+(qreal lhs, Matrix rhs){
    //for addition of scalar to matrix
    if(isValidOperation(lhs,rhs,"add")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
friend operator-(Matrix lhs, Matrix rhs){
    //for matrix subtraction
    if(isValidOperation(lhs,rhs,"subtract")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
friend operator-(qreal lhs, Matrix rhs){
    //for subtraction of scalar from matrix
    if(isValidOperation(lhs,rhs,"subtract")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
friend operator*(Matrix lhs, Matrix rhs){
    //for matrix multiplication
    if(isValidOperation(lhs,rhs,"multiply")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
friend operator*(qreal lhs, Matrix rhs){
    //for scalar multiplication of matrix
    if(isValidOperation(lhs,rhs,"multiply")){
        //carry on here
    }
    else{
        std::cout << "invalid operation."
    }
}
};
typedef Matrix* mPtr;
#endif // MATRIX_H
