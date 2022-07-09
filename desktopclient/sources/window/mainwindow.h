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


class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
private:
    /* Window structure */
    QMenuBar menuBar;
    QToolBar toolBar;
    QDockWidget dockWidget;
    QWidget centralWidget;
    QStatusBar statusBar;

    /* Controls */
    QPushButton addGameButton;
};


#endif //DESKTOPCLIENT_MAINWINDOW_H
