/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:18:55 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 15:45:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

ScavTrap::ScavTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << BOLD "ScavTrap default constructor called" NC << std::endl;
}

ScavTrap::ScavTrap(std::string nm)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_name = nm;
    std::cout << BOLD "ScavTrap name: " << _name << " constructor called" NC << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << BOLD "ScavTrap: " << _name << " copy constructor called" NC << std::endl;
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << BOLD "ScavTrap: " << _name << " copy assignment operator called" NC << std::endl;
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << BOLD "ScavTrap " << _name << " destructor called" NC << std::endl;
}

//------------------------------------------------- METHODS

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

// void ScavTrap::scavGetStatistics(void)
// {
//     std::cout << this->_name
//                                     << " has: "
//                                     << _hitPoints << " Hit Points,"
//                                     << _energyPoints << " Energy Points and "
//                                     << _attackDamage << " Attack points."
//                                     << std::endl;
// }

void ScavTrap::getStatistics() const
{
   std::cout << this->_name
                        << " has: "
                        << _hitPoints << " Hit Points,"
                        << _energyPoints << " Energy Points and "
                        << _attackDamage << " Attack points."
                        << std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
    if(_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacked " << target << " who loses " << _attackDamage << " of his Hit Points" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " has no Energy left, so he can't attack anyone." << std::endl;
}