/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:57:06 by msulc             #+#    #+#             */
/*   Updated: 2024/01/19 09:04:12 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
private:
    std::string _name;
public:

    DiamondTrap();
    DiamondTrap(std::string nm);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &src);
    ~DiamondTrap();

    void whoAmI();
    void getStatistics();
    using ScavTrap::attack;
    void setName(std::string nm);

};







#endif