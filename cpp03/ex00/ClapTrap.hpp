/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:01:10 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 09:11:22 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

#define BOLD "\e[1m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define NC "\033[0m"


class ClapTrap
{
private:

    std::string  _name;
    int     _hitPoints;
    int     _energyPoints;
    int     _attackDemage;

public:

    ClapTrap();
    ClapTrap(std::string nm);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &src);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    int         getHitPoints() const;
    int         getEnergyPoints() const;
    int         getAttackDemage() const;
    void    setName(std::string nm);
    
    void getStatistics(void) const;

};

#endif