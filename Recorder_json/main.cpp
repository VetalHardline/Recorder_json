#include "recorder_json.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Recorder_json w;
    w.show();
    return a.exec();
}
