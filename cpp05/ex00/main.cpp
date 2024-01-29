/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:43:00 by msulc             #+#    #+#             */
/*   Updated: 2024/01/29 14:29:32 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *Karl = new Bureaucrat;
    std::cout << "Name of this bureaucrat is: " << Karl->getName() << std::endl;
    Bureaucrat *Josef = new Bureaucrat("Josef", 105);
    std::cout << "Name of this bureaucrat is: " << Josef->getName() << std::endl;
    Josef->incrementGrade(55);
    Bureaucrat *Franz = new Bureaucrat;
    *Franz = *Josef;
    std::cout << "Name of this bureaucrat is: " << Franz->getName() << std::endl;
    Franz->decrementGrade(50);

    try
    {
        //Franz->incrementGrade(500);
        
        Franz->decrementGrade(50);
        Franz->decrementGrade(50);
        Franz->decrementGrade(50);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        
    }
    Franz->incrementGrade(50);

    delete(Karl);
    delete(Franz);
    delete(Josef);
    return 0;
}