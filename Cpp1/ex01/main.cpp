#include "Zombie.hpp"
#include <limits>

int main(){
    int choice;

    while(1){
        std::cout << "How many zombies do you wanna create? \n(Enter 0 for exit.)\n>";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cout << "I don't get it :|" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }
        if(choice < 0)
            std::cout << "R u kidding?" << std::endl;
        else if(choice == 0)
            return 0;
        else
            break;
    }

    Zombie* zombiez = zombieHorde(choice, "Beany");
    
    for(int i = 0;i < choice;i++)
        zombiez[i].announce();
    
    std::cout << "Yup, it iz workin'" << std::endl;

    delete[] zombiez;

    std::cout << "Huh? Where'd they bugger off to?\n Anyways.." << std::endl;

    return 0;
}