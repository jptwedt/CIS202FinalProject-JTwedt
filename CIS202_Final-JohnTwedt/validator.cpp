#include "validator.h"
#include <QDebug>

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

Validator::Validator(QObject *parent){
   patternMap = new QMap<QString, QRegExp>;
}
Validator::~Validator()
{
    patternMap->clear();
    delete patternMap;
}

QRegExp *Validator::pattern() const
{
    //return m_pattern;
}

void Validator::setPattern(QRegExp *pattern)
{
    //m_pattern = pattern;
}

void Validator::setPattern(const QString &pattern)
{
    //m_pattern->setPattern(pattern);
}

Validator::sxmScalarEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
}
