/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:43:39 by msulc             #+#    #+#             */
/*   Updated: 2024/02/04 17:51:09 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{
    // private:
    //     std::string _input;
    //     char _char;
    //     int _int;
    //     float _float;
    //     double _double;
    public:
        ScalarConverter();
        ScalarConverter(std::string input);
        ScalarConverter(ScalarConverter const &copy);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &rhs);
        static void convert(std::string);
        // void printChar();
        // void printInt();
        // void printFloat();
        // void printDouble();
        // void printAll();
        class ImpossibleException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NonDisplayableException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

    



#endif