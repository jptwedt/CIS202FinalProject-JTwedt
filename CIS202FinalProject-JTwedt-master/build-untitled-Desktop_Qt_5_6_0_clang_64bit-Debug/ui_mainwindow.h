/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
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
    QLabel *label_6;
    QLineEdit *lineEdit;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lineEditRows;
    QLabel *label_2;
    QLineEdit *lineEditCols;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QGroupBox *mxmBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *lineEditRows_2;
    QLabel *label_9;
    QLineEdit *lineEditCols_2;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QFrame *line;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEditRows_3;
    QLabel *label_11;
    QLineEdit *lineEditCols_3;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QGroupBox *operationBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QLabel *label_16;
    QTextEdit *textEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(609, 500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TypeBox = new QGroupBox(centralWidget);
        TypeBox->setObjectName(QStringLiteral("TypeBox"));
        TypeBox->setGeometry(QRect(10, 10, 321, 41));
        horizontalLayout = new QHBoxLayout(TypeBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButtonSxM = new QRadioButton(TypeBox);
        radioButtonSxM->setObjectName(QStringLiteral("radioButtonSxM"));
        QFont font;
        font.setPointSize(12);
        radioButtonSxM->setFont(font);

        horizontalLayout->addWidget(radioButtonSxM);

        radioButtonMxM = new QRadioButton(TypeBox);
        radioButtonMxM->setObjectName(QStringLiteral("radioButtonMxM"));
        radioButtonMxM->setFont(font);

        horizontalLayout->addWidget(radioButtonMxM);

        sxmBox = new QGroupBox(centralWidget);
        sxmBox->setObjectName(QStringLiteral("sxmBox"));
        sxmBox->setGeometry(QRect(10, 140, 155, 311));
        sxmBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(sxmBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(sxmBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setFamily(QStringLiteral("Lucida Console"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        verticalLayout_3->addWidget(label_6);

        lineEdit = new QLineEdit(sxmBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        line_2 = new QFrame(sxmBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        label_5 = new QLabel(sxmBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_3->addWidget(label_5);

        label = new QLabel(sxmBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);

        verticalLayout_3->addWidget(label);

        lineEditRows = new QLineEdit(sxmBox);
        lineEditRows->setObjectName(QStringLiteral("lineEditRows"));

        verticalLayout_3->addWidget(lineEditRows);

        label_2 = new QLabel(sxmBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        verticalLayout_3->addWidget(label_2);

        lineEditCols = new QLineEdit(sxmBox);
        lineEditCols->setObjectName(QStringLiteral("lineEditCols"));

        verticalLayout_3->addWidget(lineEditCols);

        label_7 = new QLabel(sxmBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        verticalLayout_3->addWidget(label_7);

        lineEdit_2 = new QLineEdit(sxmBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);

        mxmBox = new QGroupBox(centralWidget);
        mxmBox->setObjectName(QStringLiteral("mxmBox"));
        mxmBox->setGeometry(QRect(180, 50, 155, 401));
        mxmBox->setFont(font);
        verticalLayout = new QVBoxLayout(mxmBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_10 = new QLabel(mxmBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        verticalLayout->addWidget(label_10);

        label_8 = new QLabel(mxmBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        verticalLayout->addWidget(label_8);

        lineEditRows_2 = new QLineEdit(mxmBox);
        lineEditRows_2->setObjectName(QStringLiteral("lineEditRows_2"));

        verticalLayout->addWidget(lineEditRows_2);

        label_9 = new QLabel(mxmBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        verticalLayout->addWidget(label_9);

        lineEditCols_2 = new QLineEdit(mxmBox);
        lineEditCols_2->setObjectName(QStringLiteral("lineEditCols_2"));

        verticalLayout->addWidget(lineEditCols_2);

        label_12 = new QLabel(mxmBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        verticalLayout->addWidget(label_12);

        lineEdit_4 = new QLineEdit(mxmBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        line = new QFrame(mxmBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_14 = new QLabel(mxmBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(mxmBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);

        verticalLayout->addWidget(label_15);

        lineEditRows_3 = new QLineEdit(mxmBox);
        lineEditRows_3->setObjectName(QStringLiteral("lineEditRows_3"));

        verticalLayout->addWidget(lineEditRows_3);

        label_11 = new QLabel(mxmBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);

        verticalLayout->addWidget(label_11);

        lineEditCols_3 = new QLineEdit(mxmBox);
        lineEditCols_3->setObjectName(QStringLiteral("lineEditCols_3"));

        verticalLayout->addWidget(lineEditCols_3);

        label_13 = new QLabel(mxmBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        verticalLayout->addWidget(label_13);

        lineEdit_5 = new QLineEdit(mxmBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        operationBox = new QGroupBox(centralWidget);
        operationBox->setObjectName(QStringLiteral("operationBox"));
        operationBox->setGeometry(QRect(10, 50, 151, 91));
        operationBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(operationBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton = new QRadioButton(operationBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_5 = new QRadioButton(operationBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(operationBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(350, 10, 47, 13));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(350, 30, 241, 421));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Matrix Calculator", 0));
        TypeBox->setTitle(QString());
        radioButtonSxM->setText(QApplication::translate("MainWindow", "Scalar w/ Matrix", 0));
        radioButtonMxM->setText(QApplication::translate("MainWindow", "Matrix w/ Matrix", 0));
        sxmBox->setTitle(QApplication::translate("MainWindow", "Scalar w/ Matrix", 0));
        label_6->setText(QApplication::translate("MainWindow", "Scalar:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Matrix:", 0));
        label->setText(QApplication::translate("MainWindow", "Number of Rows", 0));
        label_2->setText(QApplication::translate("MainWindow", "Number of Columns", 0));
        label_7->setText(QApplication::translate("MainWindow", "Values: (csv format)", 0));
        mxmBox->setTitle(QApplication::translate("MainWindow", "Matrix w/ Matrix", 0));
        label_10->setText(QApplication::translate("MainWindow", "Matrix A:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Number of Rows", 0));
        label_9->setText(QApplication::translate("MainWindow", "Number of Columns", 0));
        label_12->setText(QApplication::translate("MainWindow", "Values: (csv format)", 0));
        label_14->setText(QApplication::translate("MainWindow", "Matrix B:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Number of Rows", 0));
        label_11->setText(QApplication::translate("MainWindow", "Number of Columns", 0));
        label_13->setText(QApplication::translate("MainWindow", "Values: (csv format)", 0));
        operationBox->setTitle(QApplication::translate("MainWindow", "Operation", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Add", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "Subtract", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Multiply", 0));
        label_16->setText(QApplication::translate("MainWindow", "Output:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
