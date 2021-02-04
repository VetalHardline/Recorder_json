#include "recorder_json.h"
#include "ui_recorder_json.h"
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

Recorder_json::Recorder_json(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Recorder_json)
{
    ui->setupUi(this);

    connect(ui->addJson_File, &QPushButton::clicked, this, &Recorder_json::addJson_File);
}

Recorder_json::~Recorder_json()
{
    delete ui;
}

void Recorder_json::addJson_File()
{
    QJsonObject UsertextObject;
    UsertextObject["key"] = ui->userText->toPlainText();
    QJsonArray UsertextArray;
    UsertextArray = mainJson_Object["array"].toArray();
    UsertextArray.append(UsertextObject);
    mainJson_Object["array"] = UsertextArray;

    ui->jsonText->setText(QJsonDocument(mainJson_Object).toJson(QJsonDocument::Indented));

    ui->userText->clear();
}

