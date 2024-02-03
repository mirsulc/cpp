/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:00 by msulc             #+#    #+#             */
/*   Updated: 2024/02/03 13:50:17 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::string re;
    std::string ta;
    std::cout << "Enter the request: [robotomy request] / [shrubbery request] / [pardon request]" << std::endl;
    while(re.empty())
        std::getline(std::cin, re);
    std::cout << "Enter the target:" << std::endl;
    while(ta.empty())
        std::getline(std::cin, ta);
    std::cout << "--------------creating an instance of Intern-------------" << std::endl;
    Intern test;
    SP
    std::cout << "--------------creating of a new instance of AForm-------------" << std::endl;
    AForm *f = test.makeForm(re, ta);
    if(f == NULL)   //here we test if the creation has succeeded
        std::cout << "Invallid Form has been requested...." << std::endl;
    else
    {
        Bureaucrat Jose("Jose", 148);
        Bureaucrat Pedro("Pedro", 1);
        SP
        std::cout << "--------------will be Pedro able ti sign the form?-------------" << std::endl;
        try //will be Petro able to sign the form?
        {
            Pedro.signForm(*f);
            //f->beSigned(Pedro);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        SP
        std::cout << "--------------Will Jose be able to sign it>-------------" << std::endl;
        try
        {
            //Jose.signForm(*f);
            f->beSigned(Jose);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        SP
        std::cout << "--------------will Jose able to execute the form?-------------" << std::endl;
        try
        {
            Jose.executeForm(*f);            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        SP
        std::cout << "--------------and what about Pedro, will he make it?-------------" << std::endl;
        try
        {
            Pedro.executeForm(*f);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        //delete f; //this is for the commented part of the Intern.cpp
    }
    return 0;
}