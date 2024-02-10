/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:39:54 by msulc             #+#    #+#             */
/*   Updated: 2024/02/10 09:50:24 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default constructor called" << std::endl;
}   
ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
ScalarConverter::~ScalarConverter()
{
    std::cout << "Destructor called" << std::endl;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    (void)src;
    return (*this);
}

bool ScalarConverter::digitsOnly(std::string str)
{
    for(unsigned long i = 0; i < str.length(); i++)
    {
        if(!isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool ScalarConverter::digitsOnly(std::string str, int start, int end)
{
    for(int i = start; i < end; i++)
    {
        if(!isdigit(str[i]))
            return (false);
    }
    return (true);
}

void ScalarConverter::printChar(std::string str)
{
    if(str[0] < 32 || str[0] >= 127)
        std::cout << "char: non-printable" << std::endl;
    else
        std::cout << "char: '" << str[0] << "'" <<std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
}

void ScalarConverter::printInt(std::string str)
{
    long long num = std::atoll(str.c_str());    //v pripade, ze ocekavam int, tak musim pouzit long long, abych overiv jestli se vejde do MIN/MAX int

    if(num >= 127 || num < 32)
        std::cout << "char: non-printable" << std::endl;
    else
        std::cout << "char: '" << static_cast<unsigned char>(num) << "'" <<std::endl;
    if(num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossibe" << std::endl;
        std::cout << "double: impossibe" << std::endl;
    }
    else
    {
        int cislo = std::atoi(str.c_str());
        std::cout << "int: " << cislo << std::endl;
        float ff = static_cast<float>(cislo);
        double dd = static_cast<double>(cislo);
        std::cout << "float: " << std::fixed << std::setprecision(1) << ff << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << dd << "" << std::endl;
    }
    
}

void ScalarConverter::printFloat(std::string str)
{
    float f = std::atof(str.c_str());
    double d = static_cast<double>(f);
    
    if(f >= 127 || f < 32)
        std::cout << "char: non-printable" << std::endl;
    else
        std::cout << "char: '" << static_cast<unsigned char>(f) << "'" <<std::endl;
    if(f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "" << std::endl;
    }
}

// void ScalarConverter::printFloat(std::string str) //tato funkce je pro testovani pristupu k prevodu floatu
// {
//     float f = std::atof(str.c_str());
//     double d = std::atof(str.c_str());
        
//     if(f >= 127 || f < 32)
//         std::cout << "char: non-printable" << std::endl;
//     else
//         std::cout << "char: '" << static_cast<unsigned char>(f) << "'" <<std::endl;
//     long long test = static_cast<long long>(std::numeric_limits<float>::max());
//     long long test1 = static_cast<long long>(std::numeric_limits<float>::min());
//     std::cout << "max float: " << test  << std::endl;
//     std::cout << "min float: " << test1  << std::endl;
//     if(d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
//     {
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: too high/low float number" << std::endl;
//         std::cout << "double: impossible" << std::endl;
//     }
//     else if(d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
//     {
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
//         std::cout << "double: " << std::fixed << std::setprecision(1) << d << "" << std::endl;
//     }
//     else
//     {
//         std::cout << "int: " << static_cast<int>(f) << std::endl;
//         std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
//         std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << "" << std::endl;
//     }
// }

void ScalarConverter::printDouble(std::string str)
{
    double d = std::atof(str.c_str());
    float f = static_cast<float>(d);
    if(d >= 127 || d < 32)
        std::cout << "char: non-printable" << std::endl;
    else
        std::cout << "char: '" << static_cast<unsigned char>(d) << "'" <<std::endl;
    if(d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "" << std::endl;
    }
}

void ScalarConverter::printNon(std::string str)
{
    std::cout << "tisknu non: " << str << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if(str[0] == '+')
        str.erase(0,1);
    if(str == "-inf" || str == "+inf" || str == "nan" || str == "-nan" || str == "+nan" || str == "inf")
    {
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else if(str == "nanf" || str == "inff")
    {
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.erase(3,4) << std::endl;}
    else
    {
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str.erase(4,5) << std::endl;
    }
}

void ScalarConverter::printError(std::string str)
{
    std::cout << "It's impossible to convert this string: '" << str << "'" << std::endl;
}

int ScalarConverter::checkType(std::string str) //zjistim typ
{
    int dots = 0;
    int ef = 0;
    int other = 0;
    int plus = 0;
    int minus = 0;
    int digits = 0;
    
    if(str == "nan" || str == "-nan" || str == "+nan" || str == "inf" || str == "-inf" || str == "+inf" || str == "inff" || str == "-inff" || str == "+inff" 
        || str == "nanf" || str == "-nanf" || str == "+nanf")
        return (NON);

    for (unsigned long i = 0; i < str.length(); i++)    //zjistim kolik je v retezci tecek, efek, minusu, plusu, cisel a ostatnich znaku
    {
        if(str[i] == '.')
            dots++;
        else if(str[i] == 'f')
            ef++;
        else if(str[i] == '-')
            minus++;
        else if(str[i] == '+')
            plus++;
        else if(!isdigit(str[i]))
            other++;
        else if(isdigit(str[i]))
            digits++;
    }

    if((str.length() > 1 && (dots > 1 || ef > 1 || minus > 1 || plus > 1 || other > 0)) || (str.length() > 1 && digits == 0))
        return  (ERROR);
    if(str.length() == 1 && isdigit(str[0]))
        return (INT);
    else if(str.length() == 1 && !isdigit(str[0]))
        return (CHAR);
    else if((str.length() > 1 && digitsOnly(str)) || (str.length() > 1 && (str[0] == '+' || str[0] == '-') && digitsOnly(str, 1, str.length())))
        return (INT);
    else if(str.length() > 1 && (dots == 1 || dots ==0) && str[str.length() - 1] == 'f' && digits > 0)
        return (FLOAT);
    else if(str.length() > 1 && dots == 1 && ef == 0 && digits > 0)
        return (DOUBLE);
    return (ERROR);
}

void ScalarConverter::convert(std::string str)
{
    int type = checkType(str);  //nejdrive zjistim typ, ktery je obsazen ve vstupnim retezci
    
    switch (type)               //podle typu zavolam prislusnou funkci
    {
    case 1:
        printChar(str);
        break;
    case 2:
        printInt(str);
        break;
    case 3:
        printFloat(str);
        break;
    case 4: 
        printDouble(str);
        break;
    case 5: 
        printNon(str);
        break;  
    default:
        printError(str);
        break;
    }
}

// funkce std::fixed a std::setprecision jsou z knihovny iomanip a ios, ktera umoznuje manipulovat s vystupem