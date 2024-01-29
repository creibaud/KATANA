#ifndef ROLE_CARD_H
#define ROLE_CARD_H

#include "../../includes/TypeCard/TypeRoleCard.h"
#include "../Card.h"

class RoleCard : public Card {
    private:
        TypeRoleCard typeName;
        int level;
    
    public:
        RoleCard(const TypeRoleCard typeName, const int level = -1);
        std::string getName() override;
};

#endif // ROLE_CARD_H