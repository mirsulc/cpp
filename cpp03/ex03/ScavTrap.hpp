/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:08:12 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 15:43:52 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

public:
    ScavTrap();
    ScavTrap(std::string nm);
    ScavTrap(const ScavTrap &src);
    ScavTrap &operator=(const ScavTrap &src);
    ~ScavTrap();

    void guardGate(void);
    //void scavGetStatistics(void);
    void getStatistics() const;
    void attack(const std::string& target);
};








#endif
