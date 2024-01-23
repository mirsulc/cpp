#include "Animal.hpp"

// ------------------------------------- CONSTRUCTORS

Animal::Animal()
{
    _type = "some animal";
    std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(std::string tp)
{
    _type = tp;
    std::cout << "Type animal constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
    if(this != &src)
    {
        *this = src;
    }
    std::cout << "Copy animal constructor called" << std::endl;

}

Animal &Animal::operator=(const Animal &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy animal assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Deafult animal destructor called" << std::endl;
}

// ------------------------------------- METHODS

std::string Animal::getType() const
{
    return _type;
}

void Animal::setType(std::string &tp)
{
    this->_type = tp;
}

void Animal::makeSound() const
{
    std::cout << "' Animal sound '" <<std::endl;
}