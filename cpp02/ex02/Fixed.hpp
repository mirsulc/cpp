/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:16:11 by msulc             #+#    #+#             */
/*   Updated: 2024/01/16 13:41:56 by msulc            ###   ########.fr       */
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

    bool operator>(Fixed const &comp);
    bool operator<(Fixed const &comp);
    bool operator>=(Fixed const &comp);
    bool operator<=(Fixed const &comp);
    bool operator==(Fixed const &comp);
    bool operator!=(Fixed const &comp);

    Fixed operator+(Fixed const &comp);
    Fixed operator-(Fixed const &comp);
    Fixed operator*(Fixed const &comp);
    Fixed operator/(Fixed const &comp);

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    
    static Fixed &min(Fixed &v1, Fixed &v2);
    static Fixed &max(Fixed &v1, Fixed &v2);
    static const Fixed &min(Fixed const &v1, Fixed const &v2);
    static const Fixed &max(Fixed const &v1, Fixed const &v2);
    
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixedNumber);

#endif
