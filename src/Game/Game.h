#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "../includes/InitCard.h"

class Game {
    private:
        std::vector<RoleCard*> roleCards;
        std::vector<Card*> gameCards;
        std::vector<CharacterCard*> characterCards;
        int nbPlayers;
        
    public:
        Game();
        void initNbPlayers();
        void initRoleCards();
        void initGameCards();
        void initCharacterCards();

        void addCopyCard(Card* card, int nbCopy);

        std::vector<RoleCard*> getRoleCards();
        std::vector<Card*> getGameCards();
        std::vector<CharacterCard*> getCharacterCards();

        ~Game();
};

#endif // GAME_H