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
#include <QtWidgets/QFrame>
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
    QGroupBox *TypeBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonSxM;
    QRadioButton *radioButtonMxM;
    QGroupBox *sxmBox;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxSxMData;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditSxMScalar;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEditSxMRows_2;
    QLabel *label_4;
    QLineEdit *lineEditSxMCols_2;
    QGroupBox *groupBoxSxMValues;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditSxMValues;
    QPushButton *pushButtonAutofillSxM;
    QFrame *line_3;
    QPushButton *pushButtonSubmitSxM;
    QGroupBox *mxmBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxMxMData;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBoxMxMAStats;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_16;
    QLineEdit *lineEditSxMRows_4;
    QLabel *label_17;
    QLineEdit *lineEditSxMCols_4;
    QGroupBox *groupBoxMxMValues;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEditMxMAValues;
    QPushButton *pushButtonAutofillMxMA;
    QGroupBox *groupBoxMxMBStats;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QLabel *label_11;
    QLineEdit *lineEditMxMBRows;
    QLabel *label_15;
    QLineEdit *lineEditMxMBCols;
    QGroupBox *groupBoxMxMBValues;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditMxMBValues;
    QPushButton *pushButtonAutofillMxMB;
    QFrame *line;
    QPushButton *pushButtonSubmitMxM;
    QGroupBox *operationBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonAdd;
    QRadioButton *radioButtonSubtract;
    QRadioButton *radioButtonMultiply;
    QTextEdit *textEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(614, 633);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 225);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TypeBox = new QGroupBox(centralWidget);
        TypeBox->setObjectName(QStringLiteral("TypeBox"));
        TypeBox->setGeometry(QRect(10, 10, 341, 41));
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

        sxmBox = new QGroupBox(centralWidget);
        sxmBox->setObjectName(QStringLiteral("sxmBox"));
        sxmBox->setGeometry(QRect(10, 190, 161, 411));
        sxmBox->setFont(font1);
        sxmBox->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(sxmBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxSxMData = new QGroupBox(sxmBox);
        groupBoxSxMData->setObjectName(QStringLiteral("groupBoxSxMData"));
        groupBoxSxMData->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBoxSxMData);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(groupBoxSxMData);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font2;
        font2.setFamily(QStringLiteral("Lucida Console"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);

        verticalLayout_4->addWidget(label_6);

        lineEditSxMScalar = new QLineEdit(groupBoxSxMData);
        lineEditSxMScalar->setObjectName(QStringLiteral("lineEditSxMScalar"));
        lineEditSxMScalar->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));
        lineEditSxMScalar->setFrame(true);

        verticalLayout_4->addWidget(lineEditSxMScalar);

        label_5 = new QLabel(groupBoxSxMData);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout_4->addWidget(label_5);

        label_3 = new QLabel(groupBoxSxMData);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setPointSize(10);
        label_3->setFont(font3);

        verticalLayout_4->addWidget(label_3);

        lineEditSxMRows_2 = new QLineEdit(groupBoxSxMData);
        lineEditSxMRows_2->setObjectName(QStringLiteral("lineEditSxMRows_2"));
        lineEditSxMRows_2->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_4->addWidget(lineEditSxMRows_2);

        label_4 = new QLabel(groupBoxSxMData);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        verticalLayout_4->addWidget(label_4);

        lineEditSxMCols_2 = new QLineEdit(groupBoxSxMData);
        lineEditSxMCols_2->setObjectName(QStringLiteral("lineEditSxMCols_2"));
        lineEditSxMCols_2->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_4->addWidget(lineEditSxMCols_2);

        groupBoxSxMValues = new QGroupBox(groupBoxSxMData);
        groupBoxSxMValues->setObjectName(QStringLiteral("groupBoxSxMValues"));
        groupBoxSxMValues->setFlat(true);
        verticalLayout_7 = new QVBoxLayout(groupBoxSxMValues);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(groupBoxSxMValues);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);

        verticalLayout_7->addWidget(label_7);

        lineEditSxMValues = new QLineEdit(groupBoxSxMValues);
        lineEditSxMValues->setObjectName(QStringLiteral("lineEditSxMValues"));
        lineEditSxMValues->setEnabled(false);
        lineEditSxMValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_7->addWidget(lineEditSxMValues);

        pushButtonAutofillSxM = new QPushButton(groupBoxSxMValues);
        pushButtonAutofillSxM->setObjectName(QStringLiteral("pushButtonAutofillSxM"));
        pushButtonAutofillSxM->setEnabled(false);
        QFont font4;
        font4.setPointSize(8);
        pushButtonAutofillSxM->setFont(font4);

        verticalLayout_7->addWidget(pushButtonAutofillSxM);


        verticalLayout_4->addWidget(groupBoxSxMValues);


        verticalLayout_3->addWidget(groupBoxSxMData);

        line_3 = new QFrame(sxmBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_3);

        pushButtonSubmitSxM = new QPushButton(sxmBox);
        pushButtonSubmitSxM->setObjectName(QStringLiteral("pushButtonSubmitSxM"));
        pushButtonSubmitSxM->setEnabled(false);
        pushButtonSubmitSxM->setFont(font1);

        verticalLayout_3->addWidget(pushButtonSubmitSxM);

        mxmBox = new QGroupBox(centralWidget);
        mxmBox->setObjectName(QStringLiteral("mxmBox"));
        mxmBox->setEnabled(false);
        mxmBox->setGeometry(QRect(180, 50, 171, 551));
        QFont font5;
        font5.setFamily(QStringLiteral("Century Gothic"));
        font5.setPointSize(12);
        mxmBox->setFont(font5);
        mxmBox->setFlat(false);
        verticalLayout = new QVBoxLayout(mxmBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxMxMData = new QGroupBox(mxmBox);
        groupBoxMxMData->setObjectName(QStringLiteral("groupBoxMxMData"));
        groupBoxMxMData->setFlat(true);
        verticalLayout_10 = new QVBoxLayout(groupBoxMxMData);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBoxMxMAStats = new QGroupBox(groupBoxMxMData);
        groupBoxMxMAStats->setObjectName(QStringLiteral("groupBoxMxMAStats"));
        groupBoxMxMAStats->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(groupBoxMxMAStats);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_10 = new QLabel(groupBoxMxMAStats);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        verticalLayout_6->addWidget(label_10);

        label_16 = new QLabel(groupBoxMxMAStats);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);

        verticalLayout_6->addWidget(label_16);

        lineEditSxMRows_4 = new QLineEdit(groupBoxMxMAStats);
        lineEditSxMRows_4->setObjectName(QStringLiteral("lineEditSxMRows_4"));
        lineEditSxMRows_4->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_6->addWidget(lineEditSxMRows_4);

        label_17 = new QLabel(groupBoxMxMAStats);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font3);

        verticalLayout_6->addWidget(label_17);

        lineEditSxMCols_4 = new QLineEdit(groupBoxMxMAStats);
        lineEditSxMCols_4->setObjectName(QStringLiteral("lineEditSxMCols_4"));
        lineEditSxMCols_4->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_6->addWidget(lineEditSxMCols_4);

        groupBoxMxMValues = new QGroupBox(groupBoxMxMAStats);
        groupBoxMxMValues->setObjectName(QStringLiteral("groupBoxMxMValues"));
        groupBoxMxMValues->setFlat(true);
        verticalLayout_9 = new QVBoxLayout(groupBoxMxMValues);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(groupBoxMxMValues);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);

        verticalLayout_9->addWidget(label_9);

        lineEditMxMAValues = new QLineEdit(groupBoxMxMValues);
        lineEditMxMAValues->setObjectName(QStringLiteral("lineEditMxMAValues"));
        lineEditMxMAValues->setEnabled(false);
        lineEditMxMAValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_9->addWidget(lineEditMxMAValues);

        pushButtonAutofillMxMA = new QPushButton(groupBoxMxMValues);
        pushButtonAutofillMxMA->setObjectName(QStringLiteral("pushButtonAutofillMxMA"));
        pushButtonAutofillMxMA->setEnabled(false);
        pushButtonAutofillMxMA->setFont(font4);

        verticalLayout_9->addWidget(pushButtonAutofillMxMA);


        verticalLayout_6->addWidget(groupBoxMxMValues);


        verticalLayout_10->addWidget(groupBoxMxMAStats);

        groupBoxMxMBStats = new QGroupBox(groupBoxMxMData);
        groupBoxMxMBStats->setObjectName(QStringLiteral("groupBoxMxMBStats"));
        groupBoxMxMBStats->setFlat(true);
        verticalLayout_5 = new QVBoxLayout(groupBoxMxMBStats);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_14 = new QLabel(groupBoxMxMBStats);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);

        verticalLayout_5->addWidget(label_14);

        label_11 = new QLabel(groupBoxMxMBStats);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);

        verticalLayout_5->addWidget(label_11);

        lineEditMxMBRows = new QLineEdit(groupBoxMxMBStats);
        lineEditMxMBRows->setObjectName(QStringLiteral("lineEditMxMBRows"));
        lineEditMxMBRows->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_5->addWidget(lineEditMxMBRows);

        label_15 = new QLabel(groupBoxMxMBStats);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);

        verticalLayout_5->addWidget(label_15);

        lineEditMxMBCols = new QLineEdit(groupBoxMxMBStats);
        lineEditMxMBCols->setObjectName(QStringLiteral("lineEditMxMBCols"));
        lineEditMxMBCols->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_5->addWidget(lineEditMxMBCols);

        groupBoxMxMBValues = new QGroupBox(groupBoxMxMBStats);
        groupBoxMxMBValues->setObjectName(QStringLiteral("groupBoxMxMBValues"));
        groupBoxMxMBValues->setFlat(true);
        verticalLayout_8 = new QVBoxLayout(groupBoxMxMBValues);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(groupBoxMxMBValues);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        verticalLayout_8->addWidget(label_8);

        lineEditMxMBValues = new QLineEdit(groupBoxMxMBValues);
        lineEditMxMBValues->setObjectName(QStringLiteral("lineEditMxMBValues"));
        lineEditMxMBValues->setEnabled(false);
        lineEditMxMBValues->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));

        verticalLayout_8->addWidget(lineEditMxMBValues);

        pushButtonAutofillMxMB = new QPushButton(groupBoxMxMBValues);
        pushButtonAutofillMxMB->setObjectName(QStringLiteral("pushButtonAutofillMxMB"));
        pushButtonAutofillMxMB->setEnabled(false);
        pushButtonAutofillMxMB->setFont(font4);

        verticalLayout_8->addWidget(pushButtonAutofillMxMB);


        verticalLayout_5->addWidget(groupBoxMxMBValues);


        verticalLayout_10->addWidget(groupBoxMxMBStats);


        verticalLayout->addWidget(groupBoxMxMData);

        line = new QFrame(mxmBox);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(3);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        pushButtonSubmitMxM = new QPushButton(mxmBox);
        pushButtonSubmitMxM->setObjectName(QStringLiteral("pushButtonSubmitMxM"));
        pushButtonSubmitMxM->setEnabled(false);
        pushButtonSubmitMxM->setFont(font1);
        pushButtonSubmitMxM->setAutoFillBackground(false);
        pushButtonSubmitMxM->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButtonSubmitMxM);

        operationBox = new QGroupBox(centralWidget);
        operationBox->setObjectName(QStringLiteral("operationBox"));
        operationBox->setGeometry(QRect(10, 50, 161, 141));
        operationBox->setFont(font5);
        operationBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(operationBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButtonAdd = new QRadioButton(operationBox);
        radioButtonAdd->setObjectName(QStringLiteral("radioButtonAdd"));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font6.setPointSize(10);
        radioButtonAdd->setFont(font6);
        radioButtonAdd->setChecked(true);

        verticalLayout_2->addWidget(radioButtonAdd);

        radioButtonSubtract = new QRadioButton(operationBox);
        radioButtonSubtract->setObjectName(QStringLiteral("radioButtonSubtract"));
        radioButtonSubtract->setFont(font6);

        verticalLayout_2->addWidget(radioButtonSubtract);

        radioButtonMultiply = new QRadioButton(operationBox);
        radioButtonMultiply->setObjectName(QStringLiteral("radioButtonMultiply"));
        radioButtonMultiply->setFont(font6);

        verticalLayout_2->addWidget(radioButtonMultiply);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(360, 10, 241, 591));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(253, 254, 238);"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(3);
        textEdit->setMidLineWidth(1);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        MainWindow->setCentralWidget(centralWidget);
        TypeBox->raise();
        sxmBox->raise();
        mxmBox->raise();
        operationBox->raise();
        textEdit->raise();
        label_7->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(radioButtonSxM, SIGNAL(toggled(bool)), radioButtonMxM, SLOT(toggle()));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), radioButtonSxM, SLOT(toggle()));
        QObject::connect(radioButtonSxM, SIGNAL(toggled(bool)), groupBoxSxMData, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), groupBoxMxMData, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonMxM, SIGNAL(toggled(bool)), mxmBox, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonSxM, SIGNAL(toggled(bool)), sxmBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Matrix Calculator", Q_NULLPTR));
        TypeBox->setTitle(QString());
        radioButtonSxM->setText(QApplication::translate("MainWindow", "Scalar w/ Matrix", Q_NULLPTR));
        radioButtonMxM->setText(QApplication::translate("MainWindow", "Matrix w/ Matrix", Q_NULLPTR));
        sxmBox->setTitle(QApplication::translate("MainWindow", "Scalar w/ Matrix", Q_NULLPTR));
        groupBoxSxMData->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "Scalar:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Matrix:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        groupBoxSxMValues->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditSxMValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillSxM->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        pushButtonSubmitSxM->setText(QApplication::translate("MainWindow", "Submit", Q_NULLPTR));
        mxmBox->setTitle(QApplication::translate("MainWindow", "Matrix w/ Matrix", Q_NULLPTR));
        groupBoxMxMData->setTitle(QString());
        groupBoxMxMAStats->setTitle(QString());
        label_10->setText(QApplication::translate("MainWindow", "Matrix A:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        groupBoxMxMValues->setTitle(QString());
        label_9->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditMxMAValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillMxMA->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        groupBoxMxMBStats->setTitle(QString());
        label_14->setText(QApplication::translate("MainWindow", "Matrix B:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Number of Rows", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Number of Columns", Q_NULLPTR));
        groupBoxMxMBValues->setTitle(QString());
        label_8->setText(QApplication::translate("MainWindow", "Values:", Q_NULLPTR));
        lineEditMxMBValues->setPlaceholderText(QApplication::translate("MainWindow", "enter csv or autofill", Q_NULLPTR));
        pushButtonAutofillMxMB->setText(QApplication::translate("MainWindow", "(Autofill)", Q_NULLPTR));
        pushButtonSubmitMxM->setText(QApplication::translate("MainWindow", "Submit", Q_NULLPTR));
        operationBox->setTitle(QApplication::translate("MainWindow", "Operation", Q_NULLPTR));
        radioButtonAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        radioButtonSubtract->setText(QApplication::translate("MainWindow", "Subtract", Q_NULLPTR));
        radioButtonMultiply->setText(QApplication::translate("MainWindow", "Multiply", Q_NULLPTR));
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
