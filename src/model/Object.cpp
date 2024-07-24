//
// Created by Vladislav on 24.07.2024.
//

#include "Object.h"

int Object::getTag() const {
    return tag;
}

void Object::setTag(int tag) {
    Object::tag = tag;
}

const std::string &Object::getType() const {
    return type;
}

void Object::setType(const std::string &type) {
    Object::type = type;
}
