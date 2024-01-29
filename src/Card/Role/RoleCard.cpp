#include "RoleCard.h"

RoleCard::RoleCard(const TypeRoleCard &_role, const int _level) 
    : Card(TypeCard::ROLE), role(_role) {
}

std::string RoleCard::getName() {
    switch (this->role) {
        case TypeRoleCard::SHOGUN:
            return "Shogun";
        case TypeRoleCard::SAMURAI:
            return "Samurai";
        case TypeRoleCard::NINJA:
            return "Ninja";
        case TypeRoleCard::RONIN:
            return "Ronin";
        default:
            return "Unknown";
    }
}

TypeRoleCard RoleCard::getRole() const {
    return this->role;
}