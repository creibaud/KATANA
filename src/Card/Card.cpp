#include "Card.h"

Card::Card(const TypeCard &_type) 
    : type(_type) {
}

std::string Card::getName() {
    return "Unknown";
}

TypeCard Card::getType() const {
    return this->type;
}