#ifndef ACTION_CARD_H
#define ACTION_CARD_H

#include "../SpecialCard.h"
#include "../../includes/TypeCard/TypeActionCard.h"
#include "Bonus/ActionBonus.h"

class ActionCard : public SpecialCard {
    private:
        TypeActionCard typeName;

    public:
        ActionCard(const TypeActionCard typeName);
        std::string getName() override;
        void specialAction() override;
};

#endif // ACTION_CARD_H