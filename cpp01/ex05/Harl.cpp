/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:23:45 by msulc             #+#    #+#             */
/*   Updated: 2024/01/04 15:38:00 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

void Harl::_debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << DEBUG << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << WARNING << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << ERROR << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << INFO << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    void (Harl::*methodPointer[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    while(i < 4)
    {
        if(level == levels[i])
        {
            return (this->*methodPointer[i])();
        }
        i++;
    }

    std::cout << "Harl won't waste his time with you! Try again: [DEBUG/INFO/WARNING/ERROR]" << std::endl;
}

Harl::~Harl()
{
    
}