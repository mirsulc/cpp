/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:27:16 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 15:00:52 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA();
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void    attack(void);
};



#endif