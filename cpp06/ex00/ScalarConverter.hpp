/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:26:49 by msulc             #+#    #+#             */
/*   Updated: 2024/02/06 15:41:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <iomanip>

#define SP std::cout << std::endl;

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define NON 5
#define ERROR 6

class ScalarConverter
{
private:

    ScalarConverter();
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();
    ScalarConverter &operator=(ScalarConverter const &src);

public:
   
    static void convert(std::string);
    static int checkType(std::string);
    static bool digitsOnly(std::string);
    static bool digitsOnly(std::string, int, int);
    
    static void printChar(std::string);
    static void printInt(std::string);
    static void printFloat(std::string);
    static void printDouble(std::string);
    static void printNon(std::string);
    static void printError(std::string);
};

#endif