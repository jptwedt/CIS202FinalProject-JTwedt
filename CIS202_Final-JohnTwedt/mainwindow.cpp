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

   textInjector = new TextInjector;
   textInjector->getMemberNames(memberNames);

   matrixLayer = new Matrix;

   validator = new Validator();
   validator->getFieldNames(fieldNames);
   validator->setFieldPattern("lineEditSxMScalar","[+|-]?(0|[1-9][\\d]{0,15})(\\.)?([0-9]){0,15}");
   validator->setFieldPattern("lineEditSxMRows","[+]?([1-4][0-9]?|50|[5-9])");
   validator->setFieldPattern("lineEditSxMCols","[+]?([1-4][0-9]?|50|[5-9])");
   validator->setFieldPattern("lineEditSxMValues","[+|-]?((\\d+)?\\.(\\d+)|\\.(\\d+)|\\d+)");
   validator->setDblPrecision(15);
   validator->setFloatPrecision(6);
   tControl = new FlowController();

   QObject::connect(m_radioButtonSxM, SIGNAL(toggled(bool)),tControl,SLOT(sxmSelected(bool)));
   QObject::connect(m_radioButtonMxM, SIGNAL(toggled(bool)),tControl,SLOT(mxmSelected(bool)));
   QObject::connect(tControl, SIGNAL(_sxmSelected(bool)),matrixLayer,SLOT(sxmToggled(bool)));
   QObject::connect(tControl, SIGNAL(_mxmSelected(bool)),matrixLayer,SLOT(mxmToggled(bool)));
   QObject::connect(tControl, SIGNAL(_sxmSelected(bool)),textInjector,SLOT(listenSxMToggled(bool)));
   QObject::connect(tControl, SIGNAL(_mxmSelected(bool)),textInjector,SLOT(listenMxMToggled(bool)));
   QObject::connect(m_radioButtonAdd, SIGNAL(toggled(bool)),validator,SLOT(addToggled(bool)));
   QObject::connect(m_radioButtonAdd, SIGNAL(toggled(bool)),matrixLayer,SLOT(addToggled(bool)));
   QObject::connect(m_radioButtonSubtract, SIGNAL(toggled(bool)),validator,SLOT(subtractToggled(bool)));
   QObject::connect(m_radioButtonSubtract, SIGNAL(toggled(bool)),matrixLayer,SLOT(subtractToggled(bool)));
   QObject::connect(m_radioButtonMultiply, SIGNAL(toggled(bool)),validator,SLOT(multiplyToggled(bool)));
   QObject::connect(m_radioButtonMultiply, SIGNAL(toggled(bool)),matrixLayer,SLOT(multiplyToggled(bool)));
   QObject::connect(m_lineEditSxMScalar, SIGNAL(textChanged(QString)),validator,SLOT(sxmScalarEdited(QString)));
   QObject::connect(m_lineEditSxMCols, SIGNAL(textChanged(QString)),validator,SLOT(sxmColsEdited(QString)));
   QObject::connect(m_lineEditSxMRows, SIGNAL(textChanged(QString)),validator,SLOT(sxmRowsEdited(QString)));
   QObject::connect(m_lineEditSxMValues, SIGNAL(textChanged(QString)),validator,SLOT(sxmValsEdited(QString)));
   QObject::connect(m_lineEditMxMACols, SIGNAL(textChanged(QString)),validator,SLOT(mxmAColsEdited(QString)));
   QObject::connect(m_lineEditMxMARows, SIGNAL(textChanged(QString)),validator,SLOT(mxmARowsEdited(QString)));
   QObject::connect(m_lineEditMxMAValues, SIGNAL(textChanged(QString)),validator,SLOT(mxmAValsEdited(QString)));
   QObject::connect(m_lineEditMxMBCols, SIGNAL(textChanged(QString)),validator,SLOT(mxmBColsEdited(QString)));
   QObject::connect(m_lineEditMxMBRows, SIGNAL(textChanged(QString)),validator,SLOT(mxmBRowsEdited(QString)));
   QObject::connect(m_lineEditMxMBValues, SIGNAL(textChanged(QString)),validator,SLOT(mxmBValsEdited(QString)));
   QObject::connect(validator, SIGNAL(sxmScalarGood(qreal)),matrixLayer, SLOT(goodScalar(qreal)));
   QObject::connect(validator, SIGNAL(sxmScalarGood(qreal)),textInjector, SLOT(listenSxMScalarRdy(qreal)));
   QObject::connect(validator, SIGNAL(sxmScalarGood(bool)),tControl, SLOT(sxmScalarGood(bool)));
   QObject::connect(validator, SIGNAL(sxmScalarNoGood(QString)),textInjector, SLOT(listenSxMScalarError(QString)));
   QObject::connect(validator, SIGNAL(sxmRowsGood(int)),matrixLayer, SLOT(goodRows(int)));
   QObject::connect(validator, SIGNAL(sxmRowsGood(int)),textInjector, SLOT(listenSxMRowsRdy(int)));
   QObject::connect(validator, SIGNAL(sxmRowsGood(bool)),tControl, SLOT(sxmRowsGood(bool)));
   QObject::connect(validator, SIGNAL(sxmRowsNoGood(QString)),textInjector, SLOT(listenSxMRowsError(QString)));
   QObject::connect(validator, SIGNAL(sxmColsGood(int)),matrixLayer, SLOT(goodCols(int)));
   QObject::connect(validator, SIGNAL(sxmColsGood(int)),textInjector, SLOT(listenSxMColsRdy(int)));
   QObject::connect(validator, SIGNAL(sxmColsGood(bool)),tControl, SLOT(sxmColsGood(bool)));
   QObject::connect(validator, SIGNAL(sxmColsNoGood(QString)),textInjector, SLOT(listenSxMColsError(QString)));
   QObject::connect(validator, SIGNAL(sxmValsGood(QStringList)),textInjector, SLOT(listenSxMValsRdy(QStringList)));
   QObject::connect(validator, SIGNAL(sxmValsGood(QStringList)),matrixLayer, SLOT(goodMatrix(QStringList)));
   QObject::connect(validator, SIGNAL(sxmValsGood(bool)),tControl, SLOT(sxmValsGood(bool)));
   QObject::connect(validator, SIGNAL(sxmValsNoGood(QString)),textInjector, SLOT(listenSxMValsError(QString)));
   QObject::connect(validator, SIGNAL(mxmARowsGood(int)),matrixLayer, SLOT(goodRowsA(int)));
   QObject::connect(validator, SIGNAL(mxmARowsGood(int)),textInjector, SLOT(listenMxMARowsRdy(int)));
   QObject::connect(validator, SIGNAL(mxmARowsGood(bool)),tControl, SLOT(mxmARowsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmARowsNoGood(QString)),textInjector, SLOT(listenMxMARowsError(QString)));
   QObject::connect(validator, SIGNAL(mxmAColsGood(int)),matrixLayer, SLOT(goodColsA(int)));
   QObject::connect(validator, SIGNAL(mxmAColsGood(int)),textInjector, SLOT(listenMxMAColsRdy(int)));
   QObject::connect(validator, SIGNAL(mxmAColsGood(bool)),tControl, SLOT(mxmAColsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmAColsNoGood(QString)),textInjector, SLOT(listenMxMAColsError(QString)));
   QObject::connect(validator, SIGNAL(mxmAValsGood(QStringList)),textInjector, SLOT(listenMxMAValsRdy(QStringList)));
   QObject::connect(validator, SIGNAL(mxmAValsGood(QStringList)),matrixLayer, SLOT(goodMatrixA(QStringList)));
   QObject::connect(validator, SIGNAL(mxmAValsGood(bool)),tControl, SLOT(mxmAValsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmAValsNoGood(QString)),textInjector, SLOT(listenMxMAValsError(QString)));
   QObject::connect(validator, SIGNAL(mxmBRowsGood(int)),matrixLayer, SLOT(goodRowsB(int)));
   QObject::connect(validator, SIGNAL(mxmBRowsGood(int)),textInjector, SLOT(listenMxMBRowsRdy(int)));
   QObject::connect(validator, SIGNAL(mxmBRowsGood(bool)),tControl, SLOT(mxmBRowsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmBRowsNoGood(QString)),textInjector, SLOT(listenMxMBRowsError(QString)));
   QObject::connect(validator, SIGNAL(mxmBColsGood(int)),matrixLayer, SLOT(goodColsB(int)));
   QObject::connect(validator, SIGNAL(mxmBColsGood(int)),textInjector, SLOT(listenMxMBColsRdy(int)));
   QObject::connect(validator, SIGNAL(mxmBColsGood(bool)),tControl, SLOT(mxmBColsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmBColsNoGood(QString)),textInjector, SLOT(listenMxMBColsError(QString)));
   QObject::connect(validator, SIGNAL(mxmBValsGood(QStringList)),textInjector, SLOT(listenMxMBValsRdy(QStringList)));
   QObject::connect(validator, SIGNAL(mxmBValsGood(QStringList)),matrixLayer, SLOT(goodMatrixB(QStringList)));
   QObject::connect(validator, SIGNAL(mxmBValsGood(bool)),tControl, SLOT(mxmBValsGood(bool)));
   QObject::connect(validator, SIGNAL(mxmBValsNoGood(QString)),textInjector, SLOT(listenMxMBValsError(QString)));
   QObject::connect(tControl, SIGNAL(enableSxMVals(bool)),m_lineEditSxMValues,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableSxMVals(bool)),m_pushButtonAutofillSxM,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableMxMAVals(bool)),m_lineEditMxMAValues,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableMxMAVals(bool)),m_pushButtonAutofillMxMA,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableMxMBVals(bool)),m_lineEditMxMBValues,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableMxMBVals(bool)),m_pushButtonAutofillMxMB,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableSxMSubmit(bool)),m_pushButtonSubmitSxM,SLOT(setEnabled(bool)));
   QObject::connect(tControl, SIGNAL(enableMxMSubmit(bool)),m_pushButtonSubmitMxM,SLOT(setEnabled(bool)));
   QObject::connect(m_pushButtonAutofillSxM, SIGNAL(pressed()),matrixLayer, SLOT(autofill()));
   QObject::connect(m_pushButtonAutofillMxMA, SIGNAL(pressed()),matrixLayer, SLOT(autofillA()));
   QObject::connect(m_pushButtonAutofillMxMB, SIGNAL(pressed()),matrixLayer, SLOT(autofillB()));
   QObject::connect(m_pushButtonSubmitSxM, SIGNAL(pressed()),matrixLayer, SLOT(sxmSubmitted()));
   QObject::connect(m_pushButtonSubmitMxM, SIGNAL(pressed()),matrixLayer, SLOT(mxmSubmitted()));
   QObject::connect(matrixLayer, SIGNAL(autoFilledMatrix(QString)),m_lineEditSxMValues, SLOT(setText(QString)));
   QObject::connect(matrixLayer, SIGNAL(autoFilledMatrixA(QString)),m_lineEditMxMAValues, SLOT(setText(QString)));
   QObject::connect(matrixLayer, SIGNAL(autoFilledMatrixB(QString)),m_lineEditMxMBValues, SLOT(setText(QString)));
   QObject::connect(matrixLayer, SIGNAL(operationChanged()),textInjector, SLOT(listenOpChange()));
   QObject::connect(matrixLayer, SIGNAL(matrixToOutput(int,int,const QStringList&)),textInjector, SLOT(listenMatrixResult(int,int,const QStringList&)));
   QObject::connect(textInjector, SIGNAL(clearHTML()),m_textOut, SLOT(clear()));
   QObject::connect(textInjector, SIGNAL(sendHTML(QString)),m_textOut, SLOT(insertHtml(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
