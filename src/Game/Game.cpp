#include "Game.h"

Game::Game() {}

void Game::init() {
    this->initNbPlayers();
    this->initRoleCards();
    this->initGameCards();
    this->initCharacterCards();
    this->initPlayers();
}

void Game::initNbPlayers() {
    while (true) {
        try {
            std::cout << "Nombre de joueurs: ";
            std::cin >> this->nbPlayers;

            if (this->nbPlayers < 4 || this->nbPlayers > 7) {
                throw std::invalid_argument("Le nombre de joueurs doit être compris entre 4 et 7 !");
            }

            break;
        }
        catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

void Game::initRoleCards() {
    this->roleCards.push_back(new Shogun);
    this->roleCards.push_back(new Samurai);

    switch (this->nbPlayers) {
        case 5:
        case 6:
            this->roleCards.push_back(new Ronin);
            break;
        case 7:
            this->roleCards.push_back(new Samurai);
            this->roleCards.push_back(new Ronin);
            break;
        default:
            break;
    }

    if (this->nbPlayers < 6) {
        std::random_device rd;
        std::mt19937 gen(rd());

        std::uniform_int_distribution<int> dis1(0, 2);
        int randomOne = dis1(gen);

        std::uniform_int_distribution<int> dis2(0, 1);
        int randomTwo = dis2(gen);

        switch (randomOne) {
            case 0:
                this->roleCards.push_back(new NinjaOne);

                if (randomTwo == 0) {
                    this->roleCards.push_back(new NinjaTwo);
                }
                else {
                    this->roleCards.push_back(new NinjaThree);
                }
                break;
            case 1:
                this->roleCards.push_back(new NinjaTwo);

                if (randomTwo == 0) {
                    this->roleCards.push_back(new NinjaOne);
                }
                else {
                    this->roleCards.push_back(new NinjaThree);
                }
                break;
            case 2:
                this->roleCards.push_back(new NinjaThree);

                if (randomTwo == 0) {
                    this->roleCards.push_back(new NinjaOne);
                }
                else {
                    this->roleCards.push_back(new NinjaTwo);
                }
                break;
            default:
                break;
        }
    } else {
        this->roleCards.push_back(new NinjaOne);
        this->roleCards.push_back(new NinjaTwo);
        this->roleCards.push_back(new NinjaThree);
    }

    std::shuffle(this->roleCards.begin(), this->roleCards.end(), std::random_device());
}

void Game::initGameCards() {
    for (int i = 0; i < NB_COPY_CRI_DE_GUERRE; i++) {
        this->gameCards.push_back(new CriDeGuerre);
    }

    for (int i = 0; i < NB_COPY_DAIMYO; i++) {
        this->gameCards.push_back(new Daimyo);
    }

    for (int i = 0; i < NB_COPY_DIVERSION; i++) {
        this->gameCards.push_back(new Diversion);
    }

    for (int i = 0; i < NB_COPY_GEISHA; i++) {
        this->gameCards.push_back(new Geisha);
    }

    for (int i = 0; i < NB_COPY_MEDITATION; i++) {
        this->gameCards.push_back(new Meditation);
    }

    for (int i = 0; i < NB_COPY_PARADE; i++) {
        this->gameCards.push_back(new Parade);
    }

    for (int i = 0; i < NB_COPY_CEREMONIE_DU_THE; i++) {
        this->gameCards.push_back(new CeremonieDuThe);
    }

    for (int i = 0; i < NB_COPY_JU_JITSU; i++) {
        this->gameCards.push_back(new JuJitsu);
    }

    for (int i = 0; i < NB_COPY_ATTAQUE_RAPIDE; i++) {
        this->gameCards.push_back(new AttaqueRapide);
    }

    for (int i = 0; i < NB_COPY_CODE_DU_BUSHIDO; i++) {
        this->gameCards.push_back(new CodeDuBushido);
    }

    for (int i = 0; i < NB_COPY_ARMURE; i++) {
        this->gameCards.push_back(new Armure);
    }

    for (int i = 0; i < NB_COPY_CONCENTRATION; i++) {
        this->gameCards.push_back(new Concentration);
    }

    for (int i = 0; i < NB_COPY_NODACHI; i++) {
        this->gameCards.push_back(new Nodachi);
    }

    for (int i = 0; i < NB_COPY_NAGINATA; i++) {
        this->gameCards.push_back(new Naginata);
    }

    for (int i = 0; i < NB_COPY_NAGAYARI; i++) {
        this->gameCards.push_back(new Nagayari);
    }

    for (int i = 0; i < NB_COPY_TANEGASHIMA; i++) {
        this->gameCards.push_back(new Tanegashima);
    }

    for (int i = 0; i < NB_COPY_DAIKYU; i++) {
        this->gameCards.push_back(new Daikyu);
    }

    for (int i = 0; i < NB_COPY_BO; i++) {
        this->gameCards.push_back(new Bo);
    }

    for (int i = 0; i < NB_COPY_KUSARIGAMA; i++) {
        this->gameCards.push_back(new Kusarigama);
    }

    for (int i = 0; i < NB_COPY_KATANA; i++) {
        this->gameCards.push_back(new Katana);
    }

    for (int i = 0; i < NB_COPY_SHURIKEN; i++) {
        this->gameCards.push_back(new Shuriken);
    }

    for (int i = 0; i < NB_COPY_KANABO; i++) {
        this->gameCards.push_back(new Kanabo);
    }

    for (int i = 0; i < NB_COPY_BOKKEN; i++) {
        this->gameCards.push_back(new Bokken);
    }

    for (int i = 0; i < NB_COPY_KISERU; i++) {
        this->gameCards.push_back(new Kiseru);
    }

    for (int i = 0; i < NB_COPY_WAKIZASHI; i++) {
        this->gameCards.push_back(new Wakizashi);
    }

    std::shuffle(this->gameCards.begin(), this->gameCards.end(), std::random_device());
}

void Game::initCharacterCards() {
    this->characterCards.push_back(new Hanzo);
    this->characterCards.push_back(new Ushiwaka);
    this->characterCards.push_back(new Chiyome);
    this->characterCards.push_back(new Hideyoshi);
    this->characterCards.push_back(new Ginchyo);
    this->characterCards.push_back(new Goemon);
    this->characterCards.push_back(new Nobunaga);
    this->characterCards.push_back(new Tomoe);
    this->characterCards.push_back(new Ieyasu);
    this->characterCards.push_back(new Benkei);
    this->characterCards.push_back(new Musashi);
    this->characterCards.push_back(new Kojiro);

    std::shuffle(this->characterCards.begin(), this->characterCards.end(), std::random_device());
}

void Game::initPlayers() {
    for (int i = 0; i < this->nbPlayers; i++) {
        std::string pseudo;
        std::cout << "Pseudo du joueur " << i + 1 << ": ";
        std::cin >> pseudo;

        RoleCard *roleCard = this->roleCards.back();
        this->roleCards.pop_back();

        CharacterCard *characterCard = this->characterCards.back();
        this->characterCards.pop_back();

        this->players.push_back(new Player(pseudo, *roleCard, *characterCard));

        if (this->nbPlayers < 6) {
            if (roleCard->getRoleType() != TypeRoleCard::SHOGUN) {
                this->players[i]->honorPoints = 3;
            }
        } else {
            if (roleCard->getRoleType() != TypeRoleCard::SHOGUN) {
                this->players[i]->honorPoints = 4;
            }
        }

        if (roleCard->getRoleType() == TypeRoleCard::SHOGUN) {
            this->players[i]->honorPoints = 5;
        }
    }
    
    int shogunIndex = -1;
    for (int i = 0; i < this->players.size(); i++) {
        if (this->players[i]->getRoleCard().getRoleType() == TypeRoleCard::SHOGUN) {
            shogunIndex = i;
            break;
        }
    }

    std::vector<Player*> tmpPlayers;
    for (int i = shogunIndex; i < this->players.size(); i++) {
        tmpPlayers.push_back(this->players[i]);
    }

    for (int i = 0; i < shogunIndex; i++) {
        tmpPlayers.push_back(this->players[i]);
    }

    this->players = tmpPlayers;

    for (int i = 0; i < this->players.size(); i++) {
        std::vector<Card*> tmpDeck;
        int nbCards = 0;

        switch (i) {
            case 0:
                nbCards = 4;
                break;
            case 1:
            case 2:
                nbCards = 5;
                break;
            case 3:
            case 4:
                nbCards = 6;
                break;
            case 5:
            case 6:
                nbCards = 7;
                break;
            default:
                break;
        }

        for (int j = 0; j < nbCards; j++) {
            tmpDeck.push_back(this->gameCards.back());
            this->gameCards.pop_back();
        }

        this->players[i]->setDeck(tmpDeck);
    }
}

void Game::recoverGameCards() {
    for (int i = 0; i < this->gameCardsDiscard.size(); i++) {
        this->gameCards.push_back(this->gameCardsDiscard[i]);
    }

    for (int i = 0; i < this->players.size(); i++) {
        this->players[i]->honorPoints -= 1;
    }

    this->gameCardsDiscard.clear();

    std::shuffle(this->gameCards.begin(), this->gameCards.end(), std::random_device());
}

void Game::start() {
    int index = 0;
    while (true) {
        std::cout << "Tour de " << this->players[index]->getPseudo() << std::endl;
        this->turn(this->players[index]);
        std::cout << std::endl;

        index++;
        if (index == this->players.size()) {
            index = 0;
        }
    }
}

void Game::turn(Player *player) {
    this->recoverHP(player);
    this->pickUpCard(player);
    this->playCard(player);
    this->discardCard(player);
}

void Game::recoverHP(Player *player) {
    std::cout << "Phase 1" << std::endl;
    if (player->HP <= 0) {
        player->HP = player->getCharacterCard().getMaxHP();
    }
}

void Game::pickUpCard(Player *player) {
    std::cout << "Phase 2" << std::endl;
    for (int i = 0; i < 2; i++) {
        if (this->gameCards.size() == 0) {
            this->recoverGameCards();
        }

        Card *card = this->gameCards.back();
        this->gameCards.pop_back();

        player->addCardToDeck(card);
    }
}

void Game::playCard(Player *player) {
    std::cout << "Phase 3" << std::endl;

    while (true) {
        try {
            char answer;
            std::cout << "Voulez-vous jouer une carte ? (O/N)" << std::endl;
            std::cin >> answer;

            if (answer != 'O' && answer != 'N') {
                throw std::invalid_argument("La réponse doit être O ou N !");
            }

            if (answer == 'O') {
                this->attackPlayer(player);
            }
            break;

        } catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

void Game::discardCard(Player *player) {
    std::cout << "Phase 4" << std::endl;
    while (player->getDeck().size() > 7) {
        try {
            int index;
            std::cout << "Carte à défausser: " << std::endl;

            for (int i = 0; i < player->getDeck().size(); i++) {
                std::cout << i + 1 << ": " << player->getDeck()[i]->getName() << std::endl;
            }

            std::cin >> index;

            if (index < 1 || index > player->getDeck().size()) {
                throw std::invalid_argument("L'index doit être compris entre 1 et " + player->getDeck().size());
            }

            this->gameCardsDiscard.push_back(player->getDeck()[index - 1]);
            player->removeCardFromDeck(index - 1);
        }
        catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

void Game::attackPlayer(Player *player) {
    std::cout << "Attack" << std::endl;

    int maxAttack = 1;
    int nbAttack = 0;

    while (true) {
        try {
            char answer;
            std::cout << "Voulez-vous attaquer ? (O/N)" << std::endl;
            std::cin >> answer;

            if (answer != 'O' && answer != 'N') {
                throw std::invalid_argument("La réponse doit être O ou N !");
            }

            if (answer == 'O') {
                while (true) {
                    try {
                        int indexCard;
                        std::vector<int> possibleIndexCards;
                        std::cout << "Carte à jouer: " << std::endl;
                        
                        int nbWeapon = 0;
                        for (int i = 0; i < player->getDeck().size(); i++) {
                            if (player->getDeck()[i]->getType() == TypeCard::WEAPON) {
                                std::cout << i + 1 << ": " << player->getDeck()[i]->getName() << std::endl;
                                possibleIndexCards.push_back(i + 1);
                                nbWeapon++;
                            }
                        }

                        if (nbWeapon == 0) {
                            std::cout << "Vous n'avez pas de carte arme !" << std::endl;
                            break;
                        }

                        std::cout << "Numéro de la carte: ";
                        std::cin >> indexCard;

                        if (std::find(possibleIndexCards.begin(), possibleIndexCards.end(), indexCard) == possibleIndexCards.end()) {
                            std::string possibleIndexCardsString = "";
                            for (int i = 0; i < possibleIndexCards.size(); i++) {
                                possibleIndexCardsString += std::to_string(possibleIndexCards[i]);
                                if (i != possibleIndexCards.size() - 1) {
                                    possibleIndexCardsString += ", ";
                                }
                            }
                            throw std::invalid_argument("L'index doit être compris dans " + possibleIndexCardsString);
                        }
                        
                        WeaponCard *weaponCard = dynamic_cast<WeaponCard*>(player->getDeck()[indexCard - 1]);

                        while (true) {
                            try {
                                int indexPlayer;
                                std::vector<int> possibleIndexPlayers;
                                std::cout << "Joueur à attaquer: " << std::endl;
                                
                                for (int i = 0; i < this->players.size(); i++) {
                                    if (this->players[i] != player && !this->players[i]->isDown()) {
                                        std::cout << i + 1 << " " << this->players[i]->getPseudo() << " | HP = " << this->players[i]->HP << " | distance = " << this->calculDistance(player, this->players[i]) << std::endl;
                                        possibleIndexPlayers.push_back(i + 1);
                                    }
                                }
                                
                                std::cout << "Numéro du joueur: ";
                                std::cin >> indexPlayer;

                                if (std::find(possibleIndexPlayers.begin(), possibleIndexPlayers.end(), indexPlayer) == possibleIndexPlayers.end()) {
                                    std::string possibleIndexPlayersString = "";
                                    for (int i = 0; i < possibleIndexPlayers.size(); i++) {
                                        possibleIndexPlayersString += std::to_string(possibleIndexPlayers[i]);
                                        if (i != possibleIndexPlayers.size() - 1) {
                                            possibleIndexPlayersString += ", ";
                                        }
                                    }
                                    throw std::invalid_argument("L'index doit être compris dans " + possibleIndexPlayersString);
                                }
                                
                                if (this->players[indexPlayer - 1] == player) {
                                    throw std::invalid_argument("Vous ne pouvez pas vous attaquer vous-même !");
                                }

                                if (this->calculDistance(player, this->players[indexPlayer - 1]) > weaponCard->getScope()) {
                                    throw std::invalid_argument("La distance entre vous et le joueur est trop grande !");
                                }
                                
                                bool isParade = false;
                                for (int i = 0; i < this->players[indexPlayer - 1]->getDeck().size(); i++) {
                                    if (this->players[indexPlayer - 1]->getDeck()[i]->getType() == TypeCard::ACTION) {
                                        ActionCard *actionCard = dynamic_cast<ActionCard*>(this->players[indexPlayer - 1]->getDeck()[i]);
                                        
                                        if (actionCard->getActionType() == TypeActionCard::PARADE) {
                                            this->gameCardsDiscard.push_back(this->players[indexPlayer - 1]->getDeck()[i]);
                                            this->players[indexPlayer - 1]->removeCardFromDeck(i);
                                            actionCard->specialAction();
                                            delete actionCard;
                                            
                                            isParade = true;

                                            std::cout << "Parade : " << this->players[indexPlayer - 1]->getPseudo() << " a paré l'attaque !" << std::endl;
                                            break;
                                        }

                                        delete actionCard;
                                    }
                                }

                                if (!isParade) {
                                    this->players[indexPlayer - 1]->HP = std::max(this->players[indexPlayer - 1]->HP - weaponCard->getDmg(), 0);
                                }

                                this->gameCardsDiscard.push_back(player->getDeck()[indexCard - 1]);
                                player->removeCardFromDeck(indexCard - 1);
                                delete weaponCard;

                                break;

                            } catch (std::invalid_argument& e) {
                                std::cout << e.what() << std::endl;
                            }
                        }

                        nbAttack++;

                        if (nbAttack == maxAttack) {
                            break;
                        }
                    }
                    catch (std::invalid_argument& e) {
                        std::cout << e.what() << std::endl;
                    }
                }
            }
            break;

        } catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

int Game::calculDistance(Player *player, Player *playerTarget) {
    auto indexPlayer = std::find(this->players.begin(), this->players.end(), player);
    
    bool findPlayerTarget = false;
    int distanceClockwise = 0;
    for (int i = indexPlayer - this->players.begin() + 1; i < this->players.size(); i++) {
        if (!this->players[i]->isDown()) {
            distanceClockwise++;
            if (this->players[i] == playerTarget) {
                findPlayerTarget = true;
                break;
            }
        }
    }

    if (!findPlayerTarget) {
        for (int i = 0; i < indexPlayer - this->players.begin(); i++) {
            if (!this->players[i]->isDown()) {
                distanceClockwise++;
                if (this->players[i] == playerTarget) {
                    findPlayerTarget = true;
                    break;
                }
            }
        }
    }

    findPlayerTarget = false;
    int distanceCounterClockwise = 0;

    for (int i = indexPlayer - this->players.begin() - 1; i >= 0; i--) {
        if (!this->players[i]->isDown()) {
            distanceCounterClockwise++;
            if (this->players[i] == playerTarget) {
                findPlayerTarget = true;
                break;
            }
        }
    }

    if (!findPlayerTarget) {
        for (int i = this->players.size() - 1; i > indexPlayer - this->players.begin(); i--) {
            if (!this->players[i]->isDown()) {
                distanceCounterClockwise++;
                if (this->players[i] == playerTarget) {
                    findPlayerTarget = true;
                    break;
                }
            }
        }
    }

    return std::min(distanceClockwise, distanceCounterClockwise);
}

Game::~Game() {
    for (int i = 0; i < this->gameCards.size(); i++) {
        delete this->gameCards[i];
    }

    for (int i = 0; i < this->players.size(); i++) {
        delete this->players[i];
    }
}