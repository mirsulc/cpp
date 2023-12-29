/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:54:23 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 11:38:49 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    std::string getName(void);
    void setName(std::string name);
    void anounce(void);
};

Zombie* zombieHorde(int n, std::string name);
std::string intToString(int x);



#endif