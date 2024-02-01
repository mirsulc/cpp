/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:00 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 09:27:49 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    // Bureaucrat *Karl = new Bureaucrat;
    // std::cout << "1. Name of this bureaucrat is: " << Karl->getName() << " And his grade is: " << Karl->getGrade() << std::endl;
    
    // Bureaucrat *Josef = new Bureaucrat("Josef", 105);
    // std::cout << "2. Name of this bureaucrat is: " << Josef->getName() << " And his grade is: " << Josef->getGrade() << std::endl;
    // Josef->incrementGrade(5);
    // Bureaucrat *Franz = new Bureaucrat;
    // *Franz = *Josef; //the name is const, so we shouldn't be able to change it to Josef
    // std::cout << "3. Name of this bureaucrat is: " << Franz->getName() << " And his grade is: " << Franz->getGrade() << std::endl;
    // Franz->incrementGrade(50);
    // Bureaucrat Pavel(*Josef); //again, the name is const, so we shouldn't be able to change it to Pavel
    // std::cout << "4. Name of this bureaucrat is: " << Pavel.getName() << " And his grade is: " << Pavel.getGrade() << std::endl;
    // std::cout << "------------------------------------ Test of Addresses ---------------------------------" <<std::endl;
    // //each bureaucrat should have different address
    // std::cout << "Addresses of our bureaucrats are: " << std::endl;
    // std::cout << &Karl << std::endl;
    // std::cout << &Josef << std::endl;
    // std::cout << &Franz << std::endl;
    // std::cout << &Pavel << std::endl;
    // std::cout << "------------------------------------ Test 1 ---------------------------------" <<std::endl;
    // try //the 3rd decrementation should fail, as the grade would be too low
    // {
        
    //     Franz->decrementGrade(49);//the name is const, so we shouldn't be able to change it to Josef
    //     Franz->decrementGrade(49) ;
    //     Franz->decrementGrade(49);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    
    // Franz->incrementGrade(50);
    // std::cout << "------------------------------------ Test 2 ---------------------------------" <<std::endl;
    // std::cout << "1. Name of this bureaucrat is: " << Karl->getName() << " And his grade is: " << Karl->getGrade() << std::endl;
    // std::cout << "2. Name of this bureaucrat is: " << Josef->getName() << " And his grade is: " << Josef->getGrade() << std::endl;
    // std::cout << "3. Name of this bureaucrat is: " << Franz->getName() << " And his grade is: " << Franz->getGrade() << std::endl;
    // std::cout << "4. Name of this bureaucrat is: " << Pavel.getName() << " And his grade is: " << Pavel.getGrade() << std::endl;
    // std::cout << "------------------------------------ Test 3 ---------------------------------" <<std::endl;
    // try //we shouldn't be able ti crate this guy, as his grade is too low
    // {
    //     Bureaucrat *Test = new Bureaucrat("Test", 160);
    //     Test->getName();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout << "------------------------------------ Test 4 ---------------------------------" <<std::endl;
    // try //we shouldn't be able ti crate this guy, as his grade is too high
    // {
    //     Bureaucrat *Test1 = new Bureaucrat("Test1", 0);
    //     Test1->getName();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // //delete(Test);
    // delete(Josef);
    // std::cout << "------------------------------------ Test 5 ---------------------------------" <<std::endl;
    // //after deleting Josef, we will check, if his copies are stil alive
    // std::cout << "Name of this FRANZ bureaucrat is: " << Franz->getName() << " And his grade is: " << Franz->getGrade() << std::endl;
    // std::cout << "Name of this PAVEL bureaucrat is: " << Pavel.getName() << " And his grade is: " << Pavel.getGrade() << std::endl;
    // std::cout << "------------------------------- Overloaded operator ------------------------------" << std::endl;
    // std::cout << Pavel; //was created on stack
    // std::cout << *Karl; //was created on heap
    // std::cout << *Franz; //was created on heap
    // std::cout << std::endl;

    // delete(Karl);
    // delete(Franz);
 
    
    Form Zadost("Zadost", 50, 50); //Cretion of a Form, that is OK
    std::cout << Zadost;

    
    SP
    try
    {
        Form Zadost2("Zadost2", 160, 1); //Should fail, as the Sign Grade is > 150
        std::cout << Zadost2;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    std::cout << "--------------------------Creation of a B(bureaucrat)---------------" << std::endl;
    
    Bureaucrat Josef("Josef", 100);
    std::cout << Josef;
    SP
    std::cout << "--------------------------Lets have B to sign the F------------" << std::endl;
    try
    {
        Zadost.beSigned(Josef); //Should fail, as Josef's grade is too low to sign Zadost
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    SP
    std::cout << "--------------------------Lets have B to sign another F------------" << std::endl;
    Form Pardon("Pardon", 150, 150);
    std::cout << Pardon;
    Pardon.beSigned(Josef);
    std::cout << Pardon; //status of Pardon shuld be changed
    SP
    try
    {
        std::cout << "-----------------------New F and a new B---------------------------" << std::endl;
        Form Important("Important", 1, 1);
        Bureaucrat Boss("Boss", 1);
        std::cout << Important;
        std::cout << Boss;
        Boss.signForm(Important);
        std::cout << Important;
        std::cout << Boss;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    SP
    std::cout << "-----------------------Trying co create a pointer to a class instance---------------------------" << std::endl;
    SP
    Form Test("test", 1, 1);
    Form *ptr = &Test;
    Bureaucrat John("John", 2);
    try
    {
        John.signForm(*ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << *ptr;


    
    return 0;
}