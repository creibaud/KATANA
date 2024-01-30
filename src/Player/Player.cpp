#include "Player.h"

Player::Player(const std::string pseudo, const RoleCard &role, const CharacterCard &character) 
    : pseudo(pseudo), role(role), character(character) {
    this->HP = character.getMaxHP();
}

std::string Player::getPseudo() const {
    return this->pseudo;
}

RoleCard Player::getRoleCard() const {
    return this->role;
}

std::vector<Card*> Player::getDeck() const {
    return this->deck;
}

CharacterCard Player::getCharacterCard() const {
    return this->character;
}

void Player::setDeck(std::vector<Card*> deck) {
    this->deck = deck;
}

Player::~Player() {
    for (int i = 0; i < this->deck.size(); i++) {
        delete this->deck[i];
    }
}