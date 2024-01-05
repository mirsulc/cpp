/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:28:29 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 10:32:05 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB()
{
    return;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
    return;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::attack(void)
{
    //std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    std::cout << this->_name << " attacks with their ";
	if ( this->_weapon != NULL && this->_weapon->getType() != "" )
		std::cout << this->_weapon->getType() << ".";
	else
		std::cout << "bare fists!";	
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return;
}
