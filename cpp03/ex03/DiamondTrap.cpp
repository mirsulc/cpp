/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:14 by msulc             #+#    #+#             */
/*   Updated: 2024/01/18 14:18:12 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

DiamondTrap::DiamondTrap()
{

    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDemage = FragTrap::_attackDemage;
    std::cout << BOLD "DiamondTrap default constructor called" NC << std::endl;
}

DiamondTrap::DiamondTrap(std::string nm) : ClapTrap(nm + "_clap_name")
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDemage = FragTrap::_attackDemage;
    std::cout << BOLD "DiamondTrap name " << ClapTrap::_name << " constructor called" NC << std::endl;
}
/*
DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    std::cout << BOLD "DiamondTrap " << _name << " copy constructor called" NC << std::endl;
    if (this != &src)
    {
        setName(src.getName());
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
    }
}
*/
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << BOLD "DiamondTrap " << ClapTrap::getName() << " copy assignment operator called" NC << std::endl;
    if (this != &src)
    {
        _name = ClapTrap::getName();
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD "DiamondTrap " << _name << " destructor called" NC << std::endl;
}
