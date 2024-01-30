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
    this->addCopyCard(new CriDeGuerre, NB_COPY_CRI_DE_GUERRE);
    this->addCopyCard(new Daimyo, NB_COPY_DAIMYO);
    this->addCopyCard(new Diversion, NB_COPY_DIVERSION);
    this->addCopyCard(new Geisha, NB_COPY_GEISHA);
    this->addCopyCard(new Meditation, NB_COPY_MEDITATION);
    this->addCopyCard(new Parade, NB_COPY_PARADE);
    this->addCopyCard(new CeremonieDuThe, NB_COPY_CEREMONIE_DU_THE);
    this->addCopyCard(new JuJitsu, NB_COPY_JU_JITSU);

    this->addCopyCard(new AttaqueRapide, NB_COPY_ATTAQUE_RAPIDE);
    this->addCopyCard(new CodeDuBushido, NB_COPY_CODE_DU_BUSHIDO);
    this->addCopyCard(new Armure, NB_COPY_ARMURE);
    this->addCopyCard(new Concentration, NB_COPY_CONCENTRATION);
    
    this->addCopyCard(new Nodachi, NB_COPY_NODACHI);
    this->addCopyCard(new Naginata, NB_COPY_NAGINATA);
    this->addCopyCard(new Nagayari, NB_COPY_NAGAYARI);
    this->addCopyCard(new Tanegashima, NB_COPY_TANEGASHIMA);
    this->addCopyCard(new Daikyu, NB_COPY_DAIKYU);
    this->addCopyCard(new Bo, NB_COPY_BO);
    this->addCopyCard(new Kusarigama, NB_COPY_KUSARIGAMA);
    this->addCopyCard(new Katana, NB_COPY_KATANA);
    this->addCopyCard(new Shuriken, NB_COPY_SHURIKEN);
    this->addCopyCard(new Kanabo, NB_COPY_KANABO);
    this->addCopyCard(new Bokken, NB_COPY_BOKKEN);
    this->addCopyCard(new Kiseru, NB_COPY_KISERU);
    this->addCopyCard(new Wakizashi, NB_COPY_WAKIZASHI);

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

void Game::addCopyCard(Card* card, int nbCopy) {
    for (int i = 0; i < nbCopy; i++) {
        this->gameCards.push_back(card);
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
            std::cout << this->players[i]->getDeck()[j]->getName() << std::endl;
        }
        std::cout << std::endl;
    }
}

Game::~Game() {
    for (int i = 0; i < this->roleCards.size(); i++) {
        delete this->roleCards[i];
    }

    for (int i = 0; i < this->gameCards.size(); i++) {
        delete this->gameCards[i];
    }

    for (int i = 0; i < this->characterCards.size(); i++) {
        delete this->characterCards[i];
    }

    for (int i = 0; i < this->players.size(); i++) {
        delete this->players[i];
    }
}