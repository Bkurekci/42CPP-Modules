#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Constructor called." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Destructor called for " << this->name << std::endl;
}

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string _name){
    this->name = _name;
}