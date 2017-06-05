#include "textoutput.h"

TextOutput::TextOutput(QTextEdit *parent)
{
    content = new QMap<QString,QString>;
}

TextOutput::~TextOutput()
{
    content->clear();
    delete content;
}

const QString TextOutput::getContent(QString &itemName){
    return (*content)[itemName];
}

void TextOutput::listenSxMMatrixRdy(const Matrix &matrix)
{

}

void TextOutput::listenMxMAMatrixRdy(const Matrix &matrixA)
{

}

void TextOutput::listenMxMBMatrixRdy(const Matrix &matrixB)
{

}

void TextOutput::listenSxMScalarRdy(const QString &scalar)
{

}

void TextOutput::formatMatrix(QString memberMatrix, const Matrix &item)
{

}
