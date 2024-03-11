#include "Weapon.hpp"

Weapon::Weapon(){
    std::cout << "Default constructor called for Weapon object." << std::endl;
}

Weapon::Weapon(std::string _type)
    :type(_type){
        std::cout << "Constructor called for Weapon object." << std::endl;
    }

Weapon::~Weapon(){
    std::cout << "Destructor called for Weapon object." << std::endl;
}

const std::string& Weapon::getType(){
    return this->type;
}

void Weapon::setType(std::string type){
    this->type = type;
}