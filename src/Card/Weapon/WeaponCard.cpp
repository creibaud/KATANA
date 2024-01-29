#include "WeaponCard.h"

WeaponCard::WeaponCard(const TypeWeaponCard weaponType, const int dmg, const int scope) 
    : Card(TypeCard::WEAPON), weaponType(weaponType), dmg(dmg), scope(scope) {
}

std::string WeaponCard::getName() {
    switch (this->weaponType) {
        case TypeWeaponCard::NODACHI:
            return "Nodachi";
        case TypeWeaponCard::NAGINATA:
            return "Naginata";
        case TypeWeaponCard::NAGAYARI:
            return "Nagayari";
        case TypeWeaponCard::TANEGASHIMA:
            return "Tanegashima";
        case TypeWeaponCard::DAIKYU:
            return "Daikyu";
        case TypeWeaponCard::BO:
            return "Bo";
        case TypeWeaponCard::KUSARIGAMA:
            return "Kusarigama";
        case TypeWeaponCard::KATANA:
            return "Katana";
        case TypeWeaponCard::SHURIKEN:
            return "Shuriken";
        case TypeWeaponCard::KANABO:
            return "Kanabo";
        case TypeWeaponCard::BOKKEN:
            return "Bokken";
        case TypeWeaponCard::KISERU:
            return "Kiseru";
        case TypeWeaponCard::WAKIZASHI:
            return "Wakizashi";
        default:
            return "Unknown";
    }
}

int WeaponCard::getDmg() const {
    return this->dmg;
}

int WeaponCard::getScope() const {
    return this->scope;
}