#ifndef TEXTOUTPUT_H
#define TEXTOUTPUT_H

#include <QMap>
#include <QString>
#include <QTextEdit>
#include "matrix.h"
/*
 * class for formatting and injecting text into the display
 * stores html text entries for output to QTextEdit item
 */

class TextOutput : public QTextEdit {
   Q_OBJECT
public:
   explicit TextOutput(QTextEdit *parent = 0);
   ~TextOutput();
   const QString getContent(QString &itemName);
public slots:
   void listenSxMMatrixRdy(const Matrix &matrix);
   void listenMxMAMatrixRdy(const Matrix &matrix);
   void listenMxMBMatrixRdy(const Matrix &matrix);
   void listenSxMScalarRdy(const QString &scalar);

private:
   QMap<QString, QString> *content;
   QString sxmMatrix,mxmMatrixA,mxmMatrixB,scalar;
   void formatMatrix(QString memberMatrix, const Matrix &item);
};

#endif // TEXTOUTPUT_H
