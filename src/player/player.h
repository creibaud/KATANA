#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "../includes/initRoles.h"
#include "../includes/initCharacters.h"
#include "../includes/initCards.h"

class Player
{
    private:
        std::string pseudo;
        Role &role;
        Character &character;
        std::vector<Card*> hand;
    
    public:
        Player(Role &role, Character &character);
        std::string getPseudo() const;
        Role &getRole() const;
        Character &getCharacter() const;
        std::vector<Card*> getHand() const;
};

#endif // PLAYER_H