/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:57:06 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 15:47:06 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
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
    //void getDStatistics() const;
    void getStatistics() const;
    using ScavTrap::attack;
    void setName(std::string nm);
    std::string getName() const;
};







#endif