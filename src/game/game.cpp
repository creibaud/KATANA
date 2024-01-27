#include "game.h"

Game::Game(const int &numPlayers) : numPlayers(numPlayers) {
    for (int i = 0; i < this->numPlayers; i++) {
        std::string name;
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::cin >> name;
        this->players.push_back(Player());
        this->players[i].setName(name);
    }
}

std::vector<Player> Game::getPlayers() {
    return this->players;
}

void Game::giveRoles() {
    std::vector<Role> roles;
    std::vector<Role> Ninja = {NINJA_1, NINJA_2, NINJA_3};

    roles.push_back(SHOGUN);
    roles.push_back(SAMURAI);
    
    for (int i = 2; i < 4; i++) {
        srand(time(NULL));
        int index = rand() % Ninja.size();
        roles.push_back(Ninja[index]);
        Ninja.erase(Ninja.begin() + index);
    }

    if (this->numPlayers >= 5) {
        roles.push_back(RONIN);
    }

    if (this->numPlayers >= 6) {
        roles.push_back(Ninja[0]);
    }

    if (this->numPlayers == 7) {
        roles.push_back(SAMURAI);
    }

    for (int i = 0; i < this->numPlayers; i++) {
        srand(time(NULL));
        int index = rand() % roles.size();
        this->players[i].setRole(roles[index]);
        roles.erase(roles.begin() + index);
    }
}