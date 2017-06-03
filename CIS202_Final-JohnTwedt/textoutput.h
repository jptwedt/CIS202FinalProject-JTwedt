#ifndef TEXTOUTPUT_H
#define TEXTOUTPUT_H
#include <QTextEdit>

/*
 * class for formatting and outputting text
 */


class TextOutput : public QTextEdit {
    Q_OBJECT

public:
    TextOutput(QWidget *parent = 0);
};

#endif // TEXTOUTPUT_H
