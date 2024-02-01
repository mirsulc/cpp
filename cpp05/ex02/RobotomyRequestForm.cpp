/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:11:14 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 15:24:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::_instancies = 0;

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    _target = "default";
    _instancies++;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = target;
    _instancies++;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = src._target;
    _instancies++;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    if(this != &src)
    {
        _target = src._target;
        _instancies++;
        std::cout << "Assignment operator for: " << src.getName() << " was called" << std::endl;
        return *this;
    }
    else
        return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "ROBOTOMY DEFAULT DESTRUCTOR CALLED" <<std::endl;
}

//-------------------------------------------Methods

void RobotomyRequestForm::beExecuted(void) const
{
    SP
    std::cout << "Drilling noises, that are noisy and loud....... ";
    if(_instancies %2 == 0)
        std::cout << "OK, '" << _target << "' has been robotomized" << std::endl;
    else
        std::cout << "Robotomy failed..." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}


void RobotomyRequestForm::getInstancies() const{

    std::cout << "instancies: " << _instancies << std::endl;
}