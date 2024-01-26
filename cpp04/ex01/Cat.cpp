/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:47 by msulc             #+#    #+#             */
/*   Updated: 2024/01/26 11:52:00 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ------------------------------------- CONSTRUCTORS

Cat::Cat() : Animal("Cat")
{
    _br = new Brain();
    _br->setIdeas(10, "meow");
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    _type = src._type;
    _br = new Brain(*src._br);
    std::cout << "Copy cat constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if(this != &src)
    {
        _type = src._type;
        _br = new Brain(*src._br);
        std::cout << "Copy cat assignment operator called" << std::endl;
        return *this;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Deafult cat destructor called" << std::endl;
    delete (_br);
}

// ------------------------------------- METHODS

void Cat::makeSound() const
{
    std::cout << _type << ": ' MEOW '" << std::endl;
}

std::string Cat::getType() const
{
    std::cout << "type of this animal is: " << _type << std::endl;
    return _type;
}
void Cat::getIdeas() const
{
    _br->getIdeas();
}

void Cat::setIdeas(unsigned int i, std::string idea)
{
    _br->setIdeas(i, idea);
}