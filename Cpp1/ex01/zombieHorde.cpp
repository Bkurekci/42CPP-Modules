#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* zom = new Zombie[N];

    for(int i = 0;i < N; i++)
        zom[i].setname(name);

    return zom;
} 