/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:24:07 by msulc             #+#    #+#             */
/*   Updated: 2024/01/22 12:55:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int     main()
{
    std::string jmeno = "Karel";
    DiamondTrap a(jmeno);
    std::cout << "a: " << a.getName() << std::endl;;
    a.getDStatistics();
    a.whoAmI();
    a.attack("HisFriend");
    a.highFivesGuys();

    DiamondTrap b(a);
    b.setName("Jules");
    b.getDStatistics();
    b.whoAmI();
    
    return 0;
}