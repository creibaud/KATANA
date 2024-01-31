#include "Player.h"

Player::Player(const std::string pseudo, const RoleCard &role, const CharacterCard &character) 
    : pseudo(pseudo), role(role), character(character) {
    this->HP = character.getMaxHP();
}

void Player::setDeck(std::vector<Card*> deck) {
    this->deck = deck;
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

bool Player::isDown() {
    if (this->HP <= 0 || this->deck.size() == 0) {
        return true;
    }

    return false;
}

void Player::addCardToDeck(Card* card) {
    this->deck.push_back(card);
}

void Player::removeCardFromDeck(int index) {
    this->deck.erase(this->deck.begin() + index);
}

Player::~Player() {
    for (int i = 0; i < this->deck.size(); i++) {
        delete this->deck[i];
    }
}