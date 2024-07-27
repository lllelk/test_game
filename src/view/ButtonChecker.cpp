//
// Created by Vladislav on 27.07.2024.
//

#include "ButtonChecker.h"

unsigned int ButtonChecker::checkButton() {
    unsigned int mask;
    enum {
        UpButton = 1 << 0,
        LeftButton = 1 << 1,
        DownButton = 1 << 2,
        RightButton = 1 << 3,
        EscButton = 1 << 4,
    };
    sf::Event event;
    if (event.key.code == sf::Keyboard::A){
        mask |= UpButton;
    }
    if (event.key.code == sf::Keyboard::L){
        mask |= LeftButton;
    }
    if (event.key.code == sf::Keyboard::D){
        mask |= DownButton;
    }
    if (event.key.code == sf::Keyboard::R){
        mask |= RightButton;
    }
    if (event.key.code == sf::Keyboard::Escape){
        mask |= EscButton;
    }
    return mask;
}
