#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = " \"Some animalistic ideas\" ";
    }
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain& copy) {
    if(this != &copy){
        for (size_t i = 0; i < 100; i++) {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}