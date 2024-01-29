#ifndef SPECIAL_CARD_H
#define SPECIAL_CARD_H

#include "Card.h"

class SpecialCard : public Card {
    public:
        SpecialCard(const TypeCard &type);
        virtual void specialAction();
};

#endif // SPECIAL_CARD_H