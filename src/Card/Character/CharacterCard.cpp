#include "CharacterCard.h"

CharacterCard::CharacterCard(const TypeCharacterCard &character, const int maxHP) 
    : SpecialCard(TypeCard::CHARACTER), character(character), HP(maxHP), maxHP(maxHP) {
}

void CharacterCard::specialAction() {
    switch (this->character) {
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