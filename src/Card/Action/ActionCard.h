#ifndef ACTION_CARD_H
#define ACTION_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypeActionCard.h"
#include "Bonus/ActionBonus.h"

class ActionCard : public SpecialCard {
    private:
        TypeActionCard actionType;
        ActionBonus bonus;

    public:
        ActionCard(const TypeActionCard actionType);
        std::string getName() override;
        TypeActionCard getActionType() const;
        void specialAction() override;
};

#endif // ACTION_CARD_H