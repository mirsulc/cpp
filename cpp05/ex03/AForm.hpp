/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:21:49 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 09:37:52 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <ostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    const int           _sGrade;    //level/grade of a bureaucrat required to sign the form
    const int           _exGrade;   //level/grade of a bureaucrat required to execute the form
    bool                _sSigned;   //status, if the form has/has not be signed
    
protected:    
    virtual void beExecuted(void) const = 0;

public:
    AForm();
    AForm(std::string name, int sGrade, int exGrade);
    AForm(const AForm& src);
    AForm &operator=(const AForm& src);
    virtual ~AForm();

    void beSigned(const Bureaucrat &bureaucrat);
    int getSignGrade(void) const;
    int getExecuteGrade(void) const;
    bool getSignedStatus(void) const;
    std::string getName(void) const;
    void execute(Bureaucrat const & executor) const;

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
    class HasNotBeenSignedException : public std::exception {
        public:
            const virtual char* what() const throw();
    };
    
};

std::ostream &operator << (std::ostream& os, const AForm &form); 



#endif