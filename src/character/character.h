#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

enum class CharaterType
{
    HANZO,
    USHIWAKA,
    CHIYOME,
    HIDEYOSHI,
    GINCHIYO,
    GOEMON,
    NOBUNAGA,
    TOMOE,
    IEYASU,
    BENKEI,
    MUSASHI,
    KOJIRO
};

class Charater
{
    private:
        CharaterType type;
        int maxHP;
    
    public:
        Charater(CharaterType type, int maxHP);
        CharaterType getCharacterType() const;
        std::string getCharaterName() const;
        int getMaxHP() const;
};

#endif // CHARACTER_H