#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *dog = new Dog();
        const Animal *cat = new Cat();
        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        cat->makeSound();
        dog->makeSound();
        meta->makeSound();

        delete meta;
        delete dog;
        delete cat;
    }

    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        cat->makeSound();
        meta->makeSound();
        delete meta;
        delete cat;            
    }

    return 0;
}