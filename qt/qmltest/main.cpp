#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QStringLiteral>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // ✅ 최신 Qt 스타일
    using namespace Qt::StringLiterals;

    engine.loadFromModule(u"qmltest"_s, u"Main"_s);

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
