#include "game.h"

Game::Game()
{
    this->roles = new std::vector<Role*>();
    this->characters = new std::vector<Character*>();
    this->cards = std::vector<Card*>();
    this->players = std::vector<Player*>();
    this->indexActualPlayer = 0;
}

// print l'ordre des joueurs
void Game::init()
{
    this->initNbPlayers();
    this->initRoles();
    this->initCharacters();
    this->initCards();
    this->initPlayers();
    system("clear");
}

void Game::initNbPlayers()
{
    std::string userInputStr;
    int userInputInt;

    while (true)
    {
        try
        {
            std::cout << "Enter the number of players (4 to 7): ";
            std::getline(std::cin, userInputStr);

            std::stringstream stream(userInputStr);

            if (!(stream >> userInputInt) || userInputInt < 4 || userInputInt > 7)
            {
                throw std::invalid_argument("Invalid input");
            }
            
            break;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    this->nbPlayers = userInputInt;
}

void Game::initRoles()
{
    this->roles->push_back(new Shogun);
    this->roles->push_back(new Samurai);

    std::vector<Role*> *ninjas = new std::vector<Role*>();
    ninjas->push_back(new NinjaOne);
    ninjas->push_back(new NinjaTwo);
    ninjas->push_back(new NinjaThree);

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(ninjas->begin(), ninjas->end(), g);

    for (int i = 0; i < 2; i++)
    {
        this->roles->push_back(ninjas->back());
        ninjas->pop_back();
    }

    switch (this->nbPlayers)
    {
        case 5:
            this->roles->push_back(new Ronin);
            break;

        case 6:
            this->roles->push_back(new Ronin);
            this->roles->push_back(ninjas->back());
            ninjas->pop_back();
            break;
        case 7:
            this->roles->push_back(new Ronin);
            this->roles->push_back(ninjas->back());
            ninjas->pop_back();
            this->roles->push_back(new Samurai);
            break;
        default:
            break;
    }

    delete ninjas;
    
    std::shuffle(this->roles->begin(), this->roles->end(), g);
}

void Game::initCharacters()
{
    this->characters->push_back(new Hanzo);
    this->characters->push_back(new Ushiwaka);
    this->characters->push_back(new Chiyome);
    this->characters->push_back(new Hideyoshi);
    this->characters->push_back(new Ginchyo);
    this->characters->push_back(new Goemon);
    this->characters->push_back(new Nobunaga);
    this->characters->push_back(new Tomoe);
    this->characters->push_back(new Ieyasu);
    this->characters->push_back(new Benkei);
    this->characters->push_back(new Musashi);
    this->characters->push_back(new Kojiro);

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(this->characters->begin(), this->characters->end(), g);
}

void Game::initCards()
{
    int *nbCopy = new int[25] {
        NB_COPY_CRI_DE_GUERRE,
        NB_COPY_DAIMYO,
        NB_COPY_DIVERSION,
        NB_COPY_GEISHA,
        NB_COPY_MEDITATION,
        NB_COPY_PARADE,
        NB_COPY_CEREMONIE_DU_THE,
        NB_COPY_JU_JITSU,
        NB_COPY_ATTAQUE_RAPIDE,
        NB_COPY_CODE_DU_BUSHIDO,
        NB_COPY_ARMURE,
        NB_COPY_CONCENTRATION,
        NB_COPY_NODACHI,
        NB_COPY_NAGINATA,
        NB_COPY_NAGAYARI,
        NB_COPY_TANEGASHIMA,
        NB_COPY_DAIKYU,
        NB_COPY_BO,
        NB_COPY_KUSARIGAMA,
        NB_COPY_KATANA,
        NB_COPY_SHURIKEN,
        NB_COPY_KANABO,
        NB_COPY_BOKKEN,
        NB_COPY_KISERU,
        NB_COPY_WAKIZASHI
    };

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < nbCopy[i]; j++) {
            switch (i) {
                case 0:
                    this->cards.push_back(new CriDeGuerre);
                    break;
                case 1:
                    this->cards.push_back(new Daimyo);
                    break;
                case 2:
                    this->cards.push_back(new Diversion);
                    break;
                case 3:
                    this->cards.push_back(new Geisha);
                    break;
                case 4:
                    this->cards.push_back(new Meditation);
                    break;
                case 5:
                    this->cards.push_back(new Parade);
                    break;
                case 6:
                    this->cards.push_back(new CeremonieDuThe);
                    break;
                case 7:
                    this->cards.push_back(new JuJitsu);
                    break;
                case 8:
                    this->cards.push_back(new AttaqueRapide);
                    break;
                case 9:
                    this->cards.push_back(new CodeDuBushido);
                    break;
                case 10:
                    this->cards.push_back(new Armure);
                    break;
                case 11:
                    this->cards.push_back(new Concentration);
                    break;
                case 12:
                    this->cards.push_back(new Nodachi);
                    break;
                case 13:
                    this->cards.push_back(new Naginata);
                    break;
                case 14:
                    this->cards.push_back(new Nagayari);
                    break;
                case 15:
                    this->cards.push_back(new Tanegashima);
                    break;
                case 16:
                    this->cards.push_back(new Daikyu);
                    break;
                case 17:
                    this->cards.push_back(new Bo);
                    break;
                case 18:
                    this->cards.push_back(new Kusarigama);
                    break;
                case 19:
                    this->cards.push_back(new Katana);
                    break;
                case 20:
                    this->cards.push_back(new Shuriken);
                    break;
                case 21:
                    this->cards.push_back(new Kanabo);
                    break;
                case 22:
                    this->cards.push_back(new Bokken);
                    break;
                case 23:
                    this->cards.push_back(new Kiseru);
                    break;
                case 24:
                    this->cards.push_back(new Wakizashi);
                    break;
            }
        }
    }

    delete[] nbCopy;

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(this->cards.begin(), this->cards.end(), g);
}

