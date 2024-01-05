/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:24:03 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 10:18:28 by msulc            ###   ########.fr       */
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

int levelChecker(std::string str)
{
    int i = 0;
    std::string levels[4] = {"debug", "info", "warning", "error"};
    
    while(i < 4)
    {
        if(str == levels[i])
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main(int ac, char **av)
{
    Harl    harl;
    int     level;

    if(ac != 2)
        return(std::cout << "Wrong number of arguments! [DEBUG/WARNING/INFO/ERROR]" << std::endl, 1);
    std::string command = lowercase(av[1]);
    level = levelChecker(command);
    switch (level)
    {
        case 0:
            harl.complain("debug");
            break;
        case 1:
            harl.complain("info");
            break;
        case 2:
            harl.complain("warning");
            break;
        case 3:
            harl.complain("error");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return 0;
}