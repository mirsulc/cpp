/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:18:55 by msulc             #+#    #+#             */
/*   Updated: 2024/01/24 14:20:04 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

public:

    FragTrap();
    FragTrap(std::string nm);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &src);
    ~FragTrap();

    void highFivesGuys();
    

};



#endif