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
    connect(ui->addJson_Key, &QPushButton::clicked, this, &Recorder_json::addJson_Key);
    connect(ui->clearJson_File, &QPushButton::clicked, this, &Recorder_json::clearJson_File);
    connect(ui->SaveJson_File, &QPushButton::clicked, this, &Recorder_json::SaveJson_File);
}

Recorder_json::~Recorder_json()
{
    delete ui;
}

void Recorder_json::addJson_File()
{
    QJsonObject UsertextObject;
    UsertextObject[_key] = ui->userText->toPlainText();
    _key ="NONAME";
    QJsonArray UsertextArray;
    UsertextArray = mainJson_Object["array"].toArray();
    UsertextArray.append(UsertextObject);
    mainJson_Object["array"] = UsertextArray;

    ui->jsonText->setText(QJsonDocument(mainJson_Object).toJson(QJsonDocument::Indented));
    ui->userText->clear();
}

void Recorder_json::addJson_Key()
{
    _key = ui->userText->toPlainText();
    ui->userText->clear();
}

void Recorder_json::SaveJson_File()
{
    QString saveJson = QFileDialog::getSaveFileName(this, tr("Save Json File"), QString(), tr("JSON (*.json)"));
    QFileInfo fileInfo(saveJson);
    QDir::setCurrent(fileInfo.path());
    QFile jsonFile(saveJson);

    if (!jsonFile.open(QIODevice::WriteOnly))
    {
        return;
    }

    jsonFile.write(QJsonDocument(mainJson_Object).toJson(QJsonDocument::Indented));
    jsonFile.close();
}

void Recorder_json::clearJson_File()
{
    mainJson_Object = QJsonObject();
    ui->jsonText->clear();
}


