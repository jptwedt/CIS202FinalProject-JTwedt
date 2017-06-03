#include "regExpRepo.h"

const int MAX_ROWS = 50;
const int MAX_COLS = 50;


RegExpRepo::RegExpRepo(){
    m_pattern = new QRegExp();
    m_pattern->setPatternSyntax(QRegExp::FixedString);
}
RegExpRepo::RegExpRepo::~RegExpRepo()
{
   delete m_pattern;
}

QRegExp *RegExpRepo::pattern() const
{
    return m_pattern;
}

void RegExpRepo::setPattern(QRegExp *pattern)
{
    m_pattern = pattern;
}

void RegExpRepo::setPattern(const QString &pattern)
{
   m_pattern->setPattern(pattern);
}
