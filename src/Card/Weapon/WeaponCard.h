#ifndef WEAPON_CARD_H
#define WEAPON_CARD_H

#include "../../includes/TypeCard/TypeWeaponCard.h"
#include "../Card.h"

class WeaponCard : public Card {
    private:
        TypeWeaponCard typeName;
        int dmg;
        int scope;

    public:
        WeaponCard(const TypeWeaponCard typeName, const int dmg, const int scope);
        std::string getName() override;
        int getDmg() const;
        int getScope() const;
};

#endif // WEAPON_CARD_H