#include "Animal.hpp"
#include "Dog.hpp"

// ------------------------------------- CONSTRUCTORS

Dog::Dog() : Animal("Dog")
{
        std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(const Dog&) : Animal("Dog")
{
    std::cout << "Copy dog constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Deafult dog destructor called" << std::endl;
}

// ------------------------------------- METHODS

void Dog::makeSound() const
{
    std::cout << "' BARK '" << std::endl;
}

std::string Dog::getType() const
{
    return _type;
}