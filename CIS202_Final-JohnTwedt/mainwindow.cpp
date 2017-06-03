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
   m_intValidator = new QIntValidator(-MAX_ROWS,MAX_COLS,this);
   valuesPattern = new RegExpRepo();
   valuesPattern->setPattern("([+-]?[0-9|.]+)");
   m_valueParser = new QRegularExpressionMatch();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEditSxMScalar_editingFinished()
{
    m_sxmScalar = m_lineEditSxMScalar->text().toDouble();
    qDebug() << m_sxmScalar << " is the new entry for m_lineEditSxMScalar.";
    QString temp = "<p>Scalar value:  " + m_lineEditSxMScalar->text() + "</p>";
    m_textOut->setHtml(temp);
}

void MainWindow::on_lineEditSxMRows_editingFinished()
{
    m_sxmRows = m_lineEditSxMRows->text().toInt();
    qDebug() << m_sxmRows << " is the new entry for m_lineEditSxMRows.";
    QString temp = "<p>Matrix Rows: " + m_lineEditSxMRows->text() + "</p>";
    m_textOut->setHtml(temp);
}

void MainWindow::on_lineEditSxMCols_editingFinished()
{
    m_sxmCols = m_lineEditSxMCols->text().toInt();
    qDebug() << m_sxmCols << " is the new entry for m_lineEditSxMCols.";
    QString temp = "<p>Matrix Columns: " + m_lineEditSxMCols->text() + "</p>";
    m_textOut->setHtml(temp);
}

void MainWindow::on_lineEditSxMValues_returnPressed()
{
    QString temp = m_lineEditSxMValues->text();
    qDebug() << temp << " is the new entry for m_lineEditSxMValues.";
}

void MainWindow::on_pushButtonAutofillSxM_clicked()
{
    QString temp = m_pushButtonAutofillSxM->text();
    qDebug() << temp << " is the new entry for m_pushButtonAutofillSxM.";
}

void MainWindow::on_pushButtonSubmitSxM_clicked()
{
    QString temp = m_pushButtonSubmitSxM->text();
    qDebug() << temp << " is the new entry for m_pushButtonSubmitSxM.";
}
