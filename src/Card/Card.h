#ifndef CARD_H
#define CARD_H

#include <string>
#include <variant>
#include "../includes/TypeCard/TypeCard.h"
#include "../includes/TypeCard/TypeRoleCard.h"
#include "../includes/TypeCard/TypeActionCard.h"
#include "../includes/TypeCard/TypePermanentCard.h"
#include "../includes/TypeCard/TypeCharacterCard.h"
#include "../includes/TypeCard/TypeWeaponCard.h"

using TypeName = std::variant<TypeRoleCard, TypeActionCard, TypePermanentCard, TypeCharacterCard, TypeWeaponCard>;
class Card {
    private:
        TypeCard type;
    
    public:
        Card(const TypeCard type);
        virtual std::string getName();
        TypeCard getType() const;
};

#endif // CARD_H