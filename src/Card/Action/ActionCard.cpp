#include "ActionCard.h"

ActionCard::ActionCard(const TypeActionCard actionType) 
    : SpecialCard(TypeCard::ACTION), actionType(actionType) {
}

std::string ActionCard::getName() {
    switch (this->actionType) {
        case TypeActionCard::CRI_DE_GUERRE:
            return "Cri de guerre";
        case TypeActionCard::DAIMYO:
            return "Daimyo";
        case TypeActionCard::DIVERSION:
            return "Diversion";
        case TypeActionCard::GEISHA:
            return "Geisha";
        case TypeActionCard::MEDITATION:
            return "Meditation";
        case TypeActionCard::PARADE:
            return "Parade";
        case TypeActionCard::CEREMONIE_DU_THE:
            return "Ceremonie du the";
        case TypeActionCard::JU_JITSU:
            return "Ju Jitsu";
        default:
            return "Unknown";
    }
}

void ActionCard::specialAction() {
    switch (this->actionType) {
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