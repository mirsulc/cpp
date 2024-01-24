/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 09:14:44 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    ClapTrap a(jmeno);
    a.attack("Josef");
    a.beRepaired(10);
    a.takeDamage(15);
    a.setName("Karel the Emperor");
    a.attack("also some other guy");
    ClapTrap b = a;
    ClapTrap c(a);
    c.setName("Little Devil");
    b.setName("I will be the next Emperor");
    c.attack(a.getName());
    a.getStatistics();
    b.getStatistics();
    c.getStatistics();
    
    
    return 0;
}