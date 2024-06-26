/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 09:52:43 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    FragTrap a(jmeno);
    a.getStatistics();
    a.highFivesGuys();
    FragTrap b = a;
    b.getStatistics();
    b.setName("Julius");
    b.getStatistics();
    b.highFivesGuys();
    a.attack(b.getName());
    b.takeDamage(a.getAttackDemage());
    ScavTrap o("Caroline");

    
    
    
    return 0;
}