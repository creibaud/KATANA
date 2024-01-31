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

TypeActionCard ActionCard::getActionType() const {
    return this->actionType;
}

void ActionCard::specialAction() {
    switch (this->actionType) {
        case TypeActionCard::CRI_DE_GUERRE:
            this->bonus.criDeGuerre();
            break;
        case TypeActionCard::DAIMYO:
            this->bonus.daimyo();
            break;
        case TypeActionCard::DIVERSION:
            this->bonus.diversion();
            break;
        case TypeActionCard::GEISHA:
            this->bonus.geisha();
            break;
        case TypeActionCard::MEDITATION:
            this->bonus.meditation();
            break;
        case TypeActionCard::PARADE:
            this->bonus.parade();
            break;
        case TypeActionCard::CEREMONIE_DU_THE:
            this->bonus.ceremonieDuThe();
            break;
        case TypeActionCard::JU_JITSU:
            this->bonus.juJitsu();
            break;
        default:
            break;
    }
}