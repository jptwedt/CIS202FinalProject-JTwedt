#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QLineEdit>
#include <QRegExpValidator>
#include <QRegularExpressionMatch>
#include <QIntValidator>
#include <QtDebug>
//#include "flowcontroller.h"
#include "datahandler.h"
#include "textoutput.h"
#include "matrix.h"
#include "regExpRepo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Ui::MainWindow *ui;
    QTextEdit *m_textOut;
    QLineEdit *m_lineEditSxMCols,*m_lineEditSxMRows,*m_lineEditSxMScalar,*m_lineEditSxMValues,
      *m_lineEditMxMACols,*m_lineEditMxMARows,*m_lineEditMxMAValues,
      *m_lineEditMxMBCols,*m_lineEditMxMBRows,*m_lineEditMxMBValues;
    QPushButton *m_pushButtonAutofillSxM,*m_pushButtonSubmitSxM,
      *m_pushButtonAutofillMxMA,*m_pushButtonAutofillMxMB,*m_pushButtonSubmitMxM;
    QRadioButton *m_radioButtonSxM,*m_radioButtonMxM,*m_radioButtonAdd,*m_radioButtonSubtract,
      *m_radioButtonMultiply;
    double m_sxmScalar;
    int m_sxmRows,m_sxmCols,m_mxmRows,m_msmCols;
    QIntValidator *m_intValidator;
    QRegularExpressionMatch *m_valueParser;
    RegExpRepo *valuesPattern;
    //FlowController *tControl;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
   void on_lineEditSxMScalar_editingFinished();
   void on_lineEditSxMRows_editingFinished();
   void on_lineEditSxMCols_editingFinished();
   void on_lineEditSxMValues_returnPressed();
   void on_pushButtonAutofillSxM_clicked();
   void on_pushButtonSubmitSxM_clicked();
};

#endif // MAINWINDOW_H
