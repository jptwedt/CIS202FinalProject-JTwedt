#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QLineEdit>
#include <QList>
#include <QtDebug>
#include "flowcontroller.h"
//#include "datahandler.h"
#include "textoutput.h"
#include "matrix.h"
#include "validator.h"

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
    Validator *validator;
    FlowController *tControl;
    QList<QObject *> memberNames;        //stores the names of ui member items

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

};

#endif // MAINWINDOW_H