void Game::initPlayers()
{
    for (int i = 0; i < this->nbPlayers; i++) {
        this->players.push_back(new Player(*this->roles->back(), *this->characters->back()));
        this->roles->pop_back();
        this->characters->pop_back();

        std::string userInput;

        std::cout << "Enter the pseudo of player " << i + 1 << ": ";
        std::cin >> userInput;

        this->players.at(i)->setPseudo(userInput);
    }
    delete this->roles;

    for (std::vector<Character*>::iterator it = this->characters->begin(); it != this->characters->end(); it++) {
        delete *it;
    }
    delete this->characters;
    
    int indexShogun = -1;
    for (int i = 0; i < this->nbPlayers; i++) {
        if (this->players.at(i)->getRole().getRoleType() == RoleType::SHOGUN) {
            indexShogun = i;
            break;
        }
    }

    std::rotate(this->players.begin(), this->players.begin() + indexShogun, this->players.end());

    for (int i = 0; i < this->nbPlayers; i++) {
        int nbCard;

        switch (i) {
            case 0:
                nbCard = 4;
                break;
            case 1:
            case 2:
                nbCard = 5;
                break;
            case 3:
            case 4:
                nbCard = 6;
                break;
            case 5:
            case 6:
                nbCard = 7;
                break;
            default:
                break;
        }

        for (int j = 0; j < nbCard; j++) {
            this->players.at(i)->getHand()->push_back(this->cards.back());
            this->cards.pop_back();
        }
    }

    for (std::vector<Player*>::iterator it = this->players.begin(); it != this->players.end(); ++it) {
        if ((*it)->getRole().getRoleType() == RoleType::SHOGUN) {
            (*it)->honorPoints = 5;
        } else if (this->nbPlayers < 6) {
            (*it)->honorPoints = 3;
        } else {
            (*it)->honorPoints = 4;
        }
    }
}

void Game::showTurnCards()
{
    int i = 0;
    while (i < this->nbPlayers) {
        std::cout << this->players.at(i)->getPseudo() << " is " << this->players.at(i)->getRole().getRoleName() << " and has " << this->players.at(i)->getCharacter().getCharacterName() << std::endl;
        std::cout << "His hand is: " << this->players.at(i)->getHand()->size() << std::endl;
        for (std::vector<Card*>::iterator it = this->players.at(i)->getHand()->begin(); it != this->players.at(i)->getHand()->end(); it++) {
            std::cout << (*it)->getCardName() << std::endl;
        }

        std::string userInputStr;

        while (true)
        {
            try
            {
                std::cout << "Have you finished (y/n) ? ";
                std::cin >> userInputStr;

                if (userInputStr != "y" && userInputStr != "n")
                {
                    throw std::invalid_argument("Invalid input");
                }
                
                break;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        if (userInputStr == "y") {
            i++;
        }

        system("clear");
    }
}

void Game::start()
{
    this->showTurnCards();
    
    while (true)
    {
        system("clear");
    }
}