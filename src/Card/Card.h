#ifndef CARD_H
#define CARD_H

#include <string>
#include "../includes/TypeCard/TypeCard.h"

class Card {
    private:
        TypeCard type;
    
    public:
        Card(const TypeCard &type);
        virtual std::string getName();
        TypeCard getType() const;
};

#endif // CARD_H