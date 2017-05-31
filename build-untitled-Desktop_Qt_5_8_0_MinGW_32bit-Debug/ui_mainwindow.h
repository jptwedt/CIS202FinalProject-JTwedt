/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *TypeBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonSxM;
    QRadioButton *radioButtonMxM;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *operationBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonAdd;
    QRadioButton *radioButtonSubtract;
    QRadioButton *radioButtonMultiply;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *lineEditSxMScalar;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEditSxMRows_2;
    QLabel *label_4;
    QLineEdit *lineEditSxMCols_2;
    QLabel *label_7;
    QLineEdit *lineEditSxMValues;
    QPushButton *pushButtonAutofillSxM;
    QPushButton *pushButtonSubmitSxM;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLabel *label_16;
    QLineEdit *lineEditSxMRows_4;
    QLabel *label_17;
    QLineEdit *lineEditSxMCols_4;
    QLabel *label_9;
    QLineEdit *lineEditMxMAValues;
    QPushButton *pushButtonAutofillMxMA;
    QLabel *label_14;
    QLabel *label_11;
    QLineEdit *lineEditMxMBRows;
    QLabel *label_15;
    QLineEdit *lineEditMxMBCols;
    QLabel *label_8;
    QLineEdit *lineEditMxMBValues;
    QPushButton *pushButtonAutofillMxMB;
    QPushButton *pushButtonSubmitMxM;
    QTextEdit *textEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(581, 524);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 225);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 565, 474));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        TypeBox = new QGroupBox(widget);
        TypeBox->setObjectName(QStringLiteral("TypeBox"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        TypeBox->setFont(font);
        TypeBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(TypeBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButtonSxM = new QRadioButton(TypeBox);
        radioButtonSxM->setObjectName(QStringLiteral("radioButtonSxM"));
        QFont font1;
        font1.setPointSize(12);
        radioButtonSxM->setFont(font1);
        radioButtonSxM->setChecked(true);

        horizontalLayout->addWidget(radioButtonSxM);

        radioButtonMxM = new QRadioButton(TypeBox);
        radioButtonMxM->setObjectName(QStringLiteral("radioButtonMxM"));
        radioButtonMxM->setFont(font1);

        horizontalLayout->addWidget(radioButtonMxM);


        verticalLayout_5->addWidget(TypeBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        operationBox = new QGroupBox(widget);
        operationBox->setObjectName(QStringLiteral("operationBox"));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(12);
        operationBox->setFont(font2);
        operationBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(operationBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButtonAdd = new QRadioButton(operationBox);
        radioButtonAdd->setObjectName(QStringLiteral("radioButtonAdd"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(10);
        radioButtonAdd->setFont(font3);
        radioButtonAdd->setChecked(true);

        verticalLayout_2->addWidget(radioButtonAdd);

        radioButtonSubtract = new QRadioButton(operationBox);
        radioButtonSubtract->setObjectName(QStringLiteral("radioButtonSubtract"));
        radioButtonSubtract->setFont(font3);

        verticalLayout_2->addWidget(radioButtonSubtract);

        radioButtonMultiply = new QRadioButton(operationBox);
        radioButtonMultiply->setObjectName(QStringLiteral("radioButtonMultiply"));
        radioButtonMultiply->setFont(font3);

        verticalLayout_2->addWidget(radioButtonMultiply);


        verticalLayout_4->addWidget(operationBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setFamily(QStringLiteral("Lucida Console"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_6->setFont(font4);

        verticalLayout->addWidget(label_6);

        lineEditSxMScalar = new QLineEdit(widget);
        lineEditSxMScalar->setObjectName(QStringLiteral("lineEditSxMScalar"));
        lineEditSxMScalar->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));
        lineEditSxMScalar->setFrame(true);

        verticalLayout->addWidget(lineEditSxMScalar);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font5;
        font5.setPointSize(10);
        label_3->setFont(font5);

        verticalLayout->addWidget(label_3);

        lineEditSxMRows_2 = new QLineEdit(widget);
        lineEditSxMRows_2->setObjectName(QStringLiteral("lineEditSxMRows_2"));
        lineEditSxMRows_2->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout->addWidget(lineEditSxMRows_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font5);

        verticalLayout->addWidget(label_4);

        lineEditSxMCols_2 = new QLineEdit(widget);
        lineEditSxMCols_2->setObjectName(QStringLiteral("lineEditSxMCols_2"));
        lineEditSxMCols_2->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout->addWidget(lineEditSxMCols_2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font5);

        verticalLayout->addWidget(label_7);

        lineEditSxMValues = new QLineEdit(widget);
        lineEditSxMValues->setObjectName(QStringLiteral("lineEditSxMValues"));
        lineEditSxMValues->setEnabled(false);
        lineEditSxMValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout->addWidget(lineEditSxMValues);

        pushButtonAutofillSxM = new QPushButton(widget);
        pushButtonAutofillSxM->setObjectName(QStringLiteral("pushButtonAutofillSxM"));
        pushButtonAutofillSxM->setEnabled(false);
        QFont font6;
        font6.setPointSize(8);
        pushButtonAutofillSxM->setFont(font6);

        verticalLayout->addWidget(pushButtonAutofillSxM);

        pushButtonSubmitSxM = new QPushButton(widget);
        pushButtonSubmitSxM->setObjectName(QStringLiteral("pushButtonSubmitSxM"));
        pushButtonSubmitSxM->setEnabled(false);
        pushButtonSubmitSxM->setFont(font1);

        verticalLayout->addWidget(pushButtonSubmitSxM);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);
        label_10->setFont(font4);

        verticalLayout_3->addWidget(label_10);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font5);

        verticalLayout_3->addWidget(label_16);

        lineEditSxMRows_4 = new QLineEdit(widget);
        lineEditSxMRows_4->setObjectName(QStringLiteral("lineEditSxMRows_4"));
        lineEditSxMRows_4->setEnabled(false);
        lineEditSxMRows_4->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditSxMRows_4);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font5);

        verticalLayout_3->addWidget(label_17);

        lineEditSxMCols_4 = new QLineEdit(widget);
        lineEditSxMCols_4->setObjectName(QStringLiteral("lineEditSxMCols_4"));
        lineEditSxMCols_4->setEnabled(false);
        lineEditSxMCols_4->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditSxMCols_4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font5);

        verticalLayout_3->addWidget(label_9);

        lineEditMxMAValues = new QLineEdit(widget);
        lineEditMxMAValues->setObjectName(QStringLiteral("lineEditMxMAValues"));
        lineEditMxMAValues->setEnabled(false);
        lineEditMxMAValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditMxMAValues);

        pushButtonAutofillMxMA = new QPushButton(widget);
        pushButtonAutofillMxMA->setObjectName(QStringLiteral("pushButtonAutofillMxMA"));
        pushButtonAutofillMxMA->setEnabled(false);
        pushButtonAutofillMxMA->setFont(font6);

        verticalLayout_3->addWidget(pushButtonAutofillMxMA);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font4);

        verticalLayout_3->addWidget(label_14);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font5);

        verticalLayout_3->addWidget(label_11);

        lineEditMxMBRows = new QLineEdit(widget);
        lineEditMxMBRows->setObjectName(QStringLiteral("lineEditMxMBRows"));
        lineEditMxMBRows->setEnabled(false);
        lineEditMxMBRows->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditMxMBRows);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font5);

        verticalLayout_3->addWidget(label_15);

        lineEditMxMBCols = new QLineEdit(widget);
        lineEditMxMBCols->setObjectName(QStringLiteral("lineEditMxMBCols"));
        lineEditMxMBCols->setEnabled(false);
        lineEditMxMBCols->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditMxMBCols);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font5);

        verticalLayout_3->addWidget(label_8);

        lineEditMxMBValues = new QLineEdit(widget);
        lineEditMxMBValues->setObjectName(QStringLiteral("lineEditMxMBValues"));
        lineEditMxMBValues->setEnabled(false);
        lineEditMxMBValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_3->addWidget(lineEditMxMBValues);

        pushButtonAutofillMxMB = new QPushButton(widget);
        pushButtonAutofillMxMB->setObjectName(QStringLiteral("pushButtonAutofillMxMB"));
        pushButtonAutofillMxMB->setEnabled(false);
        pushButtonAutofillMxMB->setFont(font6);

        verticalLayout_3->addWidget(pushButtonAutofillMxMB);

        pushButtonSubmitMxM = new QPushButton(widget);
        pushButtonSubmitMxM->setObjectName(QStringLiteral("pushButtonSubmitMxM"));
        pushButtonSubmitMxM->setEnabled(false);
        pushButtonSubmitMxM->setFont(font1);
        pushButtonSubmitMxM->setAutoFillBackground(false);
        pushButtonSubmitMxM->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(pushButtonSubmitMxM);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(3);
        textEdit->setMidLineWidth(1);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout_3->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        TypeBox->raise();
        operationBox->raise();
        textEdit->raise();
        label_7->raise();
        pushButtonSubmitMxM->raise();
        pushButtonSubmitSxM->raise();
        pushButtonSubmitSxM->raise();
        label_7->raise();
        lineEditSxMValues->raise();
        pushButtonAutofillSxM->raise();
        lineEditSxMCols_2->raise();
        label_4->raise();
        lineEditSxMRows_2->raise();
        label_3->raise();
        label_5->raise();
        lineEditSxMScalar->raise();
        label_6->raise();
        label_10->raise();
        label_16->raise();
        lineEditSxMRows_4->raise();
        label_17->raise();
        lineEditSxMCols_4->raise();
        label_9->raise();
        lineEditMxMAValues->raise();
        pushButtonAutofillMxMA->raise();
        label_14->raise();
        label_11->raise();
        lineEditMxMBRows->raise();
        label_15->raise();
        lineEditMxMBCols->raise();
        label_8->raise();
        lineEditMxMBValues->raise();
        pushButtonAutofillMxMB->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditSxMRows_4, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditSxMCols_4, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditMxMBRows, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditMxMBCols, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditSxMScalar, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditSxMRows_2, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), lineEditSxMCols_2, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Matrix Calculator", Q_NULLPTR));
        TypeBox->setTitle(QString());
        radioButtonSxM->setText(QApplication::translate("MainWindow", "Scalar w/ Matrix", Q_NULLPTR));
        radioButtonMxM->setText(QApplication::translate("MainWindow", "Matrix w/ Matrix", Q_NULLPTR));
        operationBox->setTitle(QApplication::translate("MainWindow", "Operation", Q_NULLPTR));
        radioButtonAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        radioButtonSubtract->setText(QApplication::translate("MainWindow", "Subtract", Q_NULLPTR));
        radioButtonMultiply->setText(QApplication::translate("MainWindow", "Multiply", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Scalar:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Matrix:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditSxMValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillSxM->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        pushButtonSubmitSxM->setText(QApplication::translate("MainWindow", "Submit", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Matrix A:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditMxMAValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillMxMA->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Matrix B:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditMxMBValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillMxMB->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        pushButtonSubmitMxM->setText(QApplication::translate("MainWindow", "Submit", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textEdit->setPlaceholderText(QApplication::translate("MainWindow", "Output:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
