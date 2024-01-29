#ifndef ACTION_CARD_H
#define ACTION_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypeActionCard.h"
#include "Bonus/ActionBonus.h"

class ActionCard : public SpecialCard {
    private:
        TypeActionCard action;

    public:
        ActionCard(const TypeActionCard &action);
        void specialAction() override;
};

#endif // ACTION_CARD_H