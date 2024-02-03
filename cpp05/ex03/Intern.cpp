/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:00:04 by msulc             #+#    #+#             */
/*   Updated: 2024/02/03 10:30:16 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm* Intern::_form = NULL;
Intern::Intern()
{
    std::cout << "Default Intern Constructor called. Give him something to do..." << std::endl;
}
Intern::Intern(const Intern& src)
{
    *this = src;
    std::cout << "Intern copy constructor called ..........";
}
Intern& Intern::operator=(const Intern& src)
{
    (void)src;
    return *this;
}
Intern::~Intern()
{
    std::cout << BOLD "Intern destructor called." NRM << std::endl;
    if(_form == NULL)
      return;
    else
      delete _form;
}

//-----------------------------------------------Methods

AForm* Intern::makeForm(std::string request, std::string target)
{
    std::string requ[3] = {"shrubbery request", "robotomy request", "pardon request"};
    for (int i = 0; i < 3; i++)
    {
        if(request == requ[i])
        {
            switch (i)
            {
                case 0:
                    _form = new ShrubberyCreationForm(target);
                    break;
                case 1:
                    _form = new RobotomyRequestForm(target);
                    break;
                default:
                    _form = new PresidentialPardonForm(target);
                    break;
            }
            break;
        }
        else
            continue;
    }
        
    // int req = 3;
    // if(request == SC)
    //     req = 0;
    // else if(request == RO)
    //     req = 1;
    // else if(request == PP)
    //     req = 2;

    // switch (req)
    // {
    // case 0:
    //     _form = new ShrubberyCreationForm(target);
    //     break;
    // case 1:
    //     _form = new RobotomyRequestForm(target);
    //     break;
    // case 2:
    //     _form = new PresidentialPardonForm(target);
    //     break;
    // default:
    //     _form = NULL;
    //     break;
    // }
    return _form;
}