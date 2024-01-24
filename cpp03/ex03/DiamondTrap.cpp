/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:14 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 16:17:48 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

DiamondTrap::DiamondTrap()
{

    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << BOLD "DiamondTrap default constructor called" NC << std::endl;
}

DiamondTrap::DiamondTrap(std::string nm)
{
    FragTrap temp_frag;
	ScavTrap temp_scav;
    
    _name = nm;
    this->setEnergyPoints(temp_scav.getEnergyPoints());
    this->_hitPoints = temp_frag.getHitPoints();
    _attackDamage = temp_frag.getAttackDamage();
    ClapTrap::_name = nm + "_clap_name";
    std::cout << BOLD "DiamondTrap name " << _name << " constructor called" NC << std::endl;
   
 }

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{

    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    ClapTrap::_name = src._name + "_clap_name";
    std::cout << BOLD "DiamondTrap " << _name << " copy constructor called" NC << std::endl;
    
 
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    _name = src.getName();
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    ClapTrap::_name = src._name + "_clap_name";
    std::cout << BOLD "DiamondTrap " << _name << " copy assignment operator called" NC << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BOLD "DiamondTrap " << _name << " destructor called" NC << std::endl;
}

//------------------------------------------------- METHODS

void DiamondTrap::getStatistics(void) const
{
std::cout << "DiamondTrap " << _name
                            << " has: "
                            << _hitPoints << " Hit Points,"
                            << this->getEnergyPoints() << " Energy Points and "
                            << this->getAttackDamage() << " Attack points."
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
    std::cout << _energyPoints << " " << _attackDamage << " " << _hitPoints << std::endl;
}

