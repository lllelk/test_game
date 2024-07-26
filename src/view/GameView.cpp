//
// Created by Vladislav
//

#include "GameView.h"

GameView::GameView() {
    window->getInstance();
}

const std::map<int, ObjectView *> &GameView::getStackView() const {
    return stack_view;
}

void GameView::setStackView(const std::map<int, ObjectView *> &stackView) {
    stack_view = stackView;
}
