/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/17 14:39:49 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    ScavTrap a(jmeno);
    a.scavGetStatistics();
    ScavTrap b("Franc");
    b.scavGetStatistics();
    ScavTrap c(a);
    c.scavGetStatistics();
    ScavTrap d;
    d = b;
    d.setName("The only one");
    d.scavGetStatistics();
    std::cout << std::endl;
    a.attack("Some guy");
    b.attack(a.getName());
    a.takeDamage(20);
    d.beRepaired(20);
    a.scavGetStatistics();
    b.scavGetStatistics();
    c.scavGetStatistics();
    d.scavGetStatistics();
    
    
    return 0;
}