/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:39:37 by msulc             #+#    #+#             */
/*   Updated: 2024/02/22 10:49:45 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <list>
#include <map>
#include <sstream>

#define SP std::cout << "---------------------------------------------" << std::endl;
#define BOLD "\033[1m"
#define NRM "\033[0m"

class BitcoinExchange
{
private:
    std::map<std::string, double> _prizeMap;
public:
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &src);
    BitcoinExchange &operator=(BitcoinExchange const &src);
    ~BitcoinExchange();

    bool fillContainer(std::string filename);
    void procesIt(std::string date, double amount);
};

//std::string getDate(std::string line);
//double getPrize(std::string line);
int dataControl(std::string line, BitcoinExchange exchange);
void checkDate(std::string date);



#endif
