/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:27:27 by msulc             #+#    #+#             */
/*   Updated: 2023/12/29 10:42:28 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);
};


#endif