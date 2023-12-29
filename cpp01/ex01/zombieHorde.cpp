/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:26:31 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 11:38:45 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string intToString(int x)
{
       std::string r;
       std::stringstream str;

       str << x;
       r = str.str();

       return r;

}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    std::string num;
    
    for(int i = 0; i < N; i++)
    {
        num = name + " " + intToString(i + 1);
        horde[i].setName(num);
        horde[i].anounce();
    }
    return horde;
}