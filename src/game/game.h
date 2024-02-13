#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "../player/player.h"
#include <random>
#include <algorithm>
#include <sstream>

class Game
{
    private:    
        std::vector<Role*> *roles;
        std::vector<Character*> *characters;
        std::vector<Card*> cards;
        std::vector<Player*> players;
        int nbPlayers;

    public:
        Game();
        void init();
        void initNbPlayers();
        void initRoles();
        void initCharacters();
        void initCards();
        void initPlayers();
};

#endif // GAME_H