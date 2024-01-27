#ifndef ROLE_H
#define ROLE_H

#include <string>

class Role {
    private:
        std::string name;
        int level;

    public:
        Role(const std::string &name = "", const int &level = 0);
        
        std::string getName() const;
        int getLevel() const;
};

#define SHOGUN Role("Shogun")
#define SAMURAI Role("Samurai")
#define NINJA_1 Role("Ninja", 1)
#define NINJA_2 Role("Ninja", 2)
#define NINJA_3 Role("Ninja", 3)
#define RONIN Role("Ronin")

#endif // ROLE_H