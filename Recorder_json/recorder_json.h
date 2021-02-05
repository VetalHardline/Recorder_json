#ifndef RECORDER_JSON_H
#define RECORDER_JSON_H

#include <QMainWindow>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui { class Recorder_json; }
QT_END_NAMESPACE

class Recorder_json : public QMainWindow
{
    Q_OBJECT

public:
    Recorder_json(QWidget *parent = nullptr);
    ~Recorder_json();

    void addJson_File();
    void addJson_Key();
    void clearJson_File();
    void SaveJson_File();
private:
    Ui::Recorder_json *ui;

    QJsonObject mainJson_Object;

    QString _key = "NONAME";
};
#endif // RECORDER_JSON_H
