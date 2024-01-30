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

void Game::display() {
    for (int i = 0; i < this->players.size(); i++) {
        std::cout << this->players[i]->getPseudo() << std::endl;
        std::cout << "Role: " << this->players[i]->getRoleCard().getName() << std::endl;
        std::cout << "Personnage: " << this->players[i]->getCharacterCard().getName() << std::endl;
        std::cout << "HP: " << this->players[i]->HP << std::endl;
        std::cout << "Honor Points: " << this->players[i]->honorPoints << std::endl;
        std::cout << "Deck: " << std::endl;
        for (int j = 0; j < this->players[i]->getDeck().size(); j++) {
            std::cout << "-> " << this->players[i]->getDeck()[j]->getName() << std::endl;
        }
        std::cout << std::endl;
    }
}

Game::~Game() {
    for (int i = 0; i < this->gameCards.size(); i++) {
        delete this->gameCards[i];
    }

    for (int i = 0; i < this->players.size(); i++) {
        delete this->players[i];
    }
}