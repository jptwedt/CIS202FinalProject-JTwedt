#include "textoutput.h"

TextOutput::TextOutput(QTextEdit *parent)
{
    content = new QMap<QString,QString>;
    place = content->begin();
}

TextOutput::~TextOutput()
{
    content->clear();
    delete content;
}

const QString TextOutput::getContent(QString &itemName){
    return (*content)[itemName];
}

void TextOutput::getMemberNames(QList<QString> *memberNames)
{
    for(int i = 0; i < memberNames->count(); ++i){
        (*content)[(*memberNames)[i]] = "";
    }
    place = content->begin();
    while(place != content->end()){
       qDebug() <<  place.key() << " : " << place.value() << " from textoutput.";
       place++;
    }
}

void TextOutput::listenSxMMatrixRdy(const QString &sxmMatrix)
{

}

void TextOutput::listenMxMAMatrixRdy(const QString &mxmAMatrix)
{

}

void TextOutput::listenMxMBMatrixRdy(const QString &mxmBmatrix)
{

}

void TextOutput::listenSxMScalarRdy(const QString &scalar)
{

}

void TextOutput::formatMatrix(QString memberMatrix, const Matrix &item)
{

}
