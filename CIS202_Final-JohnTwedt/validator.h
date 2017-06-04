#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <QMap>
#include <QString>
#include <QRegExp>
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
   QMap<QString,QRegExp> *patternMap;
      //stores the regex patterns for field entry
public:
    explicit Validator(QObject *parent = 0);
    ~Validator();
    QRegExp *pattern() const;
    void setPattern(QRegExp *pattern);
    void setPattern(const QString &pattern);

public slots:
    sxmScalarEdited(const QString &entry);

signals:
    sxmScalarOK();
    sxmRowsOK();
    sxmColsOK();
};

#endif // REGEXPREPO_H
