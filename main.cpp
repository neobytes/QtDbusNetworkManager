#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QtCore/QCoreApplication>

#include "nwutil.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    NwUtil nu;
    nu.scanWifiAccessPoints();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));



    return app.exec();
}
