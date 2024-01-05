/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:24:03 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 12:53:27 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string lowercase(std::string str)
{
    int i = 0;
    std::string res;

    while(str[i])
    {
        res += tolower(str[i]);
        i++;
    }
    return (res);
}

int main(int ac, char **av)
{
    Harl    harl;
    
    if(ac != 2)
        return(std::cerr << "Wrong number of arguments! [DEBUG/INFO/WARNING/ERROR]" << std::endl, 1);
    std::string command = lowercase(av[1]);
    harl.complain(command);
    return 0;
}