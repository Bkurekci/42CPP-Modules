#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
    private:
    std::string name;

    public:
    Zombie();
    ~Zombie();
    void setname(std::string);
    void announce(void);
};

Zombie *zombieHorde(int, std::string);

#endif