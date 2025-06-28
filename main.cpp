#include "mainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    // Enable scaling for HiDPI device
    if (qgetenv("QT_SCALE_FACTOR").isEmpty() &&
        qgetenv("QT_SCREEN_SCALE_FACTORS").isEmpty())
    {
        qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
// High-DPI scaling is always enabled in Qt6. Attribute is deprecated.
// #if QT_VERSION >= QT_VERSION_CHECK(5, 6, 0)
//         QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
// #endif
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
