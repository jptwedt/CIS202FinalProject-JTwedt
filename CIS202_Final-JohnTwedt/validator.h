#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <header.hpp>
#include <QMap>
#include <QMapIterator>
#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionValidator>
#include <QLineEdit>
#include "matrix.h"
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
   int dblPrecision,floatPrecision,sxmRows,sxmCols,mxmARows,mxmACols,mxmBRows,mxmBCols;
   bool sxmSubmitEnabled, mxmSubmitEnabled, sxmSelected,mxmSelected;
   QStringList sxmVals, mxmAVals, mxmBVals;
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
    sxmRowsEdited(const QString &entry);
    sxmColsEdited(const QString &entry);
    sxmValsEdited(const QString &entry);
    mxmARowsEdited(const QString &entry);
    mxmAColsEdited(const QString &entry);
    mxmAValsEdited(const QString &entry);
    mxmBRowsEdited(const QString &entry);
    mxmBColsEdited(const QString &entry);
    mxmBValsEdited(const QString &entry);
    mxmSubmitted();
    sxmSubmitted();

signals:
    void sxmScalarGood(qreal);
    void sxmScalarNoGood(const QString);
    void sxmRowsGood(int);
    void sxmRowsNoGood(QString);
    void sxmColsGood(int);
    void sxmColsNoGood(QString);
    void sxmValsGood(QStringList);
    void sxmValsNoGood(QString);
    void mxmARowsGood(int);
    void mxmARowsNoGood(QString);
    void mxmAColsGood(int);
    void mxmAColsNoGood(QString);
    void mxmAValsGood(QStringList);
    void mxmAValsNoGood(QString);
    void mxmBRowsGood(int);
    void mxmBRowsNoGood(QString);
    void mxmBColsGood(int);
    void mxmBColsNoGood(QString);
    void mxmBValsGood(QStringList);
    void mxmBValsNoGood(QString);
    void errorMsg(const QString &msg);
};

#endif // REGEXPREPO_H
