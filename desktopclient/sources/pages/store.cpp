//
// Created by GunSlaveUnit on 09.07.2022.
//

#include "store.h"

Store::Store() {
    form.addWidget(&title);
    form.addWidget(&price);
    form.addWidget(&createGameButton);

    createGameButton.setText(tr("Create"));

    setLayout(&form);
}
