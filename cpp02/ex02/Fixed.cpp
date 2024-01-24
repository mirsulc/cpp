/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:36:31 by msulc             #+#    #+#             */
/*   Updated: 2024/01/22 15:00:02 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed() : _value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    //std::cout << "Int constructor called" << std::endl;
    _value = value << _fractBits;
    //this->_value = value * 256; //    je mozna jak tato varianta, tak ta vyse, a to proto, ze 2 na 8(_fractalBits) = 256
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractBits)))
{
    //std::cout << "Float constructor called" << std::endl;
    //this->_value = value * 256;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->_value = src.getRawBits();
}

// ----------------------------------------------------------------------------

Fixed &Fixed::operator = (const Fixed &copy)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_value = copy.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
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

// ----------------------------------------------------------------------------

bool Fixed::operator>(Fixed const &comp)
{
    return(this->getRawBits() > comp.getRawBits());
}

bool Fixed::operator<(Fixed const &comp)
{
    return(this->getRawBits() > comp.getRawBits());
}

bool Fixed::operator>=(Fixed const &comp)
{
    return(this->getRawBits() >= comp.getRawBits());
}

bool Fixed::operator<=(Fixed const &comp)
{
    return(this->getRawBits() <= comp.getRawBits());
}

bool Fixed::operator==(Fixed const &comp)
{
    return(this->getRawBits() == comp.getRawBits());
}

bool Fixed::operator!=(Fixed const &comp)
{
    return(this->getRawBits() != comp.getRawBits());
}
value++
// ----------------------------------------------------------------------------

Fixed Fixed::operator+(Fixed const &comp)
{
    Fixed res;
    res.setRawBits(this->getRawBits() + comp.getRawBits());
    return res;
}
Fixed Fixed::operator-(Fixed const &comp)
{
    Fixed res;
    res.setRawBits(this->getRawBits() - comp.getRawBits());
    return res;
}
Fixed Fixed::operator*(Fixed const &comp)
{
    Fixed res;
    //res.setRawBits(this->getRawBits() * comp.getRawBits());
    res._value = (_value * comp._value) / 256;
    return res;
}
Fixed Fixed::operator/(Fixed const &comp)
{
    if (comp.toFloat() == 0)
		return this->toFloat();
	Fixed res(this->toFloat() / comp.toFloat());
	return res;
}

// ----------------------------------------------------------------------------

Fixed &Fixed::operator++(void) //prefix++
{
    _value++;
    return (*this);
}
Fixed &Fixed::operator--(void) //prefix--
{
    _value--;
    return (*this);
}
Fixed Fixed::operator++(int) // ++postfix
{
    Fixed temp = *this;
	++*this;
	return temp;
}
Fixed Fixed::operator--(int) // --postfix
{
    Fixed temp = *this;
    --*this;
	return temp;
}

// ----------------------------------------------------------------------------

Fixed &Fixed::min(Fixed &v1, Fixed &v2)
{
    return (v1 < v2) ? v1 : v2;
}
Fixed &Fixed::max(Fixed &v1, Fixed &v2)
{
    return (v1 > v2) ? v1 : v2;
}
Fixed const &Fixed::min(Fixed const &v1, Fixed const &v2)
{
    return (v1.getRawBits() < v2.getRawBits()) ? v1 : v2;
}
Fixed const &Fixed::max(Fixed const &v1, Fixed const &v2)
{
    return (v1.getRawBits() > v2.getRawBits()) ? v1 : v2;
}

// ----------------------------------------------------------------------------

std::ostream& operator<<(std::ostream& os, const Fixed& fixedNumber)
{
    os << fixedNumber.toFloat();
	return (os);
}