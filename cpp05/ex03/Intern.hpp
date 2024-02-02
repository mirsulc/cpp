/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 09:34:04 by msulc             #+#    #+#             */
/*   Updated: 2024/02/02 15:32:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define RO "robotomy request"
#define SC "shrubbery request"
#define PP "pardon request"

class Intern
{
private:
    static AForm* _form;
public:
    Intern();
    Intern(const Intern& src);
    Intern &operator=(const Intern& src);
    ~Intern();

    AForm* makeForm(std::string, std::string);
    // class UnknownRequestException : public std::exception {
    //     public:
    //         const virtual char* what() const throw()
    //         {
    //             return ("Invallid Form has been requested....");
    //         }
    // };
};





#endif