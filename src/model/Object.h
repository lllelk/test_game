//
// Created by Vladislav on 24.07.2024.
//

#ifndef TEST_GAME_OBJECT_H
#define TEST_GAME_OBJECT_H

#include "iostream"

class Object {
private:
    int tag;
    std::string type;
protected:
    int getTag() const;

    void setTag(int tag);

    const std::string &getType() const;

    void setType(const std::string &type);
};


#endif //TEST_GAME_OBJECT_H
