#ifndef ROLE_CARD_H
#define ROLE_CARD_H

#include "../../includes/TypeCard/TypeRoleCard.h"
#include "../Card.h"

class RoleCard : public Card {
    private:
        TypeRoleCard role;
        int level;
    
    public:
        RoleCard(const TypeRoleCard &role, const int level = -1);
        std::string getName() override;
        TypeRoleCard getRole() const;
};

#endif // ROLE_CARD_H