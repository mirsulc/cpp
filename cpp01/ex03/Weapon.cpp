/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:28:05 by msulc             #+#    #+#             */
/*   Updated: 2023/12/29 09:54:48 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
    return;
}

Weapon::~Weapon()
{
    return;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string& Weapon::getType(void)
{
    return this->_type;
}
