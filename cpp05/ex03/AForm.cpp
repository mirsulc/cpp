/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:22:28 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 09:21:00 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//-----------------------------------------Constructors

AForm::AForm() : _name("Just some form"), _sGrade(1), _exGrade(1), _sSigned(false)
{
    std::cout << "Default AForm created." << std::endl;
}

AForm::AForm(std::string name, int sGrade, int exGrade) : _name(name), _sGrade(sGrade), _exGrade(exGrade)
{
    if(_sGrade < MAXGRADE || _exGrade < MAXGRADE)
        throw GradeTooHighException();
    else if(_sGrade > MINGRADE || _exGrade > MINGRADE)
        throw GradeTooLowException();
    else
    {
        _sSigned = false;
        std::cout << "New and absolutely necessary AForm: " << _name << " has just been created!" << std::endl;
    } 
}

AForm::AForm(const AForm& src) : _name(src.getName()), _sGrade(src.getSignGrade()), _exGrade(src.getExecuteGrade()), _sSigned(src.getSignedStatus())
{
    std::cout << "Copy of a juicy AForm: " << src.getName() << " has just been made." << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
    if(this != &src)
    {
        _sSigned = src.getSignedStatus();
        std::cout << "Assignment operator for: " << src.getName() << " was called" << std::endl;
        return *this;
    }
    else
        return *this;
}

AForm::~AForm()
{
    std::cout << "The AForm: " << _name << " is no more valid and has just been shredded..." << std::endl;
}

//----------------------------------------------Methods

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if(_sSigned == true)
        throw HasBeenSignedException();
    else if(bureaucrat.getGrade() > _sGrade)
        throw GradeTooHighException();
    else
    {
        _sSigned = true;
        std::cout << "The AForm: " << _name << " has been signed by: " << bureaucrat.getName() << std::endl;
    }
}
void AForm::execute(Bureaucrat const & executor) const
{
    if(_sSigned == false)
        throw HasNotBeenSignedException();
    else if(executor.getGrade() > _sGrade)
        throw GradeTooHighException();
    else
        this->beExecuted();
}
int AForm::getSignGrade(void) const
{
    return _sGrade;
}

int AForm::getExecuteGrade(void) const
{
    return _exGrade;
}

bool AForm::getSignedStatus(void) const
{
    return _sSigned;
}

std::string AForm::getName(void) const
{
    return _name;
}




//----------------------------------------------Exceptions


const char* AForm::GradeTooHighException::what() const throw()
{return BOLD "The grade of the AForm is too high" NRM;}
const char* AForm::GradeTooLowException::what() const throw()
{return BOLD "The grade is the AForm is too low" NRM;}
const char* AForm::HasBeenSignedException::what() const throw()
{return BOLD "The AForm has already been signed" NRM;}
const char* AForm::HasNotBeenSignedException::what() const throw()
{return BOLD "The AForm has not been signed yet" NRM;}

//----------------------------------------------Overloaded operator <<
std::ostream& operator<<(std::ostream & os, const AForm & form)
{
    os << "AForm: " << form.getName() << " has sign grade: " << form.getSignGrade() 
                << ", execution garde: " << form.getExecuteGrade() 
                << " and status: " << form.getSignedStatus() << "." << std::endl;
    return os;
}