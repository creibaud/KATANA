#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <algorithm>
#include "../includes/InitCard.h"
#include "../Player/Player.h"

class Game {
    private:
        std::vector<RoleCard*> roleCards;
        std::vector<Card*> gameCards;
        std::vector<Card*> gameCardsDiscard;
        std::vector<CharacterCard*> characterCards;
        std::vector<Player*> players;
        int nbPlayers;
        
    public:
        Game();

        void init();
        void initNbPlayers();
        void initRoleCards();
        void initGameCards();
        void initCharacterCards();
        void initPlayers();

        void recoverGameCards();
        
        void start();
        void turn(Player *player);
        void recoverHP(Player *player);
        void pickUpCard(Player *player);
        void playCard(Player *player);
        void discardCard(Player *player);

        ~Game();
};

#endif // GAME_H