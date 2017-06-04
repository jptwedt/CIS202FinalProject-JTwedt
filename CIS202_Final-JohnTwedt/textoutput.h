#ifndef TEXTOUTPUT_H
#define TEXTOUTPUT_H

#include <QMap>
#include <QString>
#include <QTextEdit>
/*
 * class for formatting and injecting text into the display
 * stores html text entries for output to QTextEdit item
 */

class TextOutput : public QTextEdit {
   Q_OBJECT
   QMap<QString, QString> *content;
public:
   explicit TextOutput(QTextEdit *parent = 0);
   ~TextOutput();
   const QString getContent(QString &itemName);
public slots:
   void getSxMMatrix(const QString &matrix);
};

#endif // TEXTOUTPUT_H
