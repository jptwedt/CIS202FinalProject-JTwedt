#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   memberNames = new QList<QString>;
   m_textOut = ui->textEditTextOut;
   memberNames->append("textEditTextOut");
   m_lineEditSxMCols = ui->lineEditSxMCols;
   memberNames->append("lineEditSxMCols");
   m_lineEditSxMRows = ui->lineEditSxMRows;
   memberNames->append("lineEditSxMRows");
   m_lineEditSxMScalar = ui->lineEditSxMScalar;
   memberNames->append("lineEditSxMScalar");
   m_lineEditSxMValues = ui->lineEditSxMValues;
   memberNames->append("lineEditSxMValues");
   m_lineEditMxMACols = ui->lineEditMxMACols;
   memberNames->append("lineEditMxMACols");
   m_lineEditMxMARows = ui->lineEditMxMARows;
   memberNames->append("lineEditMxMARows");
   m_lineEditMxMAValues = ui->lineEditMxMAValues;
   memberNames->append("lineEditMxMAValues");
   m_lineEditMxMBCols = ui->lineEditMxMBCols;
   memberNames->append("lineEditMxMBCols");
   m_lineEditMxMBRows = ui->lineEditMxMBRows;
   memberNames->append("lineEditMxMBRows");
   m_lineEditMxMBValues = ui->lineEditMxMBValues;
   memberNames->append("lineEditMxMBValues");
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

   for(int i = 0; i < memberNames->count(); ++i){
       qDebug() << (*memberNames)[i];
   }

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
