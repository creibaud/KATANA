#include "role.h"

Role::Role(const std::string &name, const int &level) : name(name), level(level) {}

std::string Role::getName() const {
    return this->name;
}

int Role::getLevel() const {
    return this->level;
}