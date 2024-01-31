/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:21:49 by msulc             #+#    #+#             */
/*   Updated: 2024/01/31 13:43:37 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    const int           _sGrade;    //level/grade of a bureaucrat required to sign the form
    const int           _exGrade;   //level/grade of a bureaucrat required to execute the form
    bool                _sSigned;   //status, if the form has/has not be signed
public:
    Form();
    Form(std::string name, int sGrade, int exGrade);
    Form(const Form& src);
    Form &operator=(const Form& src);
    ~Form();

    void beSigned(const Bureaucrat &bureaucrat);
    int getSignGrade(void) const;
    int getExecuteGrade(void) const;
    bool getSignedStatus(void) const;
    std::string getName(void) const;
    class GradeTooHighException : public std::exception {
        public:
            const virtual char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const virtual char* what() const throw();
    };
    class HasBeenSignedException : public std::exception {
        public:
            const virtual char* what() const throw();
    };
    
};

std::ostream &operator << (std::ostream& os, const Form &form); 



#endif