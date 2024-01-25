/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:47 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 16:10:15 by msulc            ###   ########.fr       */
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
    delete (_br);
}

// ------------------------------------- METHODS

void Cat::makeSound() const
{
    std::cout << _type << ": ' MEOW '" << std::endl;
}

std::string Cat::getType() const
{
    return _type;
}
void Cat::getIdeas() const
{
    _br->getIdeas();
}