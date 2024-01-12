/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:16:11 by msulc             #+#    #+#             */
/*   Updated: 2024/01/10 11:30:38 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                     _value;
    static const int        _fractBits;
public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed(const int value);
    Fixed(const float value);
    Fixed & operator = (const Fixed &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixedNumber);

#endif
