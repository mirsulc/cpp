/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:16:11 by msulc             #+#    #+#             */
/*   Updated: 2024/01/09 14:23:02 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int                     _value;
    static const int        _fractBits;
public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed & operator = (const Fixed &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif
