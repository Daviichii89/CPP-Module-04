#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type) {
    std::cout << "Animal defined constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::setType(const std::string &type) {
    this->type = type;
}

void Animal::makeSound() const {
    std::cout << "* Generic animal sound *" << std::endl;
}