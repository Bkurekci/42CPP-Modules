#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
    :name(_name){
    std::cout << "Constructor called for " << this->name << std::endl;
}

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Destructor called." << std::endl;
}