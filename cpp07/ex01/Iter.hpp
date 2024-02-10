/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:18:59 by msulc             #+#    #+#             */
/*   Updated: 2024/02/09 14:13:36 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

#define SP std::cout << "------------------------" << std::endl;
#define BOLD "\033[1m"
#define NRM "\033[0m"

template <typename T> 
void iter(T const *array, unsigned int lenght, void (*f)(T const &))
{
    for (unsigned int i = 0; i < lenght; i++)
    {
        f(array[i]);
    }
}

template <typename T> 
void iter(T *array, unsigned int lenght, void (*f)(T &))
{
    for (unsigned int i = 0; i < lenght; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void multiplyByTwo(T const &i)
{
    std::cout << i * 2 << std::endl;
}

template <typename T>
void printItInUppercase(T const &i)
{
    int x = 0;
    while(i[x] != '\0')
    {
        std::cout << static_cast<char>(std::toupper(i[x]));
        x++;
    }
    std::cout << std::endl;
}
template <typename T>
void printCharInUppercase(T const &i)
{
    std::cout << static_cast<char>(std::toupper(i)) << std::endl;
}

template <typename O>
void printBold(O const &i)
{
    std::cout << BOLD << i << NRM << std::endl;
}

#endif