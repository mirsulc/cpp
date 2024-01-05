/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:23:45 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 10:00:19 by msulc            ###   ########.fr       */
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
    methodPointer mp[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"debug", "info", "warning", "error"};
    while(i < 4)
    {
        if(level == levels[i])
        {
            while(i < 4)
            {
                (this->*mp[i])();
                i++;
            }
            return;
        }
        i++;
    }
}

Harl::~Harl()
{
    
}