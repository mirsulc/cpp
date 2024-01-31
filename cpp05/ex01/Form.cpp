/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:22:28 by msulc             #+#    #+#             */
/*   Updated: 2024/01/31 13:49:57 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//-----------------------------------------Constructors

Form::Form() : _name("Just some form"), _sGrade(1), _exGrade(1), _sSigned(false)
{
    std::cout << "Default Form created." << std::endl;
}

Form::Form(std::string name, int sGrade, int exGrade) : _name(name), _sGrade(sGrade), _exGrade(exGrade)
{
    if(_sGrade < MAXGRADE || _exGrade < MAXGRADE)
        throw GradeTooHighException();
    else if(_sGrade > MINGRADE || _exGrade > MINGRADE)
        throw GradeTooLowException();
    else
    {
        _sSigned = false;
        std::cout << "New and absolutely necessary Form: " << _name << " has just been created!" << std::endl;
    } 
}

Form::Form(const Form& src) : _name(src.getName()), _sGrade(src.getSignGrade()), _exGrade(src.getExecuteGrade()), _sSigned(src.getSignedStatus())
{
    std::cout << "Copy of a juicy Form: " << src.getName() << " has just been made." << std::endl;
}

Form &Form::operator=(const Form &src)
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

Form::~Form()
{
    std::cout << "The Form: " << _name << " is no more valid and has just been shredded..." << std::endl;
}

//----------------------------------------------Methods

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if(_sSigned == true)
        throw HasBeenSignedException();
    else if(bureaucrat.getGrade() > _sGrade)
        throw GradeTooHighException();
    else
    {
        _sSigned = true;
        std::cout << "The Form: " << _name << " has been signed by: " << bureaucrat.getName() << std::endl;
    }
}
int Form::getSignGrade(void) const
{
    return _sGrade;
}

int Form::getExecuteGrade(void) const
{
    return _exGrade;
}

bool Form::getSignedStatus(void) const
{
    return _sSigned;
}

std::string Form::getName(void) const
{
    return _name;
}




//----------------------------------------------Exceptions


const char* Form::GradeTooHighException::what() const throw()
{return BOLD "The grade of the Form is too high" NRM;}
const char* Form::GradeTooLowException::what() const throw()
{return BOLD "The grade is the Form is too low?" NRM;}
const char* Form::HasBeenSignedException::what() const throw()
{return BOLD "The Form has already been signed" NRM;}

//----------------------------------------------Overloaded operator <<
std::ostream& operator<<(std::ostream & os, const Form & form)
{
    os << "Form: " << form.getName() << " has sign grade: " << form.getSignGrade() 
                << ", execution garde: " << form.getExecuteGrade() 
                << " and status: " << form.getSignedStatus() << "." << std::endl;
    return os;
}