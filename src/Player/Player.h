#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "../Card/Role/RoleCard.h"
#include "../Card/Character/CharacterCard.h"

class Player {
    private:
        std::string pseudo;
        RoleCard role;
        std::vector<Card*> deck;
        CharacterCard character;
    
    public:
        int HP;
        int honorPoints;

        Player(const std::string pseudo, const RoleCard &role, const CharacterCard &character);

        void setDeck(std::vector<Card*> deck);
        
        std::string getPseudo() const;
        RoleCard getRoleCard() const;
        std::vector<Card*> getDeck() const;
        CharacterCard getCharacterCard() const;

        void addCardToDeck(Card* card);
        void removeCardFromDeck(int index);

        ~Player();
};

#endif // PLAYER_H