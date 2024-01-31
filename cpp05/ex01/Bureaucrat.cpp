/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:58:38 by msulc             #+#    #+#             */
/*   Updated: 2024/01/31 13:47:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//----------------------------------Constructors & Destructors

Bureaucrat::Bureaucrat() : _name("Def_Bur"), _grade(MINGRADE)
{
    std::cout << "Default Bureaucrat " << _name << " with grade: " << _grade << " was just created. Thank the Almighty!" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if(grade > MINGRADE)
        throw GradeTooLowException();
    else if(grade < MAXGRADE)
        throw GradeTooHighException();
    else
    {
        _grade = grade;
        std::cout << "Amazing new Bureaucrat " << _name << " with grade: " << _grade << " was just created. Hallelujah!" << std::endl;
    }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade())
{
    std::cout << "A copy of Bureaucrat " << _name << " was just created with the grade of: " << _grade << "." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if(this != &src)
    {

        _grade = src._grade;
        std::cout << "Copy Bureaucrat " << src.getName() << " assignment operator called" << std::endl;
        return *this;
    }
    else
        return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Our dear Bureaucrat " << _name << " has just passed away and is now playing his bureaucratic games with angels... R.I.P" << std::endl;
    return;
}

//---------------------------------------Methods

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    this->incrementGrade(1);
}

void Bureaucrat::incrementGrade(int points)
{
    if(_grade - points < 1)
        throw GradeTooHighException();
    else
    {
        _grade -= points;
        std::cout << "The grade of Bureaucrat " << _name << " after increassing is " << _grade;
        if(points > 0)
            std::cout  << ". He made it! Good boy :)";
        std::cout << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    this->decrementGrade(1) ;
}

void Bureaucrat::decrementGrade(int points)
{
    if(_grade + points > 150)
        throw GradeTooLowException();
    else
    {
        _grade += points;
        std::cout << "The grade of Bureaucrat " << _name << " after decreassing is " << _grade;
        if(points > 0)
            std::cout <<". We feel sorry for him :(";
        std::cout << std::endl;;
    }
    
}

void Bureaucrat::signForm(Form& form) const
{
    if(form.getSignGrade() < _grade)       // mel bych to predelat na try - catch   rovnou be signed bez if
        throw GradeTooLowException();
    else
    {
        form.beSigned(*this);
        std::cout << "Bureaucrat: " << _name << " signed: " << form.getName() << std::endl;
    }
}

//-------------------------------------Exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw()
{return "The grade is too high";}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{return "The grade is too low";}

//--------------------------------------Overloaded Operator

std::ostream& operator<<(std::ostream & os, const Bureaucrat & bureaucrat)
{
    os << "Bureaucrat " << bureaucrat.getName() << " has grade: " << bureaucrat.getGrade() << "." << std::endl;
    return os;
}