#include "CharacterCard.h"

CharacterCard::CharacterCard(const TypeCharacterCard characterType, const int maxHP) 
    : SpecialCard(TypeCard::CHARACTER), characterType(characterType), HP(maxHP), maxHP(maxHP) {
}

std::string CharacterCard::getName() {
    switch (this->characterType) {
        case TypeCharacterCard::HANZO:
            return "Hanzo";
        case TypeCharacterCard::USHIWAKA:
            return "Ushiwaka";
        case TypeCharacterCard::CHIYOME:
            return "Chiyome";
        case TypeCharacterCard::HIDEYOSHI:
            return "Hideyoshi";
        case TypeCharacterCard::GINCHIYO:
            return "Ginchiyo";
        case TypeCharacterCard::GOEMON:
            return "Goemon";
        case TypeCharacterCard::NOBUNAGA:
            return "Nobunaga";
        case TypeCharacterCard::TOMOE:
            return "Tomoe";
        case TypeCharacterCard::IEYASU:
            return "Ieyasu";
        case TypeCharacterCard::BENKEI:
            return "Benkei";
        case TypeCharacterCard::MUSASHI:
            return "Musashi";
        case TypeCharacterCard::KOJIRO:
            return "Kojiro";
        default:
            return "Unknown";
    }
}

void CharacterCard::specialAction() {
    switch (this->characterType) {
        case TypeCharacterCard::HANZO:
            this->bonus.hanzo();
            break;
        case TypeCharacterCard::USHIWAKA:
            this->bonus.ushiwaka();
            break;
        case TypeCharacterCard::CHIYOME:
            this->bonus.chiyome();
            break;
        case TypeCharacterCard::HIDEYOSHI:
            this->bonus.hideyoshi();
            break;
        case TypeCharacterCard::GINCHIYO:
            this->bonus.ginchiyo();
            break;
        case TypeCharacterCard::GOEMON:
            this->bonus.goemon();
            break;
        case TypeCharacterCard::NOBUNAGA:
            this->bonus.nobunaga();
            break;
        case TypeCharacterCard::TOMOE:
            this->bonus.tomoe();
            break;
        case TypeCharacterCard::IEYASU:
            this->bonus.ieyasu();
            break;
        case TypeCharacterCard::BENKEI:
            this->bonus.benkei();
            break;
        case TypeCharacterCard::MUSASHI:
            this->bonus.musashi();
            break;
        case TypeCharacterCard::KOJIRO:
            this->bonus.kojiro();
            break;
        default:
            break;
    }
}