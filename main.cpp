#include "src/Game/Game.h"

int main() {
    Game game;
    game.initNbPlayers();
    game.initRoleCards();
    game.initGameCards();
    game.initCharacterCards();

    std::vector<RoleCard*> roleCards = game.getRoleCards();
    std::vector<Card*> gameCards = game.getGameCards();
    std::vector<CharacterCard*> characterCards = game.getCharacterCards();

    std::cout << "Role Cards Lenght: " << roleCards.size() << std::endl;
    std::cout << "Game Cards Lenght: " << gameCards.size() << std::endl;
    std::cout << "Character Cards Lenght: " << characterCards.size() << std::endl;

    std::cout << "Role Cards: " << std::endl;
    for (int i = 0; i < roleCards.size(); i++) {
        std::cout << roleCards[i]->getName() << std::endl;
    }

    std::cout << "Game Cards: " << std::endl;
    for (int i = 0; i < gameCards.size(); i++) {
        std::cout << gameCards[i]->getName() << std::endl;
    }

    std::cout << "Character Cards: " << std::endl;
    for (int i = 0; i < characterCards.size(); i++) {
        std::cout << characterCards[i]->getName() << std::endl;
    }
    return 0;
}