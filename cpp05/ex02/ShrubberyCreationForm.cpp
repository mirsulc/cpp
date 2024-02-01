/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:47:34 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 15:43:39 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    _target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm("ShrubberyCreationForm", 145, 137)
{
    _target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

//-------------------------------------------Methods

void ShrubberyCreationForm::beExecuted(void) const
{
    std::string fName = this->getTarget() + "_shrubbery";
    const char *fileName = fName.c_str();
    std::fstream fs;
    fs.open (fileName, std::fstream::in | std::fstream::out | std::fstream::app);
    fs << " more lorem ipsum";
    fs.close();
    
}
std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}