/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:57:06 by msulc             #+#    #+#             */
/*   Updated: 2024/01/22 13:07:02 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
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
    void getDStatistics() const;
    using ScavTrap::attack;
    void setName(std::string nm);
    std::string getName() const;
};







#endif