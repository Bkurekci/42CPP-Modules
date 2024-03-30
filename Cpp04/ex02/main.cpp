#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

static void testArray()
{
    std::cout<< "---------------------- ARRAY TEST ----------------------" << std::endl;
    const int arraySize = 4;
    Animal *animalArray[arraySize];

    for (int i = 0; i < arraySize / 2; i++)
    {
        animalArray[i] = new Dog();
        std::cout << std::endl;
        animalArray[i + arraySize / 2] = new Cat();
        std::cout << std::endl;
    }

    for(int i = 0; i < arraySize; i++){
        animalArray[i]->makeSound();
    }

    for (int i = 0; i < arraySize; i++)
    {
        delete animalArray[i];
        std::cout << std::endl;
    }
}

int main()
{
    testArray();
    Cat cat;
    Cat cat2;
    cat2 = cat;
    cat2.makeSound();

    return 0;
}