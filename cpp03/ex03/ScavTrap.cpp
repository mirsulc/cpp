/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:18:55 by msulc             #+#    #+#             */
/*   Updated: 2024/01/18 14:17:09 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDemage = 20;
    std::cout << BOLD "ScavTrap default constructor called" NC << std::endl;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDemage = 20;
    std::cout << BOLD "ScavTrap name constructor called" NC << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << BOLD "ScavTrap copy constructor called" NC << std::endl;
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
    }
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << BOLD "ScavTrap copy assignment operator called" NC << std::endl;
    if (this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _energyPoints = src._energyPoints;
        _attackDemage = src._attackDemage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << BOLD "ScavTrap destructor called" NC << std::endl;
}

//------------------------------------------------- METHODS

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::scavGetStatistics(void)
{
    std::cout << this->_name
                                    << " has: "
                                    << _hitPoints << " Hit Points,"
                                    << _energyPoints << " Energy Points and "
                                    << _attackDemage << " Attack points."
                                    << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacked " << target << " who loses " << _attackDemage << " of his Hit Points" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " has no Energy left, so he can't attack anyone." << std::endl;
}