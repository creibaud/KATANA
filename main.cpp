#include "src/Game/Game.h"

int main() {
    Game *game = new Game();
    game->init();
    game->display();
    delete game;

    return 0;
}