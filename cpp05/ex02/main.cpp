/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:00 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 15:31:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    ShrubberyCreationForm scp1("targetttt");
    std::cout << scp1;
    std::cout << "---------Creation of a B--------------" << std::endl;
    Bureaucrat Jose("jose", 1);
    try
    {
        Jose.signForm(scp1);    //Jose tries to sign the form
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    //std::cout << scp1.getSignedStatus() << std::endl;
    std::cout << "---------Attempt of the F to be executed--------------" << std::endl;
    try
    {
        scp1.execute(Jose);     //Jose tries to execute the form   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    try
    {
        Jose.incrementGrade(140);   //Incrementing Jose's grade        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << Jose;
    std::cout << "---------Attempt of B to execute the F--------------" << std::endl;
    try
    {
        std::cout << Jose;
        std::cout << scp1;
        Jose.executeForm(scp1);        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    RobotomyRequestForm robo("robo");
    try
    {
        Jose.signForm(robo);
        Jose.executeForm(robo);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    SP
    RobotomyRequestForm robo1("robo1");
    try
    {
        Jose.signForm(robo1);
        Jose.executeForm(robo1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    std::cout << "-------------Creating new weak B ------------------" << std::endl;
    RobotomyRequestForm robo2("robo2");
    Bureaucrat Jose_2("Jose_2", 140);
    try
    {
        Jose_2.signForm(robo2);
        Jose_2.executeForm(robo2);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}