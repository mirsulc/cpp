/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:52:56 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:20:16 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "some animal";
    std::cout << "Default wrong animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string tp)
{
    _type = tp;
    std::cout << "Type " << _type << " wrong animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    if(this != &src)
    {
        *this = src;
    }
    std::cout << "Copy wrong animal constructor called" << std::endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy wrong animal assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Deafult wrong animal destructor called" << std::endl;
}

// ------------------------------------- METHODS

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::setType(std::string &tp)
{
    this->_type = tp;
}

void WrongAnimal::makeSound() const
{
    std::cout << _type << ": ' WrongAnimal sound '" <<std::endl;
}