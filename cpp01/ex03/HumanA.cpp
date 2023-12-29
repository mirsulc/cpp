/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:28:16 by msulc             #+#    #+#             */
/*   Updated: 2023/12/29 10:35:00 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


/*
HumanA::HumanA()
{
    return;
}*/

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    return;
}

HumanA::~HumanA()
{
    return;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

