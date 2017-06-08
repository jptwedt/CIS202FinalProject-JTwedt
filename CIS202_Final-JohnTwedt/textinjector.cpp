#include "textinjector.h"
#include <QDebug>

TextInjector::TextInjector(QTextEdit *parent)
{
    content = new QMap<QString,QString>;
    place = content->begin();
    m_sxm = true;
    m_mxm = false;
}

TextInjector::~TextInjector()
{
    content->clear();
    delete content;
}

const QString TextInjector::getContent(QString &itemName){
    return (*content)[itemName];
}

void TextInjector::getMemberNames(QList<QString> *memberNames)
{
    for(int i = 0; i < memberNames->count(); ++i){
        (*content)[(*memberNames)[i]] = "";
    }
    /*
    place = content->begin();
    while(place != content->end()){
       qDebug() <<  place.key() << " : " << place.value() << " from textoutput.";
       place++;
    }
    */
}

void TextInjector::formatMatrix(char matrixChar, const QStringList &incMatrix)
{
   if(matrixChar == 'a'){
      m_mxmMatrixA << "<p>Matrix A:";
      m_mxmMatrixA << "<table>";
      QStringListIterator sIter(incMatrix);
      for(int i = 0; i < m_mxmARows; ++i){
          m_mxmMatrixA << "<tr>";
          for(int j = 0; j < m_mxmACols; ++j){
             if(sIter.hasNext()){
                 m_mxmMatrixA << "<td style=\"width:5%\">" << sIter.next() << "</td>";
             }
             else{
                 m_mxmMatrixA << "<td style=\"width:5%\">0</td> ";
             }
          }
          m_mxmMatrixA << "</tr>";
      }
      m_mxmMatrixA << "</table>";
      m_mxmMatrixA << "</p>";
      QString temp = m_mxmMatrixA.join("");
      emit clearHTML();
      emit sendHTML(temp);
      m_mxmMatrixA.clear();
   }
   else if(matrixChar == 'b'){
      m_mxmMatrixB << "<p>Matrix B:";
      m_mxmMatrixB << "<table>";
      QStringListIterator sIter(incMatrix);
      for(int i = 0; i < m_mxmBRows; ++i){
          m_mxmMatrixB << "<tr>";
          for(int j = 0; j < m_mxmBCols; ++j){
             if(sIter.hasNext()){
                 m_mxmMatrixB << "<td style=\"width:5%\">" << sIter.next() << "</td>";
             }
             else{
                 m_mxmMatrixB << "<td style=\"width:5%\">0</td>";
             }
          }
          m_mxmMatrixB << "</tr>";
      }
      m_mxmMatrixB << "</table>";
      m_mxmMatrixB << "</p>";
      QString temp = m_mxmMatrixB.join("");
      emit clearHTML();
      emit sendHTML(temp);
      m_mxmMatrixB.clear();
   }
   else if(matrixChar == 's'){
      m_sxmMatrix << "<p>Matrix:";
      m_sxmMatrix << "<table style=\"align:left;\">";
      QStringListIterator sIter(incMatrix);
      for(int i = 0; i < m_sxmRows; ++i){
          m_sxmMatrix << "<tr>";
          for(int j = 0; j < m_sxmCols; ++j){
             if(sIter.hasNext()){
                 m_sxmMatrix << "<td style=\"width:5%;\">" << sIter.next() << "</td>";
             }
             else{
                 m_sxmMatrix << "<td style=\"width:5%;\">0</td> ";
             }
          }
          m_sxmMatrix << "</tr>";
      }
      m_sxmMatrix << "</table>";
      m_sxmMatrix << "</p>";
      QString temp = m_sxmMatrix.join("");
      emit clearHTML();
      emit sendHTML(temp);
      m_sxmMatrix.clear();
   }
   else{
      m_rMatrix << "<hr />";
      m_rMatrix << "<p>Result Matrix:";
      m_rMatrix << "<table style=\"align:left;\">";
      QStringListIterator sIter(incMatrix);
      for(int i = 0; i < m_rRows; ++i){
          m_rMatrix << "<tr>";
          for(int j = 0; j < m_rCols; ++j){
             if(sIter.hasNext()){
                 m_rMatrix << "<td style=\"width:5%;\">" << sIter.next() << "</td>";
             }
             else{
                 m_rMatrix << "<td style=\"width:5%;\">0</td> ";
             }
          }
          m_rMatrix << "</tr>";
      }
      m_rMatrix << "</table>";
      m_rMatrix << "</p>";
      QString temp = m_rMatrix.join("");
      emit clearHTML();
      emit sendHTML(temp);
      m_rMatrix.clear();
   }
}
////////////////////////////////////////SLOTS///////////////////////////////
void TextInjector::listenSxMToggled(bool toggle)
{
    m_sxm = toggle;
}

