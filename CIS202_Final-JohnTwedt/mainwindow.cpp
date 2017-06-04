#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   m_textOut = ui->textEditTextOut;
   m_lineEditSxMCols = ui->lineEditSxMCols;
   m_lineEditSxMRows = ui->lineEditSxMRows;
   m_lineEditSxMScalar = ui->lineEditSxMScalar;
   m_lineEditSxMValues = ui->lineEditSxMValues;
   m_lineEditMxMACols = ui->lineEditMxMACols;
   m_lineEditMxMARows = ui->lineEditMxMARows;
   m_lineEditMxMAValues = ui->lineEditMxMAValues;
   m_lineEditMxMBCols = ui->lineEditMxMBCols;
   m_lineEditMxMBRows = ui->lineEditMxMBRows;
   m_lineEditMxMBValues = ui->lineEditMxMBValues;
   m_pushButtonAutofillSxM = ui->pushButtonAutofillSxM;
   m_pushButtonSubmitSxM = ui->pushButtonSubmitSxM;
   m_radioButtonSxM = ui->radioButtonSxM;
   m_radioButtonMxM = ui->radioButtonMxM;
   m_radioButtonAdd = ui->radioButtonAdd;
   m_radioButtonSubtract = ui->radioButtonSubtract;
   m_radioButtonMultiply = ui->radioButtonMultiply;
   m_pushButtonAutofillMxMA = ui->pushButtonAutofillMxMA;
   m_pushButtonAutofillMxMB = ui->pushButtonAutofillMxMB;
   m_pushButtonSubmitMxM = ui->pushButtonSubmitMxM;

   memberNames = this->children();


   validator = new Validator();
   //validator->setPattern("([+-]?[0-9|.]+)");
   tControl = new FlowController();
   QObject::connect(m_radioButtonAdd, SIGNAL(toggled(bool)),tControl,SLOT(addButtonToggled(bool)));
   QObject::connect(m_radioButtonSubtract, SIGNAL(toggled(bool)),tControl,SLOT(subtractButtonToggled(bool)));
   QObject::connect(m_radioButtonMultiply, SIGNAL(toggled(bool)),tControl,SLOT(multiplyButtonToggled(bool)));
   QObject::connect(m_lineEditSxMCols, SIGNAL(editingFinished()),tControl,SLOT(sxmColsEdited()));
   QObject::connect(m_lineEditSxMRows, SIGNAL(editingFinished()),tControl,SLOT(sxmRowsEdited()));
   //QObject::connect(m_lineEditSxMScalar, SIGNAL(editingFinished()),tControl,SLOT(sxmScalarEdited()));
   QObject::connect(tControl, SIGNAL(sxmValsEnabled(bool)),m_lineEditSxMValues,SLOT(setEnabled(bool)));
   QObject::connect(m_lineEditSxMScalar, SIGNAL(textChanged(QString)),validator,SLOT(sxmScalarEdited(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
