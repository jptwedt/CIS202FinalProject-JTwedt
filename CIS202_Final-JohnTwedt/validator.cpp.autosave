#include "validator.h"
#include <QDebug>

Validator::Validator(QObject *parent){
   patternMap = new QMap<QString, QRegularExpression*>;
   place = patternMap->begin();
   dblPrecision = 15;
   floatPrecision = 6;
   addSelected = true;
   subtractSelected = false;
   multiplySelected = false;
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
    floatPrecision = value;
}
/*
void Validator::processChanged()
{
    clearAll();
}
*/
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

void Validator::addToggled(bool toggle)
{
   addSelected = toggle;
   //qDebug() << addSelected << " is value for add in validator.";
}

void Validator::subtractToggled(bool toggle)
{
   subtractSelected = toggle;
   //qDebug() << subtractSelected << " is value for subtract in validator.";
}

void Validator::multiplyToggled(bool toggle)
{
   multiplySelected = toggle;
   //qDebug() << multiplySelected << " is value for multiply in validator.";
}

void Validator::sxmScalarEdited(const QString &entry)
{
   //qDebug() << entry << " has been sent to the validator sxmScalarEdited.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMScalar"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry){
          emit sxmScalarGood(m.captured(0).toDouble());
          emit sxmScalarGood(true);
       }
       else if(entry.isEmpty()){
          emit sxmScalarNoGood("");
          emit sxmScalarGood(false);
       }
       else{
          emit sxmScalarNoGood("invalid scalar entry");
          emit sxmScalarGood(false);
       }
   }
   else{
       emit sxmScalarNoGood("invalid scalar entry");
       emit sxmScalarGood(false);
   }
}

void Validator::sxmRowsEdited(const QString &entry)
{
   //qDebug() << entry << " has been sent to the validator sxmRowsEdited.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMRows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_ROWS){
          emit sxmRowsGood(m.captured(0).toInt());
          emit sxmRowsGood(true);
          //qDebug() << m.captured(0) << " being sent from validator.";
       }
       else if(entry.isEmpty()){
          emit sxmRowsNoGood("");
          emit sxmRowsGood(false);
       }
       else{
          emit sxmRowsNoGood("invalid row entry");
          emit sxmRowsGood(false);
       }
   }
}

void Validator::sxmColsEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMCols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_COLS){
          emit sxmColsGood(m.captured(0).toInt());
          emit sxmColsGood(true);
       }
       else if(entry.isEmpty()){
          emit sxmColsNoGood("");
          emit sxmColsGood(false);
       }
       else{
          emit sxmColsNoGood("invalid column entry");
          emit sxmColsGood(false);
       }
   }
}

void Validator::sxmValsEdited(const QString &entry)
{
   //qDebug() << entry << " has been sent to the validator.";
   //qDebug() << (*patternMap)["lineEditSxMValues"]->pattern() << " is the pattern.";
   QRegularExpressionMatchIterator reIt = (*patternMap)["lineEditSxMValues"]->globalMatch(entry);
   while(reIt.hasNext() && sxmVals.size() <= sxmCols * sxmRows){
      QRegularExpressionMatch m = reIt.next();
      sxmVals << m.captured(0);
   }
   if(sxmVals.count() <= sxmCols * sxmRows && !(sxmVals.isEmpty())){
      emit sxmValsGood(sxmVals);
      emit sxmValsGood(true);
      sxmVals.clear();
   }
   else if(sxmVals.count() > sxmCols * sxmRows){
      emit sxmValsNoGood("too many entries");
      emit sxmValsGood(false);
      sxmVals.clear();
   }
   else{
      emit sxmValsNoGood("invalid scalar entry");
      emit sxmValsGood(false);
      sxmVals.clear();
   }
}

void Validator::mxmARowsEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMRows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_ROWS){
          emit mxmARowsGood(m.captured(0).toInt());
          emit mxmARowsGood(true);
       }
       else if(entry.isEmpty()){
          emit mxmARowsNoGood("");
          emit mxmARowsGood(false);
       }
       else{
          emit mxmARowsNoGood("invalid row entry");
          emit mxmARowsGood(false);
       }
   }
}

