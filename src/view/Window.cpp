//
// Created by Vladislav on 26.07.2024.
//

#include "Window.h"
Window* Window::window_ = nullptr;

Window::Window() {

}
Window *Window::getInstance() {
    if (window_ == nullptr){
        window_ = new Window();
    }
    return nullptr;
}