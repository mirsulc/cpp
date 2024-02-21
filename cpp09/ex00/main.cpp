/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:13:58 by msulc             #+#    #+#             */
/*   Updated: 2024/02/21 15:04:45 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "wrong number of arguments." << std::endl;
        return 1;
    }
    
    BitcoinExchange exchange;
    std::string filename = "data.csv";
    std::ifstream source;
    std::string line;
    
    source.open(argv[1]);
    if(!source.is_open() || !source.good())
        return (std::cout << "Input file not found." << std::endl, 1);
    if(!exchange.fillContainer(filename))
        return 1;
    while(getline(source, line))
    {
        try
        {
            dataControl(line, exchange);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }        
    }
    source.close();
    return 0;
}