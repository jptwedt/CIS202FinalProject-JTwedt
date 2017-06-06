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
   int dblPrecision;
   int floatPrecision;
public:
    explicit Validator(QObject *parent = 0);
    ~Validator();
    QRegularExpression *getPattern(const QString &fieldName);
    void setFieldPattern(const QString &fieldName, QRegularExpression &pattern);
    void setFieldPattern(const QString &fieldName, const QString &pattern);
    void getFieldNames(const QList<QString> *fieldNames);

    int getDblPrecision() const;
    void setDblPrecision(int value);

    int getFloatPrecision() const;
    void setFloatPrecision(int value);

public slots:
    sxmScalarEdited(const QString &entry);

signals:
    void sxmScalarGood(qreal);
    void sxmRowsOK();
    void sxmColsOK();
};

#endif // REGEXPREPO_H
