/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:18:22 by msulc             #+#    #+#             */
/*   Updated: 2024/01/12 15:10:24 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;
Fixed const c(Fixed(5.05f ) + Fixed( 2 ) );
std::cout << "c+ " << c << std::endl;
Fixed const d(Fixed(5.05f ) - Fixed( 2 ) );
std::cout << "d- " << d << std::endl;

std::cout << c << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}