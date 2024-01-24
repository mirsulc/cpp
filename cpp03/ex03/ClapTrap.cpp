/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:18:04 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 15:11:02 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

ClapTrap::ClapTrap()
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << BOLD "ClapTrap default constructor called" NC << std::endl;
}

ClapTrap::ClapTrap(std::string nm) : _name(nm)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << BOLD "ClapTrap " << "energy: " << _energyPoints << " name: " << _name << " constructor called" NC << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    std::cout << BOLD "ClapTrap: " << _name << " copy constructor called" NC << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;

    std::cout << BOLD "ClapTrap: " << _name << " copy assignment operator called" NC << std::endl;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << BOLD "ClapTrap " << _name << " destructor called" NC << std::endl;
}

//------------------------------------------------- METHODS

void ClapTrap::attack(const std::string& target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << _name << " attacked " << target << " who loses " << _attackDamage << " of his Hit Points" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " has no Energy left, so he can't attack anyone." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if(_hitPoints < 0)
        _hitPoints = 0;
    std::cout << _name << " took " << amount << " demage. He feels hurt. He has: " << _hitPoints << " Hit Points left..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints > 0)
    {
        _hitPoints += amount;
        std::cout << _name << "'s energy was incresed by: " << amount << " and is now equal to: " << _hitPoints << std::endl;  
        _energyPoints--;
    }
    else
        std::cout << _name << " has no Energy left, so he can't repair himself." << std::endl;
}

void ClapTrap::setEnergyPoints(unsigned int en)
{
    _energyPoints = en;
}

void ClapTrap::getStatistics(void) const
{
    std::cout << _name
                                    << " has: "
                                    << _hitPoints << " Hit Points,"
                                    << _energyPoints << " Energy Points and "
                                    << _attackDamage << " Attack points."
                                    << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

void    ClapTrap::setName(std::string nm)
{
    std::cout << _name << " shall be called: '" << nm << "' from this day until the end of the age." << std::endl;
    _name = nm;
}
