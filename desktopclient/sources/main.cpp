#include <QApplication>

#include "window/mainwindow.h"

int main(int argc, char **argv) {
    QApplication desktopClient(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    QApplication::exec();
}
