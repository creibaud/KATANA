#include "Game.h"

Game::Game() {}

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
    switch (this->nbPlayers) {
        case 4:
            this->roleCards.push_back(new Shogun);
            this->roleCards.push_back(new Samurai);
            break;
        case 5:
        case 6:
            this->roleCards.push_back(new Shogun);
            this->roleCards.push_back(new Samurai);
            this->roleCards.push_back(new Ronin);
            break;
        case 7:
            this->roleCards.push_back(new Shogun);
            this->roleCards.push_back(new Samurai);
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

void Game::addCopyCard(Card* card, int nbCopy) {
    for (int i = 0; i < nbCopy; i++) {
        this->gameCards.push_back(card);
    }
}

std::vector<RoleCard*> Game::getRoleCards() {
    return this->roleCards;
}

std::vector<Card*> Game::getGameCards() {
    return this->gameCards;
}

std::vector<CharacterCard*> Game::getCharacterCards() {
    return this->characterCards;
}