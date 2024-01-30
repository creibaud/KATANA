#ifndef CHARACTER_CARD_H
#define CHARACTER_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypeCharacterCard.h"
#include "Bonus/CharacterBonus.h"

class CharacterCard : public SpecialCard {
    private:
        TypeCharacterCard characterType;
        int maxHP;
        CharacterBonus bonus;

    public:
        CharacterCard(const TypeCharacterCard characterType, const int maxHP);
        
        std::string getName() override;
        int getMaxHP() const;

        void specialAction() override;
};

#endif // CHARACTER_CARD_H