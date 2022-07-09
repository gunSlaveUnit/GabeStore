//
// Created by GunSlaveUnit on 09.07.2022.
//

#pragma once

#ifndef DESKTOPCLIENT_MAINWINDOW_H
#define DESKTOPCLIENT_MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include <QDockWidget>
#include <QStatusBar>
#include <QPushButton>

#include "../pages/store.h"
#include "../pages/library.h"


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
private:
    /* Window structure */
    QMenuBar menuBar;
    QToolBar toolBar;
    QDockWidget dockWidget;
    QTabWidget centralWidget;
    QStatusBar statusBar;

    /* Pages */
    Library library;
    Store store;

    /* Controls */
    QPushButton addGameButton;
};


#endif //DESKTOPCLIENT_MAINWINDOW_H
