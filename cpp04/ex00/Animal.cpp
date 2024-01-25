/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:28 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:19:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "Type " << _type << " animal constructor" << std::endl;
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
    std::cout << _type << ": ' Animal sound '" <<std::endl;
}