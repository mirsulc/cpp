/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:36:31 by msulc             #+#    #+#             */
/*   Updated: 2024/01/22 14:46:08 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractBits;
    //this->_value = value * 256; //    je mozna jak tato varianta, tak ta vyse, a to proto, ze 2 na 8(_fractalBits) = 256
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractBits)))
{
    std::cout << "Float constructor called" << std::endl;
    //this->_value = value * 256;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = src.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_value = copy.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

int	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fractBits);	
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << _fractBits));
    //return ((float)this->_value / 256);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixedNumber)
{
    os << fixedNumber.toFloat();
	return (os);
}