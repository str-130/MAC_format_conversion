#include "net_tool.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    net_tool w;
    w.show();
    return a.exec();
}
