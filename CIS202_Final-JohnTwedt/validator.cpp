#include "validator.h"
#include <QDebug>

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

///////////////////////////////////////////SLOTS/////////////////

Validator::sxmScalarEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMScalar"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmScalarGood(m.captured(0).toDouble());
       }
       else if(entry.isEmpty()){
          emit sxmScalarNoGood("");
       }
       else{
           emit sxmScalarNoGood("invalid scalar entry");
       }
   }
}

Validator::sxmRowsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMRows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmRowsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmRowsNoGood("");
       }
       else{
           emit sxmRowsNoGood("invalid row entry");
       }
   }
}

Validator::sxmColsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMCols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmColsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmColsNoGood("");
       }
       else{
           emit sxmColsNoGood("invalid column entry");
       }
   }
}

Validator::sxmValsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMVals"]->match(entry);
   if(m.capturedLength() <= constants::MAX_ROWS * constants::MAX_COLS
           && m.capturedLength() <= sxmCols * sxmRows){
      sxmVals = m.capturedTexts();
      if(m.hasMatch()){
          //qDebug() << m.captured(0);
          emit sxmValsGood(sxmVals);
      }
      else if(entry.isEmpty()){
         emit sxmValsNoGood("");
      }
      else{
          emit sxmValsNoGood("invalid scalar entry");
      }
   }
   else{
          emit sxmValsNoGood("too many entries");
   }
}


Validator::mxmARowsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMARows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmRowsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmRowsNoGood("");
       }
       else{
           emit sxmRowsNoGood("invalid row entry");
       }
   }
}

Validator::mxmAColsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMACols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmColsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmColsNoGood("");
       }
       else{
           emit sxmColsNoGood("invalid column entry");
       }
   }
}

Validator::mxmAValsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMAVals"]->match(entry);
   if(m.capturedLength() <= constants::MAX_ROWS * constants::MAX_COLS
           && m.capturedLength() <= sxmCols * sxmRows){
      sxmVals = m.capturedTexts();
      if(m.hasMatch()){
          //qDebug() << m.captured(0);
          emit sxmValsGood(sxmVals);
      }
      else if(entry.isEmpty()){
         emit sxmValsNoGood("");
      }
      else{
          emit sxmValsNoGood("invalid scalar entry");
      }
   }
   else{
          emit sxmValsNoGood("too many entries");
   }
}

Validator::mxmBRowsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMBRows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmRowsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmRowsNoGood("");
       }
       else{
           emit sxmRowsNoGood("invalid row entry");
       }
   }
}

Validator::mxmBColsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMACols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmColsGood(m.captured(0).toInt());
       }
       else if(entry.isEmpty()){
          emit sxmColsNoGood("");
       }
       else{
           emit sxmColsNoGood("invalid column entry");
       }
   }
}

Validator::mxmBValsEdited(const QString &entry)
{
   QRegularExpressionMatch m = (*patternMap)["lineEditMxMBVals"]->match(entry);
   if(m.capturedLength() <= constants::MAX_ROWS * constants::MAX_COLS
           && m.capturedLength() <= sxmCols * sxmRows){
      sxmVals = m.capturedTexts();
      if(m.hasMatch()){
          //qDebug() << m.captured(0);
          emit sxmValsGood(sxmVals);
      }
      else if(entry.isEmpty()){
         emit sxmValsNoGood("");
      }
      else{
          emit sxmValsNoGood("invalid scalar entry");
      }
   }
   else{
          emit sxmValsNoGood("too many entries");
   }
}

Validator::sxmSubmitted()
{

}

Validator::mxmSubmitted()
{

}
