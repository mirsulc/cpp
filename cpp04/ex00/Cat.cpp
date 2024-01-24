#include "Animal.hpp"
#include "Cat.hpp"

// ------------------------------------- CONSTRUCTORS

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)  : Animal(src)
{
    std::cout << "Copy cat constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Deafult cat destructor called" << std::endl;
}

// ------------------------------------- METHODS

void Cat::makeSound() const
{
    std::cout << "' MEOW '" << std::endl;
}

std::string Cat::getType() const
{
    return _type;
}