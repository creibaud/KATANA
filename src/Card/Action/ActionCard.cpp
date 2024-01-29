#include "ActionCard.h"

ActionCard::ActionCard(const TypeActionCard &action) 
    : SpecialCard(TypeCard::ACTION), action(action) {
}

void ActionCard::specialAction() {
    switch (this->action) {
        case TypeActionCard::CRI_DE_GUERRE:
            criDeGuerre();
            break;
        case TypeActionCard::DAIMYO:
            daimyo();
            break;
        case TypeActionCard::DIVERSION:
            diversion();
            break;
        case TypeActionCard::GEISHA:
            geisha();
            break;
        case TypeActionCard::MEDITATION:
            meditation();
            break;
        case TypeActionCard::PARADE:
            parade();
            break;
        case TypeActionCard::CEREMONIE_DU_THE:
            ceremonieDuThe();
            break;
        case TypeActionCard::JU_JITSU:
            juJitsu();
            break;
        default:
            break;
    }
}