/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:55 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 15:02:09 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//------------------------------------------------- CONSTRUCTORS

FragTrap::FragTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 5; //100
    this->_attackDamage = 6; //30
    std::cout << BOLD "FragTrap default constructor called" NC << std::endl;
}

FragTrap::FragTrap(std::string nm)
{
    this->_hitPoints = 100;
    this->_energyPoints = 5; //100
    this->_attackDamage = 6; //30
    this->_name = nm;
    std::cout << BOLD "FragTrap name: " << _name << " constructor called" NC << std::endl;
}


FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << BOLD "FragTrap: " << _name << " copy constructor called" NC << std::endl;
    _name = this->getName();
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << BOLD "FragTrap: " << _name << " copy assignment operator called" NC << std::endl;
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;

    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << BOLD "FragTrap " << _name << " destructor called" NC << std::endl;
}

//------------------------------------------------- METHODS

void FragTrap::highFivesGuys()
{
    std::cout << "Gimme high five guys! Says FragTrap " << _name << std::endl;
 }
/*
void FragTrap::getStatistics(void) const
{
    std::cout << this->_name
                            << " has: "
                            << _hitPoints << " Hit Points,"
                            << _energyPoints << " Energy Points and "
                            << _attackDamage << " Attack points."
                            << std::endl;
}*/
