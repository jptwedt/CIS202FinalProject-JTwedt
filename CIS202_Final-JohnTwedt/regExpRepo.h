#ifndef REGEXPREPO_H
#define REGEXPREPO_H

#include <QString>
#include <QRegExp>
/*
 * contains patterns for regex
 * this is really just a subclass of QRegExp
 * <~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^^must refactor later
 */

extern const int MAX_ROWS;   //these are just hard-coded in to prevent overloading a computer
extern const int MAX_COLS;

class RegExpRepo {
private:
   QRegExp *m_pattern;
public:
    RegExpRepo();
    ~RegExpRepo();
    QRegExp *pattern() const;
    void setPattern(QRegExp *pattern);
    void setPattern(const QString &pattern);
};

#endif // REGEXPREPO_H
