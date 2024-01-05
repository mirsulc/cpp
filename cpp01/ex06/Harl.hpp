/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:23:29 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 09:57:40 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
    private:

        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
        typedef  void (Harl::*methodPointer)(void);
};

#endif
