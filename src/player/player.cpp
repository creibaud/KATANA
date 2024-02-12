#include "player.h"

Player::Player(Role &role, Character &character) : role(role), character(character) {}

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

std::vector<Card*> Player::getHand() const
{
    return this->hand;
}