/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:48:46 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 10:15:12 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Karel = Zombie("Karel");
    Karel.anounce();
    Zombie Daisy = Zombie("Daisy");
    Daisy.anounce();
    Zombie *p = newZombie("newPointZombie");
    p->anounce();
    randomChump("newRandomZombie");
    delete p;
    return 0;
}