#include "PermanentCard.h"

PermanentCard::PermanentCard(const TypePermanentCard &permanent) 
    : SpecialCard(TypeCard::PERMANENT), permanent(permanent) {
}

void PermanentCard::specialAction() {
    switch (permanent) {
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
    }
}