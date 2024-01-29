#ifndef PERMANENT_CARD_H
#define PERMANENT_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypePermanentCard.h"
#include "Bonus/PermanentBonus.h"

class PermanentCard : public SpecialCard {
    private:
        TypePermanentCard typeName;

    public:
        PermanentCard(const TypePermanentCard typeName);
        std::string getName() override;
        void specialAction() override;
};

#endif // PERMANENT_CARD_H