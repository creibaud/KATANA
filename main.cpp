#include <iostream>
#include "src/game/game.h"

int main() {
    int numPlayers;
    std::cout << "Enter the number of players: ";
    std::cin >> numPlayers;

    Game game(numPlayers);
    game.giveRoles();

    std::vector<Player> players = game.getPlayers();

    for (int i = 0; i < numPlayers; i++) {
        std::cout << players[i].getName() << " is a " << players[i].getRole() << std::endl;
    }

    return 0;
}