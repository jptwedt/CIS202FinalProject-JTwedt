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

void TextInjector::formatMatrix(char matrixChar, const QString &incMatrix)
{
   if(matrixChar == 'a'){
      m_mxmMatrixA = "";
   }
   else if(matrixChar == 'b'){
      m_mxmMatrixB = "";
   }
   else{
      m_sxmMatrix = ""; //<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~here
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
   QString temp = "<p>Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMRowsError(const QString &msg)
{
   QString name = "lineEditSxMRows";
   QString temp = "<p>Rows: " + msg + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMColsRdy(int cols)
{
   m_sxmCols = cols;
   QString name = "lineEditSxMCols";
   QString temp = "<p>Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMColsError(const QString &msg)
{
   QString name = "lineEditSxMCols";
   QString temp = "<p>Columns: " + msg + "</p>";
   qDebug() << temp << " is in textinjector.";
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenSxMValsRdy(const QStringList &msg)
{
   qDebug() << msg << " in textinjector.";
}

void TextInjector::listenSxMValsError(const QString &msg)
{
   qDebug() << msg << " in textinjector.";
}

void TextInjector::listenMxMARowsRdy(int rows)
{
   m_mxmARows = rows;
   QString name = "lineEditMxMARows";
   QString temp = "<p>Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMARowsError(const QString &msg)
{
   QString name = "lineEditMxMARows";
   QString temp = "<p>Rows: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);

}

void TextInjector::listenMxMAColsRdy(int cols)
{
   m_mxmACols = cols;
   QString name = "lineEditMxMACols";
   QString temp = "<p>Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);

}

void TextInjector::listenMxMAColsError(const QString &msg)
{
   QString name = "lineEditMxMACols";
   QString temp = "<p>Columns: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMAValsRdy(const QStringList &msg)
{

}

void TextInjector::listenMxMAValsError(const QString &msg)
{

}

void TextInjector::listenMxMBRowsRdy(int rows)
{
   m_mxmBRows = rows;
   QString name = "lineEditMxMBRows";
   QString temp = "<p>Rows: " + QString::number(rows) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBRowsError(const QString &msg)
{
   QString name = "lineEditMxMBRows";
   QString temp = "<p>Rows: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBColsRdy(int cols)
{
   m_mxmBCols = cols;
   QString name = "lineEditMxMBCols";
   QString temp = "<p>Columns: " + QString::number(cols) + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBColsError(const QString &msg)
{
   QString name = "lineEditMxMBCols";
   QString temp = "<p>Columns: " + msg + "</p>";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
}

void TextInjector::listenMxMBValsRdy(const QStringList &msg)
{

}

void TextInjector::listenMxMBValsError(const QString &msg)
{

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

