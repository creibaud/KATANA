#ifndef PLAYER_H
#define PLAYER_H

#include "../role/role.h"

class Player {
    private:
        std::string name;
        Role role;

    public:
        Player();

        void setName(const std::string &name);
        void setRole(const Role &role);
        
        std::string getName() const;
        std::string getRole() const;
};

#endif // PLAYER_H