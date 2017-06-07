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
 * performs data validation and parsing of data for handoff to other classes,
 * communicating with all layers as it does so.
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
   bool sxmSubmitEnabled, mxmSubmitEnabled,sxmSelected,mxmSelected,addSelected,
      subtractSelected,multiplySelected;
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
    void addToggled(bool toggle);
    void subtractToggled(bool toggle);
    void multiplyToggled(bool toggle);
    void sxmScalarEdited(const QString &entry);
    void sxmRowsEdited(const QString &entry);
    void sxmColsEdited(const QString &entry);
    void sxmValsEdited(const QString &entry);
    void mxmARowsEdited(const QString &entry);
    void mxmAColsEdited(const QString &entry);
    void mxmAValsEdited(const QString &entry);
    void mxmBRowsEdited(const QString &entry);
    void mxmBColsEdited(const QString &entry);
    void mxmBValsEdited(const QString &entry);
    void mxmSubmitted();
    void sxmSubmitted();

signals:
    void sxmScalarGood(qreal);
    void sxmScalarGood(bool);
    void sxmScalarNoGood(const QString);
    void sxmRowsGood(int);
    void sxmRowsGood(bool);
    void sxmRowsNoGood(QString);
    void sxmColsGood(int);
    void sxmColsGood(bool);
    void sxmColsNoGood(QString);
    void sxmValsGood(QStringList);
    void sxmValsGood(bool);
    void sxmValsNoGood(QString);
    void mxmARowsGood(int);
    void mxmARowsGood(bool);
    void mxmARowsNoGood(QString);
    void mxmAColsGood(int);
    void mxmAColsGood(bool);
    void mxmAColsNoGood(QString);
    void mxmAValsGood(QStringList);
    void mxmAValsGood(bool);
    void mxmAValsNoGood(QString);
    void mxmBRowsGood(int);
    void mxmBRowsGood(bool);
    void mxmBRowsNoGood(QString);
    void mxmBColsGood(int);
    void mxmBColsGood(bool);
    void mxmBColsNoGood(QString);
    void mxmBValsGood(QStringList);
    void mxmBValsGood(bool);
    void mxmBValsNoGood(QString);
    void errorMsg(const QString &msg);
};

#endif // REGEXPREPO_H
