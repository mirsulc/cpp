/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:28:43 by msulc             #+#    #+#             */
/*   Updated: 2024/03/01 11:33:36 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool checkInput(std::string str) //this function checks if the input contains only allowed characters
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if(str[i] == 32 || str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '/' || (str[i] >= 47 && str[i] <= 58))
            continue;
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return(std::cout << "Error: wrong number of argumens" << std::endl, 1);
    RPN rpn;
    if(std::string(argv[1]) == "test.txt")
    {
        std::string line;
        std::ifstream input("test.txt");
        while(getline(input, line))
        {
            std::cout << line << " = ";
            rpn.count(line);            
        }
        line = "";
    }
    else
    {
        if(!checkInput(argv[1]))
            return(std::cout << "Error: input contains forbidden characters" << std::endl, 1);
        rpn.count(argv[1]);        
    }
    return 0;
}