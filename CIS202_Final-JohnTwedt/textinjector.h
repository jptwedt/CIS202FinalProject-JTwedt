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

class TextInjector : public QTextEdit {
   Q_OBJECT
private:
   QMap<QString, QString> *content;
   QMap<QString, QString>::iterator place;
   QString m_sxmMatrix,m_mxmMatrixA,m_mxmMatrixB,m_scalar;
   void formatMatrix(QString memberMatrix, const Matrix &item);
public:
   explicit TextInjector(QTextEdit *parent = 0);
   ~TextInjector();
   const QString getContent(QString &itemName);
   void getMemberNames(QList<QString> *memberNames);

public slots:
   void listenSxMMatrixRdy(const QString &sxmMatrix);
   void listenMxMAMatrixRdy(const QString &mxmAMatrix);
   void listenMxMBMatrixRdy(const QString &mxmBmatrix);
   void listenSxMScalarRdy(const QString &scalar);

signals:
   void sendHTML(const QString &text);
   void clearHTML();

};

#endif // TEXTOUTPUT_H
