#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "../includes/InitCard.h"
#include "../Player/Player.h"

class Game {
    private:
        std::vector<RoleCard*> roleCards;
        std::vector<Card*> gameCards;
        std::vector<CharacterCard*> characterCards;
        int nbPlayers;
        std::vector<Player*> players;
        
    public:
        Game();
        
        void init();
        void initNbPlayers();
        void initRoleCards();
        void initGameCards();
        void initCharacterCards();
        void initPlayers();

        void display();

        ~Game();
};

#endif // GAME_H