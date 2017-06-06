#include "matrix.h"

Matrix::Matrix(QObject *parent){
    m_rows = 0;
    m_cols = 0;
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
Matrix::Matrix(const Matrix &rhs)
{
    if(m_rows != 0 || m_cols != 0){
        emptyMatrix();
    }
    else{
        m_rows = rhs.rows();
    }
}

Matrix::~Matrix(){
    emptyMatrix();
    delete [] m_matrix;
}

void Matrix::emptyMatrix() {
    for(int i = m_cols - 1; i >= 0; --i){
        delete [] m_matrix[i];
    }
    m_rows = 0;
    m_cols = 0;
}

void Matrix::clearMatrix()
{
    for(int i = m_cols - 1; i >= 0; --i){
        for(int j = m_rows - 1; j >= 0; --j){
            m_matrix[i][j] = 0;
        }
    }
}
int Matrix::rows() const
{
    return m_rows;
}

void Matrix::setRows(int rows)
{
    m_rows = rows;
}

int Matrix::cols() const
{
    return m_cols;
}

void Matrix::setCols(int cols)
{
    m_cols = cols;
}

qreal **Matrix::matrix() const
{
    return m_matrix;
}

void Matrix::goodScalar(qreal newScalar)
{
   m_scalar = newScalar;
   qDebug() << QString::number(m_scalar) << "is inside matrix";
   emit scalarToFormat(QString::number(m_scalar));
}
