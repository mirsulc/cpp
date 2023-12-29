/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:06:54 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 11:38:48 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}
/*
Zombie::Zombie(std::string name)
{
    this->setName(name);
    std::cout << "Zombie named: " << this->getName() << " was just creaaattteeeeddd!" << std::endl;
    return;
}*/

void Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string Zombie::getName(void)
{
    return this->_name;
}

void Zombie::anounce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "No brainz to eat.. " << this->getName() << " is dead again!" << std::endl;
    return;
}