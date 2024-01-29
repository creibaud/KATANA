#ifndef WEAPON_CARD_H
#define WEAPON_CARD_H

#include "../../includes/TypeCard/TypeWeaponCard.h"
#include "../Card.h"

class WeaponCard : public Card {
    private:
        TypeWeaponCard weapon;
        int dmg;
        int scope;

    public:
        WeaponCard(const TypeWeaponCard &_weapon, const int _dmg, const int _scope);
        std::string getName() override;
        TypeWeaponCard getWeapon() const;
        int getDmg() const;
        int getScope() const;
};

#endif // WEAPON_CARD_H