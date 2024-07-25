//
// Created by Vladislav on 24.07.2024.
//

#ifndef TEST_GAME_OBJECT_H
#define TEST_GAME_OBJECT_H

#include "iostream"

class Object {
public:
    Object();
private:
    ///значение для соединение с view
    int tag;
    ///значение для определение типа объекта
    std::string type;
protected:
    int getTag() const;

    void setTag(int tag);

    const std::string &getType() const;

    void setType(const std::string &type);
};


#endif //TEST_GAME_OBJECT_H
