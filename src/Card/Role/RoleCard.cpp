#include "RoleCard.h"

RoleCard::RoleCard(const TypeRoleCard roleType, const int level) 
    : Card(TypeCard::ROLE), roleType(roleType) {
}

std::string RoleCard::getName() {
    switch (this->roleType) {
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