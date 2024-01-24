/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 16:06:31 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    DiamondTrap a(jmeno);
    //std::cout << "a: " << a.getName() << std::endl;;
    a.getStatistics();
    a.whoAmI();
    a.attack("HisFriend");
    a.highFivesGuys();
    a.guardGate();
    std::cout << std::endl;
    FragTrap f("frag");
    f.getStatistics();
    std::cout << std::endl;
    ScavTrap g("scav");
    g.getStatistics();
    std::cout << std::endl;
    ClapTrap c("Frikulin");
    c.getStatistics();
    std::cout << std::endl;
    DiamondTrap b(a);
    b.setName("Jules");
    b.getStatistics();
    b.whoAmI();
    
    return 0;
}