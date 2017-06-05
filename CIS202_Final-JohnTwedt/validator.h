#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <QMap>
#include <QMapIterator>
#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionValidator>
#include <QLineEdit>

/*
 * contains patterns for regex operations
 * performs data validation and parsing of data for handoff to other classes
 *
 */

extern const int MAX_ROWS;   //these are just hard-coded in to prevent ridiculous entries
extern const int MAX_COLS;

class Validator : public QObject{
   Q_OBJECT
private:
   QMap<QString,QRegularExpression*> *patternMap;
      //stores the regex patterns for field entry
   QMap<QString,QRegularExpression*>::iterator place;
   //QMapIterator<QString,QRegularExpression*> place;
public:
    explicit Validator(QObject *parent = 0);
    ~Validator();
    QRegularExpression *getPattern(const QString &fieldName);
    void setPattern(const QString &fieldName, QRegularExpression &pattern);
    void setPattern(const QString &fieldName, const QString &pattern);
    void getFieldNames(const QList<QString> *fieldNames);

public slots:
    sxmScalarEdited(const QString &entry);

signals:
    sxmScalarOK();
    sxmRowsOK();
    sxmColsOK();
};

#endif // REGEXPREPO_H
