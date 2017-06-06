#include "validator.h"
#include <QDebug>

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

Validator::Validator(QObject *parent){
   patternMap = new QMap<QString, QRegularExpression*>;
   place = patternMap->begin();
   dblPrecision = 15;
   floatPrecision = 6;
}
Validator::~Validator()
{
    patternMap->clear();
    delete patternMap;
}
int Validator::getDblPrecision() const
{
    return dblPrecision;
}

void Validator::setDblPrecision(int value)
{
    dblPrecision = value;
    QString temp = QString::number(dblPrecision);
    QString patternString = "(\\d){0," + temp + "}";
    QString fieldName = "dblPrecision";
    setFieldPattern(fieldName,patternString);
    place = (*patternMap).find(fieldName);
    qDebug() << place.value()->pattern();
}

int Validator::getFloatPrecision() const
{
    return floatPrecision;
}

void Validator::setFloatPrecision(int value)
{
    floatPrecision = value;
    QString temp = QString::number(floatPrecision);
    QString patternString = "(\\d){0," + temp + "}";
    QString fieldName = "floatPrecision";
    setFieldPattern(fieldName,patternString);
    place = (*patternMap).find(fieldName);
    qDebug() << place.value()->pattern();
    floatPrecision = value;
}


QRegularExpression* Validator::getPattern(const QString &fieldName)
{
   place = patternMap->find(fieldName);
   QRegularExpression *result;
   if(place == patternMap->end()){
       result->setPattern("pattern not found");
   }
   else{
       result = place.value();
   }
   return result;
}

void Validator::setFieldPattern(const QString &fieldName, QRegularExpression &pattern)
{
   place = patternMap->find(fieldName);
   if(place == patternMap->end()){
       (*patternMap)[fieldName] = &pattern;
   }
   else{
       place.value() = &pattern;
   }
}

void Validator::setFieldPattern(const QString &fieldName, const QString &pattern)
{
   place = patternMap->find(fieldName);
   if(place == patternMap->end()){
      (*patternMap)[fieldName] = new QRegularExpression(pattern);
   }
   else{
      place.value()->setPattern(pattern);
   }
   place = patternMap->begin();
   if(place != patternMap->end()){
      do{
          qDebug() << place.key() << " : " << place.value()->pattern();
          place++;
      }while(place != patternMap->end());
   }
   else{
           qDebug() << "empty fieldname list";
       }
}

void Validator::getFieldNames(const QList<QString> *fieldNames)
{
   for(int i = 0; i < fieldNames->count(); ++i){
       QRegularExpression *temp = new QRegularExpression;
       temp->setPattern("");
       (*patternMap)[(*fieldNames)[i]] = temp;
   }
}

Validator::sxmScalarEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMScalar"]->match(entry);
   if(m.hasMatch()){
       qDebug() << m.captured(0);
       emit sxmScalarGood(m.captured(0).toDouble());
   }
}

Validator::sxmRowsEdited(const QString &entry)
{

}

Validator::sxmColsEdited(const QString &entry)
{

}

Validator::sxmValsEdited(const QString &entry)
{

}

Validator::sxmSubmitted()
{

}

Validator::mxmARowsEdited(const QString &entry)
{

}

Validator::mxmAColsEdited(const QString &entry)
{

}

Validator::mxmAValsEdited(const QString &entry)
{

}

Validator::mxmBRowsEdited(const QString &entry)
{

}

Validator::mxmBColsEdited(const QString &entry)
{

}

Validator::mxmBValsEdited(const QString &entry)
{

}

Validator::mxmSubmitted()
{

}
