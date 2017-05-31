#include "matrix.h"
#include <QtDebug>

Matrix::Matrix(){
    m_rows = 0;
    m_cols = 0;
}
Matrix::Matrix(int rows, int cols){
   m_rows = rows;
   m_cols = cols;
   /*
   if(m_matrix[0] == 0){
      m_matrix = new QVector<QVector<qreal> >;
   }
   else{
      emptyMatrix();
      m_matrix = new QVector<QVector<qreal> >;
   }
   */
}

Matrix::~Matrix(){
    emptyMatrix();
    delete m_matrix;
}

QString Matrix::printCSV() {
    QString output;
    /*
    for(int i = 0; i < m_cols; i++){
        for(int j = 0; j < m_rows; j++){
            output += (m_matrix->[j].[i] + ",");
        }
        output += '\n';
    }
    */
    return output;
}

bool Matrix::isValidOperation(Matrix *rhs) {
   bool flag = true;
   /*
   if(lhs.size() == 0 || rhs.size() == 0){
      flag = false;
   }
   else if(lhs.size() == rhs.at(0).size())
      flag = true;
   else if(lhs.at(0) == rhs.size()){
      flag = true;
   }
   else{
       flag = false;
   }
   */
   return flag;
}

bool Matrix::isValidOperation(qreal rhs) {
   bool flag = true;
   /*
   if(rhs.size() < 1){
       flag = false;
   }
   else{
       flag = true;
   }
   */
   return flag;
}

void Matrix::emptyMatrix() {
    /*
    for(int i = m_matrix->size(); i >= 0; i--){
        delete m_matrix->[i];
    }
    */
}
