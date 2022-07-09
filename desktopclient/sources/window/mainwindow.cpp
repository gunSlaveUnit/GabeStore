//
// Created by GunSlaveUnit on 09.07.2022.
//

#include "mainwindow.h"

MainWindow::MainWindow() {
    addGameButton.setText(tr("Add a game"));
    addGameButton.setParent(&library);

    centralWidget.addTab(&library, tr("Library"));
    centralWidget.addTab(&store, tr("Store"));

    setCentralWidget(&centralWidget);
}
