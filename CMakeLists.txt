cmake_minimum_required(VERSION 3.28)
project(test_game)

set(CMAKE_CXX_STANDARD 26)

# Установить путь к SFML
set(SFML_DIR ${CMAKE_SOURCE_DIR}/include/SFML/lib/cmake/SFML)

# Добавить исполняемый файл для проекта
add_executable(test_game src/main.cpp
        src/view/a.cpp
        src/view/a.h
        src/controller/MainController.cpp
        src/controller/MainController.h
        src/model/Object.h
        src/model/Object.cpp
        src/model/GameObject/GameObject.h
        src/model/GameObject/GameObject.cpp
        src/model/GameObject/Sprite/Sprite.h
        src/model/GameObject/Sprite/Sprite.cpp)

# Найти и подключить компоненты SFML
find_package(SFML COMPONENTS graphics audio REQUIRED)

# Подключить библиотеки SFML к исполняемому файлу
target_link_libraries(test_game PRIVATE sfml-graphics sfml-audio)