#include "RoleCard.h"

RoleCard::RoleCard(const TypeRoleCard typeName, const int level) 
    : Card(TypeCard::ROLE), typeName(typeName) {
}

std::string RoleCard::getName() {
    switch (this->typeName) {
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