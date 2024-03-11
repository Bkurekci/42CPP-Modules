#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
    :name(_name), weapon(NULL){
        std::cout << "Constructor called for HumanB object." << std::endl;
}

HumanB::~HumanB(){
    std::cout << "Destructor called for HumanB object." << std::endl;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon" << std::endl;
    else
    {
        std::cout << this->name << " attack with his ";
        std::cout << this->weapon->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}