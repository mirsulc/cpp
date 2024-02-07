/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:17:03 by msulc             #+#    #+#             */
/*   Updated: 2024/02/07 11:52:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <bitset>
#include "Data.hpp"

#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define NRM "\033[0m"

#define SP std::cout << std::endl;


class Serializer
{
private:

    Serializer();
    Serializer(Serializer const &src);
    Serializer &operator=(Serializer const &src);
    ~Serializer();
    
public:

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

};

#endif