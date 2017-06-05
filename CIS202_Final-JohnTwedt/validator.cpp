#include "validator.h"
#include <QDebug>

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

Validator::Validator(QObject *parent){
   patternMap = new QMap<QString, QRegularExpression*>;
   //QMapIterator<QString,QRegularExpression*> temp(*patternMap);
   place = patternMap->begin();
}
Validator::~Validator()
{
    patternMap->clear();
    delete patternMap;
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

void Validator::setPattern(const QString &fieldName, QRegularExpression &pattern)
{
   (*patternMap)[fieldName] = &pattern;
}

void Validator::setPattern(const QString &fieldName, const QString &pattern)
{
   QRegularExpression *temp = new QRegularExpression(pattern);
   (*patternMap)[fieldName] = temp;
}

void Validator::getFieldNames(const QList<QString> *fieldNames)
{
   for(int i = 0; i < fieldNames->count(); ++i){
       QRegularExpression *temp = new QRegularExpression;
       temp->setPattern("");
       (*patternMap)[(*fieldNames)[i]] = temp;
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

Validator::sxmScalarEdited(const QString &entry)
{
   qDebug() << entry << " has been sent to the validator.";
}
