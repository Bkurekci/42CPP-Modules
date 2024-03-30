#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    Animal::type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    if(this != &copy){
        Animal::type = copy.type;
        delete this->brain;
        this->brain = new Brain(*copy.brain);
    }
    return (*this);
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }

Brain *Dog::getBrain() const { return this->brain; }

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}