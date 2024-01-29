#include "PermanentCard.h"

PermanentCard::PermanentCard(const TypePermanentCard permanentType) 
    : SpecialCard(TypeCard::PERMANENT), permanentType(permanentType) {
}

std::string PermanentCard::getName() {
    switch (this->permanentType) {
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
    switch (this->permanentType) {
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