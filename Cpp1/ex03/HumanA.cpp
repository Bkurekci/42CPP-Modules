#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    :name(name), weapon(weapon){
        std::cout << "Constructor called for HumanA object." << std::endl;
}

HumanA::~HumanA(){
    std::cout << "Destructor called for HumanA object." << std::endl;
}

void HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}