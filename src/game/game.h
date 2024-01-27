#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <time.h>
#include "../player/player.h"

class Game {
    private:
        int numPlayers;
        std::vector<Player> players;

    public:
        Game(const int &numPlayers);

        std::vector<Player> getPlayers();

        void giveRoles();
};

#endif // GAME_H