#include "matrix.h"
#include <QtDebug>

Matrix::Matrix(){
    m_matrix->NULL;
    m_rows = 0;
    m_cols = 0;
}

Matrix::~Matrix(){
    emptyMatrix();
    delete NULL;
    delete m_matrix;
}

QString Matrix::printCSV()
{
    QString output;
    for(int i = 0; i < m_cols; i++){
        for(int j = 0; j < m_rows; j++){
            output += (m_matrix[j][i] + ",");
        }
        ouput += '\n';
    }
}

Matrix::Matrix(int rows, int cols){
   m_rows = rows;
   m_cols = cols;
   if(m_matrix->NULL){
      m_matrix = new QVector<QVector<qreal> >;
      for(int i = 0; i < m_rows; i++){
          m_matrix[i] = new QVector<qreal>;
   }
   else{
      emptyMatrix();
      m_matrix = new QVector<QVector<qreal> >;
      for(int i = 0; i < m_rows; i++){
          m_matrix[i] = new QVector<qreal>;
   }
}

bool Matrix::isValidOperation(Matrix lhs, Matrix rhs) {
   bool flag;
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
   return flag;
}

bool Matrix::isValidOperation(qreal lhs, Matrix rhs) {
   bool flag;
   if(rhs.size() < 1){
       flag = false;
   }
   else{
       flag = true;
   }
   return flag;
}

void Matrix::emptyMatrix() {
    for(int i = m_matrix->size(); i >= 0; i--){
        delete m_matrix[i];
    }
    m_matrix->NULL;
}
