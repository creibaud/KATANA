#ifndef CHARACTER_CARD_H
#define CHARACTER_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypeCharacterCard.h"
#include "Bonus/CharacterBonus.h"

class CharacterCard : public SpecialCard {
    private:
        TypeCharacterCard character;
        int HP;
        int maxHP;

    public:
        CharacterCard(const TypeCharacterCard &character, const int &maxHP);
        void specialAction() override;
};

#endif // CHARACTER_CARD_H