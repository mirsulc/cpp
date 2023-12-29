/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:54:23 by msulc             #+#    #+#             */
/*   Updated: 2023/12/27 15:39:52 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    std::string getName(void);
    void setName(std::string name);
    void anounce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);




#endif