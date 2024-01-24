/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:01:10 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 16:07:36 by msulc            ###   ########.fr       */
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
protected:
        
    std::string  _name;
    unsigned int     _hitPoints;
    unsigned int     _energyPoints;
    unsigned int     _attackDamage;

public:

    ClapTrap();
    ClapTrap(std::string nm);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &src);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setEnergyPoints(unsigned int en);

    std::string getName() const;
    int         getHitPoints() const;
    int         getEnergyPoints() const;
    int         getAttackDamage() const;
    void    setName(std::string nm);
    
    virtual void getStatistics(void) const;

};

#endif