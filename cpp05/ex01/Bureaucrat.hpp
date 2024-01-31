/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:22 by msulc             #+#    #+#             */
/*   Updated: 2024/01/31 14:04:24 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

#define BOLD "\033[0;1m"
#define RED "\033[0;91m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define NRM "\033[0;39m"

#define RADEK std::cout << std::endl;

#define MAXGRADE 1
#define MINGRADE 150

class Form;

class Bureaucrat
{
private:
    const std::string   _name;
    int        _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat &operator=(const Bureaucrat& src);
    virtual ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void incrementGrade(int points);
    void decrementGrade();
    void decrementGrade(int points);
    void signForm(Form &form) const;    //added for ex01

    class GradeTooHighException : public std::exception {
        public:
            const virtual char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const virtual char* what() const throw();
    };



};


std::ostream &operator << (std::ostream& os, const Bureaucrat &bureaucrat); 





#endif