#include "player.h"

Player::Player() {
    this->name = "";
    this->role = Role();
}

void Player::setName(const std::string &name) {
    this->name = name;
}

void Player::setRole(const Role &role) {
    this->role = role;
}

std::string Player::getName() const {
    return this->name;
}

std::string Player::getRole() const {
    return this->role.getName();
}