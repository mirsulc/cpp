/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:55:59 by msulc             #+#    #+#             */
/*   Updated: 2023/12/28 13:59:53 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define YEL "\033[33m"
#define RESET "\033[0m"

int main(void)
{
    std::string brain =  "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << std::endl;
    std::cout << std::left << std::setw(55) << "address of the string variable - &brain: " << &brain << std::endl;
    std::cout << std::setw(55) <<"address held by the string pointer - stringPTR: " << stringPTR << std::endl;
    std::cout << YEL << std::setw(55) <<"address of the string pointer - &stringPTR: " << &stringPTR << RESET << std::endl;
    std::cout << std::setw(55) <<"address held by the string reference - &stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << std::left << std::setw(55) << "value of the string variable - brain:" << brain << std::endl;
    std::cout << std::setw(55) << "value pointed to by the string pointer - *stringPTR:" << *stringPTR << std::endl;
    std::cout << std::setw(55) << "value pointed to by the string reference - stringREF:" << stringREF << std::endl;
    std::cout << std::endl;

    return 0;
}