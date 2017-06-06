#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   memberNames = new QList<QString>;
   fieldNames = new QList<QString>;
   m_textOut = ui->textEditTextOut;
   memberNames->append("textEditTextOut");
   m_lineEditSxMCols = ui->lineEditSxMCols;
   memberNames->append("lineEditSxMCols");
   fieldNames->append("lineEditSxMCols");
   m_lineEditSxMRows = ui->lineEditSxMRows;
   memberNames->append("lineEditSxMRows");
   fieldNames->append("lineEditSxMRows");
   m_lineEditSxMScalar = ui->lineEditSxMScalar;
   memberNames->append("lineEditSxMScalar");
   fieldNames->append("lineEditSxMScalar");
   m_lineEditSxMValues = ui->lineEditSxMValues;
   memberNames->append("lineEditSxMValues");
   fieldNames->append("lineEditSxMValues");
   m_lineEditMxMACols = ui->lineEditMxMACols;
   memberNames->append("lineEditMxMACols");
   fieldNames->append("lineEditMxMACols");
   m_lineEditMxMARows = ui->lineEditMxMARows;
   memberNames->append("lineEditMxMARows");
   fieldNames->append("lineEditMxMARows");
   m_lineEditMxMAValues = ui->lineEditMxMAValues;
   memberNames->append("lineEditMxMAValues");
   fieldNames->append("lineEditMxMAValues");
   m_lineEditMxMBCols = ui->lineEditMxMBCols;
   memberNames->append("lineEditMxMBCols");
   fieldNames->append("lineEditMxMBCols");
   m_lineEditMxMBRows = ui->lineEditMxMBRows;
   memberNames->append("lineEditMxMBRows");
   fieldNames->append("lineEditMxMBRows");
   m_lineEditMxMBValues = ui->lineEditMxMBValues;
   memberNames->append("lineEditMxMBValues");
   fieldNames->append("lineEditMxMBValues");
   m_pushButtonAutofillSxM = ui->pushButtonAutofillSxM;
   memberNames->append("pushButtonAutoFillSxM");
   m_pushButtonSubmitSxM = ui->pushButtonSubmitSxM;
   memberNames->append("pushButtonSubmitSxM");
   m_radioButtonSxM = ui->radioButtonSxM;
   memberNames->append("radioButtonSxM");
   m_radioButtonMxM = ui->radioButtonMxM;
   memberNames->append("radioButtonMxM");
   m_radioButtonAdd = ui->radioButtonAdd;
   memberNames->append("radioButtonAdd");
   m_radioButtonSubtract = ui->radioButtonSubtract;
   memberNames->append("radioButtonSubtract");
   m_radioButtonMultiply = ui->radioButtonMultiply;
   memberNames->append("radioButtonMultiply");
   m_pushButtonAutofillMxMA = ui->pushButtonAutofillMxMA;
   memberNames->append("pushButtonAutofillMxMA");
   m_pushButtonAutofillMxMB = ui->pushButtonAutofillMxMB;
   memberNames->append("pushButtonAutofillMxMB");
   m_pushButtonSubmitMxM = ui->pushButtonSubmitMxM;
   memberNames->append("pushButtonSubmitMxM");

   textInjector = new TextOutput;
   textInjector->getMemberNames(memberNames);

   m_sxmMatrix = new Matrix;
   m_mxmMatrixA = new Matrix;
   m_mxmMatrixB = new Matrix;

   validator = new Validator();
   validator->getFieldNames(fieldNames);
   validator->setFieldPattern("lineEditSxMScalar","[+|-]?(0|[1-9][\\d]{0,15})(\\.)?([0-9]){0,15}");
   validator->setDblPrecision(15);
   validator->setFloatPrecision(6);
   tControl = new FlowController();

   QObject::connect(m_radioButtonAdd, SIGNAL(toggled(bool)),tControl,SLOT(addButtonToggled(bool)));
   QObject::connect(m_radioButtonSubtract, SIGNAL(toggled(bool)),tControl,SLOT(subtractButtonToggled(bool)));
   QObject::connect(m_radioButtonMultiply, SIGNAL(toggled(bool)),tControl,SLOT(multiplyButtonToggled(bool)));
   QObject::connect(m_lineEditSxMCols, SIGNAL(editingFinished()),tControl,SLOT(sxmColsEdited()));
   QObject::connect(m_lineEditSxMRows, SIGNAL(editingFinished()),tControl,SLOT(sxmRowsEdited()));
   //QObject::connect(m_lineEditSxMScalar, SIGNAL(editingFinished()),tControl,SLOT(sxmScalarEdited()));
   QObject::connect(tControl, SIGNAL(sxmValsEnabled(bool)),m_lineEditSxMValues,SLOT(setEnabled(bool)));
   QObject::connect(m_lineEditSxMScalar, SIGNAL(textChanged(QString)),validator,SLOT(sxmScalarEdited(QString)));
   QObject::connect(validator, SIGNAL(sxmScalarGood(qreal)),m_sxmMatrix, SLOT(goodScalar(qreal)));
   QObject::connect(m_sxmMatrix, SIGNAL(scalarToFormat(QString)),textInjector, SLOT(listenSxMScalarRdy(QString)));
   QObject::connect(textInjector, SIGNAL(clearHTML()),m_textOut, SLOT(clear()));
   QObject::connect(textInjector, SIGNAL(sendHTML(QString)),m_textOut, SLOT(insertHtml(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
