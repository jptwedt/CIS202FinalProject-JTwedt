#include "textinjector.h"
#include <QDebug>

TextInjector::TextInjector(QTextEdit *parent)
{
    content = new QMap<QString,QString>;
    place = content->begin();
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

void TextInjector::listenSxMScalarRdy(const QString &scalar)
{
   m_scalar = scalar;
   QString temp = "<p>Scalar: " + m_scalar + "</p>";
   QString name = "mxmScalar";
   qDebug() << temp;
   (*content)[name] = temp;
   emit clearHTML();
   emit sendHTML((*content)[name]);
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


void TextInjector::formatMatrix(QString memberMatrix, const Matrix &item)
{

}
