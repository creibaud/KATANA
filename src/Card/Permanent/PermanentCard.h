#ifndef PERMANENT_CARD_H
#define PERMANENT_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypePermanentCard.h"
#include "Bonus/PermanentBonus.h"

class PermanentCard : public SpecialCard {
    private:
        TypePermanentCard permanent;

    public:
        PermanentCard(const TypePermanentCard &permanent);
        void specialAction() override;
};

#endif // PERMANENT_CARD_H