/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:44:46 by msulc             #+#    #+#             */
/*   Updated: 2024/02/07 13:47:23 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data* ptr = new Data;               //vytvarime novy pointer na strukturu Data
    ptr->n = 42;
    ptr->str = "Hello, World!";
    SP
    std::cout << "Address of the original pointer is: '" BOLD << ptr << NRM "' and the variables are - int: '" 
            << ptr->n << "' and string: '" << ptr->str << "'" << std::endl;
    uintptr_t raw = Serializer::serialize(ptr); //vytvarime novou promennou uintptr_t a do ni ukladame adresu pointeru na strukturu Data
    std::cout << "uintptr_t value of raw '" << raw << "'"<< std::endl;

    Data* ptr2 = Serializer::deserialize(raw);  //vytvarime novy pointer na strukturu Data a do nej ukladame adresu pointeru
                                                // na strukturu Data po prevedeni na/z uintptr_t
    SP
    std::cout << "Address of the pointer after casting back into Data*: '" BOLD << ptr2 << NRM "' and the variables are - int: '" 
            << ptr2->n << "' and string: '" << ptr2->str << "'" << std::endl;
    std::cout << "Both addresses should be the same:" << std::endl;
    SP
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "ptr2: " << ptr2 << std::endl;

    SP
    uintptr_t raw2 = Serializer::serialize(ptr2);       //pro zajimavost vytvarima novou uintptr_t promennou, 
                                                        //do ni ukladame precastovanou adresu ptr2 a vypisujeme ji. raw a raw2 by mely byt stejne...
    std::cout << "uintptr_t value of raw: '" << raw << "'"<< std::endl;
    std::cout << "uintptr_t value of raw2: '" << raw2 << "'"<< std::endl;
    SP
    std::cout << "Just for fun, here is data binary representation of 'raw': "  << std::bitset<64>(raw) << std::endl;
    delete ptr;
    return 0;
}