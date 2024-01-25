/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:01 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 16:13:08 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------------- CONSTRUCTORS

Dog::Dog() : Animal("Dog")
{
    _br = new Brain();
    _br->setIdeas(1, "WOOF");
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)  : Animal(src)
{
    
    std::cout << "Copy Dog constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy Dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete(_br);
    std::cout << "Deafult Dog destructor called" << std::endl;
}

// ------------------------------------- METHODS

void Dog::makeSound() const
{
    std::cout << _type << ": ' WOOF '" << std::endl;
}

std::string Dog::getType() const
{
    return _type;
}
void Dog::getIdeas() const
{
    _br->getIdeas();
}