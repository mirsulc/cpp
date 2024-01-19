/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:14 by msulc             #+#    #+#             */
/*   Updated: 2024/01/19 10:21:22 by msulc            ###   ########.fr       */
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

DiamondTrap::DiamondTrap(std::string nm) : ClapTrap(nm + "....."), ScavTrap(nm), FragTrap(nm)
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDemage = FragTrap::_attackDemage;
    this->_name = nm + "_clap_name";
    std::cout << BOLD "DiamondTrap name " << _name << " constructor called" NC << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
        std::cout << BOLD "DiamondTrap " << _name << " copy constructor called" NC << std::endl;
    }
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
        std::cout << BOLD "DiamondTrap " << ClapTrap::getName() << " copy assignment operator called" NC << std::endl;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD "DiamondTrap " << _name << " destructor called" NC << std::endl;
}

void DiamondTrap::getStatistics()
{
    std::cout << "DiamondTrap " << _name
                            << " has: "
                            << _hitPoints << " Hit Points,"
                            << _energyPoints << " Energy Points and "
                            << _attackDemage << " Attack points."
                            << std::endl;
}

void DiamondTrap::setName(std::string nm)
{
    _name = nm + "_clap_name";
}