//
// Created by GunSlaveUnit on 09.07.2022.
//

#include "mainwindow.h"

MainWindow::MainWindow() {
    addGameButton.setText(tr("Add a game"));
    addGameButton.setParent(&centralWidget);

    setCentralWidget(&centralWidget);
}
