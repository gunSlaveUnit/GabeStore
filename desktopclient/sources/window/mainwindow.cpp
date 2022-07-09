//
// Created by GunSlaveUnit on 09.07.2022.
//

#include "mainwindow.h"

MainWindow::MainWindow() {
    centralWidget.addTab(&library, tr("Library"));
    centralWidget.addTab(&store, tr("Store"));

    setCentralWidget(&centralWidget);
}
