/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *login;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *getCode;
    QTextBrowser *textBrowser;
    QLineEdit *inCode;
    QLineEdit *inNum;
    QTextBrowser *textBrowser_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *inSchool;
    QPushButton *allSchool;
    QLineEdit *ingrade;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(20, 40, 101, 41));
        login->setAutoDefault(false);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 100, 401, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        getCode = new QPushButton(verticalLayoutWidget);
        getCode->setObjectName("getCode");

        verticalLayout->addWidget(getCode);

        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        inCode = new QLineEdit(centralwidget);
        inCode->setObjectName("inCode");
        inCode->setGeometry(QRect(20, 280, 113, 21));
        inNum = new QLineEdit(centralwidget);
        inNum->setObjectName("inNum");
        inNum->setGeometry(QRect(20, 340, 113, 21));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(20, 370, 256, 61));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 440, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inSchool = new QPushButton(horizontalLayoutWidget);
        inSchool->setObjectName("inSchool");

        horizontalLayout->addWidget(inSchool);

        allSchool = new QPushButton(horizontalLayoutWidget);
        allSchool->setObjectName("allSchool");

        horizontalLayout->addWidget(allSchool);

        ingrade = new QLineEdit(centralwidget);
        ingrade->setObjectName("ingrade");
        ingrade->setGeometry(QRect(20, 310, 131, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\276\276\347\276\216\345\230\211\346\216\222\345\220\215\345\257\274\345\207\272\345\267\245\345\205\267", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\276\276\347\276\216\345\230\211", nullptr));
        getCode->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\350\200\203\350\257\225\347\240\201", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700;\">\350\200\203\350\257\225\347\240\201\347\244\272\344\276\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans SC'; font-size:10pt; color:#000000;\">[{&quot;examNum&quot;:</span><span style=\" font-family:'Noto Sans SC';"
                        " font-size:10pt; font-weight:700; color:#000000;\">51</span><span style=\" font-family:'Noto Sans SC'; font-size:10pt; color:#000000;\">,&quot;examName&quot;:&quot;\345\210\235\344\270\255-25\345\271\264\344\270\255\350\200\203-\346\210\220\347\273\251\345\210\206\346\236\220-2025-07-28&quot;,&quot;gradeNum&quot;:8,&quot;gradeName&quot;:&quot;\345\205\253\345\271\264\347\272\247&quot;,&quot;subjectNum&quot;:106,&quot;subjectName&quot;:&quot;\347\224\237\347\211\251&quot;}</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans SC'; font-size:10pt; color:#000000;\">\345\205\266\344\270\255&quot;examNum&quot;\345\220\216\346\216\245</span><span style=\" font-family:'Noto Sans SC'; font-size:10pt; font-weight:700; color:#000000;\">\346\225\260\345\255\227\345\260\261\346\230\257\346\234\254\346\254\241\350\200\203\350\257\225\347\232\204\344\273\243\347\240\201</span><span style=\" font-family:'No"
                        "to Sans SC'; font-size:10pt; color:#000000;\">\357\274\214&quot;\345\210\235\344\270\255-25\345\271\264\344\270\255\350\200\203-\346\210\220\347\273\251\345\210\206\346\236\220&quot;\350\241\250\347\244\272\347\232\204\346\230\257\345\223\252\345\234\272\350\200\203\350\257\225</span></p></body></html>", nullptr));
        inCode->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\200\203\350\257\225\347\240\201", nullptr));
        inNum->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\216\222\345\220\215\350\214\203\345\233\264", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\216\222\345\220\215\350\214\203\345\233\264</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\241\253\342\200\234<span style=\" font-weight:700;\">2000</span>\342\200\235\357\274\214\345\260\261\350\276\223\345\207\272\346\216\222\345\220\215\345\210\260<span style=\" font-weight:700;\">2000</span>\345\220"
                        "\215\345\267\246\345\217\263\357\274\214<span style=\" font-weight:700;\">\344\270\215\350\276\223\345\205\245\345\210\231\351\273\230\350\256\244\344\270\2722000</span></p></body></html>", nullptr));
        inSchool->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\271\264\347\272\247\346\216\222\345\220\215", nullptr));
        allSchool->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\216\277\346\216\222\345\220\215", nullptr));
        ingrade->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\271\264\347\272\247\357\274\210\347\272\257\346\225\260\345\255\227\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
