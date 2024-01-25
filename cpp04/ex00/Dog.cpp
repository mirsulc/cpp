/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:01 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:18:33 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ------------------------------------- CONSTRUCTORS

Dog::Dog() : Animal("Dog")
{
        std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
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
    std::cout << _type << ": ' BARK '" << std::endl;
}

std::string Dog::getType() const
{
    return _type;
}