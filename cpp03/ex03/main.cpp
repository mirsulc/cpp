/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 09:10:50 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    DiamondTrap a(jmeno);
    a.getStatistics();
    a.whoAmI();
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
    std::cout << std::endl;
    DiamondTrap d;
    d.getStatistics();
    
    return 0;
}