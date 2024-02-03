/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:11:51 by msulc             #+#    #+#             */
/*   Updated: 2024/02/03 10:23:04 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = src._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    if(this != &src)
    {
        _target = src._target;
        std::cout << "Assignment operator for: " << src.getName() << " was called" << std::endl;
        return *this;
    }
    else
        return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

//-------------------------------------------Methods

void PresidentialPardonForm::beExecuted(void) const
{
    std::cout << "We'd like to inform '" << _target << "' that he/she has been pardoned by Zaphod Beeblebrox" << std::endl;
}
std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}