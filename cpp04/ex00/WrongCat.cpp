/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:58:48 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:07:23 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)  : WrongAnimal(src)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if(this != &src)
    {
        _type = src._type;
    }
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Deafult WrongCat destructor called" << std::endl;
}

// ------------------------------------- METHODS

void WrongCat::makeSound() const
{
    std::cout << _type << ": ' Bleeeeaaaa '" << std::endl;
}

std::string WrongCat::getType() const
{
    return _type;
}