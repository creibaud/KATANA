#include "ActionBonus.h"

void ActionBonus::criDeGuerre() {

}

void ActionBonus::daimyo() {

}

void ActionBonus::diversion() {

}

void ActionBonus::geisha() {

}

void ActionBonus::meditation() {

}

void ActionBonus::parade() {
    while (true) {
        try {
            char answer;
            std::cout << "Voulez-vous parer l'attaque ? (O/N) " << std::endl;
            std::cin >> answer;

            if (answer == 'O' || answer == 'o') {
                std::cout << "Vous avez parer l'attaque !" << std::endl;
                break;
            } else if (answer == 'N' || answer == 'n') {
                std::cout << "Vous n'avez pas parer l'attaque !" << std::endl;
                break;
            } else {
                throw std::invalid_argument("Veuillez entrer une reponse valide !");
            }
        } catch (std::invalid_argument& e) {
            std::cerr << e.what() << std::endl;
        }
    }
}

void ActionBonus::ceremonieDuThe() {

}

void ActionBonus::juJitsu() {

}