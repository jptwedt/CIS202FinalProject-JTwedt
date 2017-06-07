#ifndef TEXTOUTPUT_H
#define TEXTOUTPUT_H

#include <header.hpp>
#include <QMap>
#include <QString>
#include <QTextEdit>
#include "matrix.h"

/*
 * class for formatting and injecting text into the display
 * stores html text entries for output to QTextEdit item
 *
 * The class should display incoming entries (with feedback),
 * then submitted entries with corresponding results.
 */

class TextInjector : public QTextEdit {
   Q_OBJECT
private:
   QMap<QString, QString> *content;
   QMap<QString, QString>::iterator place;
   QString m_sxmMatrix,m_mxmMatrixA,m_mxmMatrixB,m_scalar;
   void formatMatrix(char matrixChar, const QString &incMatrix);
   int m_sxmRows,m_sxmCols,m_mxmARows,m_mxmACols,m_mxmBRows,m_mxmBCols;
   bool m_sxm,m_mxm;
public:
   explicit TextInjector(QTextEdit *parent = 0);
   ~TextInjector();
   const QString getContent(QString &itemName);
   void getMemberNames(QList<QString> *memberNames);

public slots:
   void listenSxMToggled(bool toggle);    //comes from tcontrol
   void listenMxMToggled(bool toggle);    //comes from tcontrol
   void listenSxMScalarRdy(qreal scalar); //comes from validator
   void listenSxMScalarError(const QString &msg); //comes from validator
   void listenSxMRowsRdy(int rows);   //comes from validator
   void listenSxMRowsError(const QString &msg);    //comes from validator
   void listenSxMColsRdy(int cols);   //comes from validator
   void listenSxMColsError(const QString &msg);    //comes from validator
   void listenSxMValsRdy(const QStringList &msg);   //comes from validator
   void listenSxMValsError(const QString &msg);   //comes from validator
   void listenMxMARowsRdy(int rows);   //comes from validator
   void listenMxMARowsError(const QString &msg);    //comes from validator
   void listenMxMAColsRdy(int cols);   //comes from validator
   void listenMxMAColsError(const QString &msg);    //comes from validator
   void listenMxMAValsRdy(const QStringList &msg);   //comes from validator
   void listenMxMAValsError(const QString &msg);   //comes from validator
   void listenMxMBRowsRdy(int rows);   //comes from validator
   void listenMxMBRowsError(const QString &msg);    //comes from validator
   void listenMxMBColsRdy(int cols);   //comes from validator
   void listenMxMBColsError(const QString &msg);    //comes from validator
   void listenMxMBValsRdy(const QStringList &msg);   //comes from validator
   void listenMxMBValsError(const QString &msg);   //comes from validator
   void listenSxMMatrixRdy(const QString &sxmMatrix); //comes from matrix
   void listenMxMAMatrixRdy(const QString &mxmAMatrix); //comes from matrix
   void listenMxMBMatrixRdy(const QString &mxmBmatrix); //comes from matrix

signals:
   void sendHTML(const QString &text);
   void clearHTML();

};

#endif // TEXTOUTPUT_H
