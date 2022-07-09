//
// Created by GunSlaveUnit on 09.07.2022.
//

#pragma once

#ifndef DESKTOPCLIENT_STORE_H
#define DESKTOPCLIENT_STORE_H


#include <QWidget>
#include <QVector>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class Store : public QWidget {
    Q_OBJECT
public:
    Store();
private:
    QVector<QLabel> gameTitles;

    QVBoxLayout form;
    QLineEdit title;
    QLineEdit price;

    QPushButton createGameButton;
};


#endif //DESKTOPCLIENT_STORE_H
