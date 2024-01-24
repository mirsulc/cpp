/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:18:04 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 09:16:53 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

ClapTrap::ClapTrap()
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDemage = 0;
    std::cout << BOLD "ClapTrap default constructor called" NC << std::endl;
}

ClapTrap::ClapTrap(std::string nm) : _name(nm)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDemage = 0;
    std::cout << BOLD "ClapTrap name constructor called" NC << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << BOLD "ClapTrap copy constructor called" NC << std::endl;
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._hitPoints;
        _attackDemage = src._attackDemage;
    }
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << BOLD "ClapTrap copy assignment operator called" NC << std::endl;
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._hitPoints;
        _attackDemage = src._attackDemage;
    }
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << BOLD "ClapTrap destructor for: " << _name <<" called" NC << std::endl;
}

//------------------------------------------------- METHODS

void ClapTrap::attack(const std::string& target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacked " << target << " who loses " << _attackDemage << " of his Hit Points" << std::endl;
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
    std::cout << "CpalTrap " << _name << " took " << amount << " demage. He feels hurt. He has: " << _hitPoints << " Hit Points left..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints > 0)
    {
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << "'s energy was incresed by: " << amount << " and is now equal to: " << _hitPoints << std::endl;  
        _energyPoints--;
    }
    else
        std::cout << _name << " has no Energy left, so he can't repair himself." << std::endl;
}

void ClapTrap::getStatistics(void) const
{
    std::cout << "ClapTrap " << this->_name
                                    << " has: "
                                    << _hitPoints << " Hit Points,"
                                    << _energyPoints << " Energy Points and "
                                    << _attackDemage << " Attack points."
                                    << std::endl;
}

std::string ClapTrap::getName() const
{
    return _name;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

int ClapTrap::getAttackDemage() const
{
    return _attackDemage;
}

void    ClapTrap::setName(std::string nm)
{
    std::cout << "ClapTrap " << _name << " shall be called: '" << nm << "' from this day until the end of the age." << std::endl;
    _name = nm;
}
