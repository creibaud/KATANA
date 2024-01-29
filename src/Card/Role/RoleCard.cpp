#include "RoleCard.h"

RoleCard::RoleCard(const TypeRoleCard &role, const int level) 
    : Card(TypeCard::ROLE), role(role) {
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