//
// Created by Vladislav on 26.07.2024.
//

#ifndef TEST_GAME_WINDOW_H
#define TEST_GAME_WINDOW_H


class Window {
public:
    Window(Window& other) = delete;
    void operator=(const Window&) = delete;
    static Window* getInstance();
private:
    Window();
    static Window* window_;

};




#endif //TEST_GAME_WINDOW_H
