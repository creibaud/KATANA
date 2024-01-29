#ifndef PERMANENT_CARD_H
#define PERMANENT_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypePermanentCard.h"
#include "Bonus/PermanentBonus.h"

class PermanentCard : public SpecialCard {
    private:
        TypePermanentCard permanentType;
        PermanentBonus bonus;

    public:
        PermanentCard(const TypePermanentCard permanentType);
        std::string getName() override;
        void specialAction() override;
};

#endif // PERMANENT_CARD_H