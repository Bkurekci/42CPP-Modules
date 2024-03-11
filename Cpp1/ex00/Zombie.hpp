#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    private:
    std::string name;

    public:
    Zombie(std::string);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie(std::string);
void randomChump(std::string);

#endif