void TextInjector::listenMxMToggled(bool toggle)
{
   m_mxm = toggle;
}

void TextInjector::listenSxMScalarRdy(qreal scalar)
{
   m_scalar = scalar;
   QString name = "lineEditMxMScalar";
   QString temp = "<p>Scalar: " + QString::number(scalar) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMScalarError(const QString &msg)
{
   QString name = "lineEditSxMScalar";
   QString temp = "<p>Scalar: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMRowsRdy(int rows)
{
   m_sxmRows = rows;
   QString name = "lineEditSxMRows";
   QString temp = "<p>Matrix Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMRowsError(const QString &msg)
{
   QString name = "lineEditSxMRows";
   QString temp = "<p>Matrix Rows: " + msg + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMColsRdy(int cols)
{
   m_sxmCols = cols;
   QString name = "lineEditSxMCols";
   QString temp = "<p>Matrix Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMColsError(const QString &msg)
{
   QString name = "lineEditSxMCols";
   QString temp = "<p>Matrix Columns: " + msg + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMValsRdy(const QStringList &msg)
{
   formatMatrix('s',msg);
}

void TextInjector::listenSxMValsError(const QString &msg)
{
   qDebug() << msg << " in textinjector.";
}

void TextInjector::listenMxMARowsRdy(int rows)
{
   m_mxmARows = rows;
   QString name = "lineEditMxMARows";
   QString temp = "<p>Matrix A Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMARowsError(const QString &msg)
{
   QString name = "lineEditMxMARows";
   QString temp = "<p>Matrix A Rows: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);

}

void TextInjector::listenMxMAColsRdy(int cols)
{
   m_mxmACols = cols;
   QString name = "lineEditMxMACols";
   QString temp = "<p>Matrix A Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);

}

void TextInjector::listenMxMAColsError(const QString &msg)
{
   QString name = "lineEditMxMACols";
   QString temp = "<p>Matrix A Columns: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMAValsRdy(const QStringList &msg)
{
   formatMatrix('a',msg);
}

void TextInjector::listenMxMAValsError(const QString &msg)
{

}

void TextInjector::listenMxMBRowsRdy(int rows)
{
   m_mxmBRows = rows;
   QString name = "lineEditMxMBRows";
   QString temp = "<p>Matrix B Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBRowsError(const QString &msg)
{
   QString name = "lineEditMxMBRows";
   QString temp = "<p>Matrix B Rows: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBColsRdy(int cols)
{
   m_mxmBCols = cols;
   QString name = "lineEditMxMBCols";
   QString temp = "<p>Matrix B Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBColsError(const QString &msg)
{
   QString name = "lineEditMxMBCols";
   QString temp = "<p>Matrix B Columns: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBValsRdy(const QStringList &msg)
{
   formatMatrix('b',msg);
}

void TextInjector::listenMxMBValsError(const QString &msg)
{
   QString temp = "Matrix B Values: " + msg;
   emit clearHTML();
   emit sendHTML(temp);
}

void TextInjector::listenSxMMatrixRdy(const QString &sxmMatrix)
{

}

void TextInjector::listenMxMAMatrixRdy(const QString &mxmAMatrix)
{

}

void TextInjector::listenMxMBMatrixRdy(const QString &mxmBmatrix)
{

}

void TextInjector::listenMatrixResult(int rows, int cols, const QStringList &rMatrix)
{
   m_rRows = rows;
   m_rCols = cols;
   formatMatrix('r',rMatrix);
}

