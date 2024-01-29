#include <iostream>
#include <vector>
#include "src/includes/InitCard.h"

int main() {
    std::vector<Card*> cards;

    cards.push_back(Shogun);
    cards.push_back(Samurai);
    cards.push_back(Samurai);
    cards.push_back(NinjaOne);
    cards.push_back(NinjaTwo);
    cards.push_back(NinjaThree);
    cards.push_back(Ronin);

    for (int i = 0; i < 4; i++) {
        cards.push_back(CriDeGuerre);
    }

    for (int i = 0; i < 3; i++) {
        cards.push_back(Daimyo);
    }

    for (int i = 0; i < 5; i++) {
        cards.push_back(Diversion);
    }

    for (int i = 0; i < 6; i++) {
        cards.push_back(Geisha);
    }

    for (int i = 0; i < 3; i++) {
        cards.push_back(Meditation);
    }

    for (int i = 0; i < 15; i++) {
        cards.push_back(Parade);
    }

    for (int i = 0; i < 4; i++) {
        cards.push_back(CeremonieDuThe);
    }

    for (int i = 0; i < 3; i++) {
        cards.push_back(JuJitsu);
    }

    for (int i = 0; i < 3; i++) {
        cards.push_back(AttaqueRapide);
    }

    for (int i = 0; i < 2; i++) {
        cards.push_back(CodeDuBushido);
    }

    for (int i = 0; i < 4; i++) {
        cards.push_back(Armure);
    }

    for (int i = 0; i < 6; i++) {
        cards.push_back(Concentration);
    }

    cards.push_back(Nodachi);
    
    for (int i = 0; i < 2; i++) {
        cards.push_back(Naginata);
    }

    cards.push_back(Nagayari);
    cards.push_back(Tanegashima);
    cards.push_back(Daikyu);

    for (int i = 0; i < 5; i++) {
        cards.push_back(Bo);
    }

    for (int i = 0; i < 4; i++) {
        cards.push_back(Kusarigama);
    }

    cards.push_back(Katana);

    for (int i = 0; i < 3; i++) {
        cards.push_back(Shuriken);
    }

    cards.push_back(Kanabo);

    for (int i = 0; i < 6; i++) {
        cards.push_back(Bokken);
    }

    for (int i = 0; i < 5; i++) {
        cards.push_back(Kiseru);
    }

    cards.push_back(Wakizashi);

    cards.push_back(Hanzo);
    cards.push_back(Ushiwaka);
    cards.push_back(Chiyome);
    cards.push_back(Hideyoshi);
    cards.push_back(Ginchyo);
    cards.push_back(Goemon);
    cards.push_back(Nobunaga);
    cards.push_back(Tomoe);
    cards.push_back(Ieyasu);
    cards.push_back(Benkei);
    cards.push_back(Musashi);
    cards.push_back(Kojiro);

    return 0;
}