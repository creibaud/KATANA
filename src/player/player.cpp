#include "player.h"

Player::Player(Role &role, Character &character) : role(role), character(character) {
    this->pseudo = "";
    this->HP = this->character.getMaxHP();
    this->honorPoints = 0;
    this->hand = new std::vector<Card*>();
}

void Player::setPseudo(std::string pseudo)
{
    this->pseudo = pseudo;
}

std::string Player::getPseudo() const
{
    return this->pseudo;
}

Role &Player::getRole() const
{
    return this->role;
}

Character &Player::getCharacter() const
{
    return this->character;
}

std::vector<Card*> *Player::getHand() const
{
    return this->hand;
}