#include "Zombie.hpp"

int main(){
    Zombie zombie("Derek");
    zombie.announce();

    Zombie *zombie2;
    zombie2 = newZombie("Bear Boy");
    zombie2->announce();

    randomChump("Frackles");

    delete zombie2;
    return 0;
}