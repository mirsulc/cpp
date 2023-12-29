/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:48:46 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 11:38:46 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int x;
    std::string name;

    std::cout << "How many zombies would you like to ssseeeeeee......? ";
    while(!(std::cin >> x))
    {
        std::cout << "Must input an integer: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
    }
    std::cout << "And how will we call them? ";
    std::cin >> name;
    std::cout << std::endl;
    Zombie *p = zombieHorde(x, name);
    delete[] p;
    return 0;
}