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
            hanzo();
            break;
        case TypeCharacterCard::USHIWAKA:
            ushiwaka();
            break;
        case TypeCharacterCard::CHIYOME:
            chiyome();
            break;
        case TypeCharacterCard::HIDEYOSHI:
            hideyoshi();
            break;
        case TypeCharacterCard::GINCHIYO:
            ginchiyo();
            break;
        case TypeCharacterCard::GOEMON:
            goemon();
            break;
        case TypeCharacterCard::NOBUNAGA:
            nobunaga();
            break;
        case TypeCharacterCard::TOMOE:
            tomoe();
            break;
        case TypeCharacterCard::IEYASU:
            ieyasu();
            break;
        case TypeCharacterCard::BENKEI:
            benkei();
            break;
        case TypeCharacterCard::MUSASHI:
            musashi();
            break;
        case TypeCharacterCard::KOJIRO:
            kojiro();
            break;
        default:
            break;
    }
}