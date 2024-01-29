#include "Card.h"

Card::Card(const TypeCard type) 
    : type(type) {
}

std::string Card::getName() {
    return "Unknown";
}

TypeCard Card::getType() const {
    return this->type;
}