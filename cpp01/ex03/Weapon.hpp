/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:26:52 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 10:57:25 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    void    setType(std::string type);
    const std::string& getType(void);

};

#endif