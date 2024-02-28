/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:54:41 by msulc             #+#    #+#             */
/*   Updated: 2024/02/28 08:41:05 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>



BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    if (this != &src)
    {
        this->_prizeMap = src._prizeMap;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

// tato funkce precadi datum zadane v urcenem formatu na int pro ucely porovnavani ve funkci 'procesIt'
// static int dateToInt(std::string date)
// {
//     date.erase (std::remove(date.begin(), date.end(), '-'), date.end());
//     return std::atoi(date.c_str());
// }

static std::string getDate(std::string line, char c)
{
    std::size_t pos = line.find(c);
    if((pos != 10 && c == ',') || (pos != 11 && c == '|'))
        throw std::invalid_argument("------------------Invalid date format.");
    if(c == '|')
        pos--;
    std::string date = line.substr(0, pos);
    if(c == '|')
        checkDate(date);
    return date;
}

static double getPrize(std::string line)
{
    std::size_t pos = line.find(",");
    double prize = std::atof(line.substr(pos + 1).c_str());
    return prize;
}

bool BitcoinExchange::fillContainer(std::string filename)
{
    std::ifstream fileName;
    std::string line;
    fileName.open(filename.c_str());
    if(!fileName.is_open() || !fileName.good())
    {
        fileName.close();
        std::cout << "Source data file not found." << std::endl;
        return(false);
    }
    getline(fileName, line);
    while(std::getline(fileName, line))
    {
    
        try
        {
        _prizeMap.insert(std::pair<std::string, double>(getDate(line, ','), getPrize(line)));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    fileName.close();
    return true;
}

void checkDate(std::string date)
{
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str()); 
    if(day < 1 || day > 31)
        throw std::invalid_argument("Invalid day");
    else if(month < 1 || month > 12)
        throw std::invalid_argument("Invalid month");
    else if (year < 2009 || year > 2022)
        throw std::invalid_argument("Invalid year");
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        throw std::invalid_argument("Invalid date"); 
    else if ((month == 2) && (year % 4 == 0) && day > 29)
        throw std::invalid_argument("Invalid date");
    else if ((month == 2) && (year % 4 != 0) && day > 28)
        throw std::invalid_argument("Invalid date"); 
    bool centuryYearFlag = (year % 400 == 0 ? true : false);
    if(day == 29 && month == 2 && !centuryYearFlag)
        throw std::invalid_argument("Invalid date");
    return;
}

int dataControl(std::string line, BitcoinExchange exchange)
{
    if(line == "date | value")
        return 0;
    if(line[0] > '2' || line[0] < '2' || line[1] < '0' || line[1] > '0') 
    {
        std::cout << "Invalid input => " << line << std::endl;
        throw std::invalid_argument(" ");
    }
    std::size_t found = line.find_first_of("|");
    if (found == std::string::npos)
        throw std::invalid_argument("Invalid line format.");

    std::string date = getDate(line, '|');
    
    // std::string date = line.substr(0, found - 1);
    // if(date.length() != 10)
    //     throw std::invalid_argument("Invalid line/date format.");
    
    // checkDate(date);
    std::stringstream ss(line.substr(found + 1));
    double amount;
    ss >> amount;
    //std::cout << "------------------------Amount: " << amount << std::endl;
    if(amount < 0 || amount > 1000)
    {
        std::cout << "The number is out of expected range (0 - 1000). => " << line;
        throw std::invalid_argument("");
    }
    exchange.procesIt(date, amount);
    return 1;
}
// tato verze funkce porovnava datumy ve forme int a je tak predpokladam pomalejsi:
// void BitcoinExchange::procesIt(std::string date, double amount)
// {
//     std::map<std::string, double>::iterator it = _prizeMap.begin();
   
//     std::advance(it, 1);
//     while(it != _prizeMap.end())
//     {
//         if(dateToInt(it->first) == dateToInt(date))
//         {
//             std::cout << date << " => " << amount << " = " << it->second * amount << std::endl;
//             return;
//         }
//         else if(dateToInt(it->first) > dateToInt(date) && date != "2009-01-01")
//         {
//             it--;
//             std::cout << date << " => " << amount << " = " << it->second * amount << std::endl;
//             return;
//         }
//         it++;
//     }
//     std::cout<< "Valid date not found." << std::endl;
// }

// tato verze funkce porovnava datumy ve forme stringu a je tak predpokladam rychlejsi:
void BitcoinExchange::procesIt(std::string date, double amount)
{
    std::map<std::string, double>::iterator it = _prizeMap.begin();
   
    std::advance(it, 1);
    while(it != _prizeMap.end())
    {
        if(it->first == date)
        {
            std::cout << date << " => " << amount << " = " << it->second * amount << std::endl;
            return;
        }
        else if(it->first > date && date != "2009-01-01")
        {
            it--;
            std::cout << date << " => " << amount << " = " << it->second * amount << std::endl;
            return;
        }
        it++;
    }
    std::cout<< "Valid date not found." << std::endl;
}