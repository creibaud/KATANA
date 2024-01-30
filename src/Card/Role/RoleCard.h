#ifndef ROLE_CARD_H
#define ROLE_CARD_H

#include "../../includes/TypeCard/TypeRoleCard.h"
#include "../Card.h"

class RoleCard : public Card {
    private:
        TypeRoleCard roleType;
        int level;
    
    public:
        RoleCard(const TypeRoleCard roleType, const int level = -1);
        
        std::string getName() override;
        TypeRoleCard getRoleType() const;
};

#endif // ROLE_CARD_H