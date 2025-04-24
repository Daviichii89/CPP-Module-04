#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal* animals[4];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << "--------------------------------------" << std::endl;

    Animal* dogCopy = new Dog(*(dynamic_cast<Dog*>(animals[0])));
    Animal* catCopy = new Cat(*(dynamic_cast<Cat*>(animals[1])));

    std::cout << "--------------------------------------" << std::endl;

    for (int i = 0; i < 4; ++i) {
        std::cout << animals[i]->getType() << " makes: ";
        animals[i]->makeSound();
    }

    std::cout << "--------------------------------------" << std::endl;

    std::cout << "dogCopy type: " << dogCopy->getType() << " makes: ";
    dogCopy->makeSound();

    std::cout << "catCopy type: " << catCopy->getType() << " makes: ";
    catCopy->makeSound();

    std::cout << "-------------------------------------------------" << std::endl;
    
    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

    delete dogCopy;
    delete catCopy;

    std::cout << "-------------------------------------------------" << std::endl;

    // Animal* animal = new Animal();
    // delete animal;
    // This will cause a compilation error because Animal is an abstract class
    // and cannot be instantiated directly.

    
    return 0;
}