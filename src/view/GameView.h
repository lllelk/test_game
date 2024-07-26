//
// Created by Vladislav
//

#ifndef TEST_GAME_GAMEVIEW_H
#define TEST_GAME_GAMEVIEW_H

#include <map>
#include "ObjectView.h"
#include "Window.h"
class GameView {
public:
    GameView();

    const std::map<int, ObjectView *> &getStackView() const;
    void setStackView(const std::map<int, ObjectView *> &stackView);

private:
    std::map<int, ObjectView *> stack_view;
    Window* window;
};

#endif //TEST_GAME_GAMEVIEW_H
