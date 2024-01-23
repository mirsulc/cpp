/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:14 by msulc             #+#    #+#             */
/*   Updated: 2024/01/22 13:09:39 by msulc            ###   ########.fr       */
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
    this->_name = nm;
    std::cout << BOLD "DiamondTrap name " << _name << " constructor called" NC << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
        ClapTrap::_name = src._name + "_clap_name";
        std::cout << BOLD "DiamondTrap " << _name << " copy constructor called" NC << std::endl;
    }
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    if (this != &src)
    {
        _name = src.getName();
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
        ClapTrap::_name = src._name + "_clap_name";
        std::cout << BOLD "DiamondTrap " << _name << " copy assignment operator called" NC << std::endl;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD "DiamondTrap " << _name << " destructor called" NC << std::endl;
}

void DiamondTrap::getDStatistics() const
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
    _name = nm;
    ClapTrap::_name = nm + "_clap_name";
}

std::string DiamondTrap::getName() const
{
    return _name;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is: " << _name << " nad my ClapTrap name is: " << ClapTrap::_name << std::endl;
}

