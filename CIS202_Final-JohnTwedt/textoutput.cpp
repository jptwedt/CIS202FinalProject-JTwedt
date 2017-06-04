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

void TextOutput::getSxMMatrix(const QString &matrix){

}
