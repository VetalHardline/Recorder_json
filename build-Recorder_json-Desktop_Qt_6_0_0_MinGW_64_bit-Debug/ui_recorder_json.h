/********************************************************************************
** Form generated from reading UI file 'recorder_json.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDER_JSON_H
#define UI_RECORDER_JSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recorder_json
{
public:
    QWidget *centralwidget;
    QTextEdit *userText;
    QTextEdit *jsonText;
    QPushButton *addJson_File;
    QPushButton *addJson_Key;
    QPushButton *clearJson_File;
    QPushButton *SaveJson_File;
    QPushButton *LoadJson_File;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recorder_json)
    {
        if (Recorder_json->objectName().isEmpty())
            Recorder_json->setObjectName(QString::fromUtf8("Recorder_json"));
        Recorder_json->resize(800, 600);
        centralwidget = new QWidget(Recorder_json);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        userText = new QTextEdit(centralwidget);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(10, 30, 341, 401));
        jsonText = new QTextEdit(centralwidget);
        jsonText->setObjectName(QString::fromUtf8("jsonText"));
        jsonText->setGeometry(QRect(370, 30, 421, 401));
        addJson_File = new QPushButton(centralwidget);
        addJson_File->setObjectName(QString::fromUtf8("addJson_File"));
        addJson_File->setGeometry(QRect(20, 460, 151, 71));
        addJson_Key = new QPushButton(centralwidget);
        addJson_Key->setObjectName(QString::fromUtf8("addJson_Key"));
        addJson_Key->setGeometry(QRect(200, 460, 131, 71));
        clearJson_File = new QPushButton(centralwidget);
        clearJson_File->setObjectName(QString::fromUtf8("clearJson_File"));
        clearJson_File->setGeometry(QRect(360, 460, 111, 71));
        SaveJson_File = new QPushButton(centralwidget);
        SaveJson_File->setObjectName(QString::fromUtf8("SaveJson_File"));
        SaveJson_File->setGeometry(QRect(500, 460, 111, 71));
        LoadJson_File = new QPushButton(centralwidget);
        LoadJson_File->setObjectName(QString::fromUtf8("LoadJson_File"));
        LoadJson_File->setGeometry(QRect(630, 460, 131, 71));
        Recorder_json->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Recorder_json);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Recorder_json->setMenuBar(menubar);
        statusbar = new QStatusBar(Recorder_json);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Recorder_json->setStatusBar(statusbar);

        retranslateUi(Recorder_json);

        QMetaObject::connectSlotsByName(Recorder_json);
    } // setupUi

    void retranslateUi(QMainWindow *Recorder_json)
    {
        Recorder_json->setWindowTitle(QCoreApplication::translate("Recorder_json", "Recorder_json", nullptr));
        addJson_File->setText(QCoreApplication::translate("Recorder_json", "addJson_File", nullptr));
        addJson_Key->setText(QCoreApplication::translate("Recorder_json", "addKey", nullptr));
        clearJson_File->setText(QCoreApplication::translate("Recorder_json", "clear", nullptr));
        SaveJson_File->setText(QCoreApplication::translate("Recorder_json", "SaveJson_File", nullptr));
        LoadJson_File->setText(QCoreApplication::translate("Recorder_json", "LoadJson_File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recorder_json: public Ui_Recorder_json {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDER_JSON_H
