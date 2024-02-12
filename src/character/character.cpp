#include "character.h"

Charater::Charater(CharaterType type, int maxHP) : type(type), maxHP(maxHP) {}

CharaterType Charater::getCharacterType() const
{
    return this->type;
}

std::string Charater::getCharaterName() const
{
    switch (this->type)
    {
    case CharaterType::HANZO:
        return "HANZO";
    case CharaterType::USHIWAKA:
        return "USHIWAKA";
    case CharaterType::CHIYOME:
        return "CHIYOME";
    case CharaterType::HIDEYOSHI:
        return "HIDEYOSHI";
    case CharaterType::GINCHIYO:
        return "GINCHIYO";
    case CharaterType::GOEMON:
        return "GOEMON";
    case CharaterType::NOBUNAGA:
        return "NOBUNAGA";
    case CharaterType::TOMOE:
        return "TOMOE";
    case CharaterType::IEYASU:
        return "IEYASU";
    case CharaterType::BENKEI:
        return "BENKEI";
    case CharaterType::MUSASHI:
        return "MUSASHI";
    case CharaterType::KOJIRO:
        return "KOJIRO";
    default:
        return "Inconnu";
    }
}

int Charater::getMaxHP() const
{
    return this->maxHP;
}