void Validator::mxmAColsEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMCols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_COLS){
          emit mxmAColsGood(m.captured(0).toInt());
          emit mxmAColsGood(true);
       }
       else if(entry.isEmpty()){
          emit mxmAColsNoGood("");
          emit mxmAColsGood(false);
       }
       else{
          emit mxmAColsNoGood("invalid row entry");
          emit mxmAColsGood(false);
       }
   }
}

void Validator::mxmAValsEdited(const QString &entry)
{
   //qDebug() << entry << " has been sent to the validator.";
   //qDebug() << (*patternMap)["lineEditSxMValues"]->pattern() << " is the pattern.";
   QRegularExpressionMatchIterator reIt = (*patternMap)["lineEditSxMValues"]->globalMatch(entry);
   while(reIt.hasNext() && mxmAVals.size() <= mxmACols * mxmARows){
      QRegularExpressionMatch m = reIt.next();
      mxmAVals << m.captured(0);
   }
   if(mxmAVals.count() <= mxmACols * mxmARows && !(mxmAVals.isEmpty())){
      emit mxmAValsGood(mxmAVals);
      emit mxmAValsGood(true);
      mxmAVals.clear();
   }
   else if(mxmAVals.count() > mxmACols * mxmARows){
      emit mxmAValsNoGood("too many entries");
      emit mxmAValsGood(false);
      mxmAVals.clear();
   }
   else{
      emit mxmAValsNoGood("invalid scalar entry");
      emit mxmAValsGood(false);
      mxmAVals.clear();
   }
}

void Validator::mxmBRowsEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMRows"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_ROWS){
          emit mxmBRowsGood(m.captured(0).toInt());
          emit mxmBRowsGood(true);
       }
       else if(entry.isEmpty()){
          emit mxmBRowsNoGood("");
          emit mxmBRowsGood(false);
       }
       else{
          emit mxmBRowsNoGood("invalid row entry");
          emit mxmBRowsGood(false);
       }
   }
}

void Validator::mxmBColsEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
   QRegularExpressionMatch m = (*patternMap)["lineEditSxMCols"]->match(entry);
   if(m.hasMatch()){
       //qDebug() << m.captured(0);
       if(m.captured(0) == entry && m.captured(0).toInt() <= constants::MAX_COLS){
          emit mxmBColsGood(m.captured(0).toInt());
          emit mxmBColsGood(true);
       }
       else if(entry.isEmpty()){
          emit mxmBColsNoGood("");
          emit mxmBColsGood(false);
       }
       else{
          emit mxmBColsNoGood("invalid row entry");
          emit mxmBColsGood(false);
       }
   }
}

void Validator::mxmBValsEdited(const QString &entry)
{
   //qDebug() << entry << " has been sent to the validator.";
   //qDebug() << (*patternMap)["lineEditSxMValues"]->pattern() << " is the pattern.";
   QRegularExpressionMatchIterator reIt = (*patternMap)["lineEditSxMValues"]->globalMatch(entry);
   while(reIt.hasNext() && mxmBVals.size() <= mxmBCols * mxmBRows){
      QRegularExpressionMatch m = reIt.next();
      mxmBVals << m.captured(0);
   }
   if(mxmBVals.count() <= mxmBCols * mxmBRows && !(mxmBVals.isEmpty())){
      emit mxmBValsGood(mxmBVals);
      emit mxmBValsGood(true);
      mxmBVals.clear();
   }
   else if(mxmBVals.count() > mxmBCols * mxmBRows){
      emit mxmBValsNoGood("too many entries");
      emit mxmBValsGood(false);
      mxmBVals.clear();
   }
   else{
      emit mxmBValsNoGood("invalid scalar entry");
      emit mxmBValsGood(false);
      mxmBVals.clear();
   }
}
