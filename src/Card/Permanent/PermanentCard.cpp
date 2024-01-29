#include "PermanentCard.h"

PermanentCard::PermanentCard(const TypePermanentCard typeName) 
    : SpecialCard(TypeCard::PERMANENT), typeName(typeName) {
}

std::string PermanentCard::getName() {
    switch (this->typeName) {
        case TypePermanentCard::ATTAQUE_RAPIDE:
            return "Attaque rapide";
        case TypePermanentCard::CODE_DU_BUSHIDO:
            return "Code du bushido";
        case TypePermanentCard::ARMURE:
            return "Armure";
        case TypePermanentCard::CONCENTRATION:
            return "Concentration";
        default:
            return "Unknown";
    }
}

void PermanentCard::specialAction() {
    switch (this->typeName) {
        case TypePermanentCard::ATTAQUE_RAPIDE:
            attaqueRapide();
            break;
        case TypePermanentCard::CODE_DU_BUSHIDO:
            codeDuBushido();
            break;
        case TypePermanentCard::ARMURE:
            armure();
            break;
        case TypePermanentCard::CONCENTRATION:
            concentration();
            break;
        default:
            break;
    }
}