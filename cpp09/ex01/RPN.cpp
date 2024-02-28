/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:11:05 by msulc             #+#    #+#             */
/*   Updated: 2024/02/28 12:54:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}
// {
//     if(!checkInput(str))
//         throw std::invalid_argument("Error: input contains forbidden characters");
//     for(unsigned long i = 0; i < str.length(); i++)
//     {
//         if(str[i] == 32)
//             continue;
//         else if(str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '/')
//             _stack2.push(str[i]);
//         else
//             _stack2.push(str[i] - 48);
//         std::cout << _stack2.top() << std::endl;
//     } 
// }
RPN::RPN(RPN const &src)
{
    *this = src;
}
RPN &RPN::operator=(RPN const &src)
{
    if (this != &src)
    {
        *this = src;
        _stack1 = src._stack1;
    }
    return *this;
}
RPN::~RPN()
{
}
bool RPN::checkInput(std::string str)
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        //std::cout << str[i] << std::endl;
        if(str[i] == 32 || str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '/' || (str[i] >= 47 && str[i] <= 58))
            continue;
        return false;
    }
    return true;
}
void RPN::count(std::string str)
{
    int num1;
    int num2;
    double result;

    std::cout << std::fixed << std::setprecision(0);
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if(str[i] == 32)
        {
            //std::cout << "mezera" << std::endl;
            continue;

        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            //std::cout << "cislo" << std::endl;
            _stack1.push(str[i] - 48);
        }
        else if(_stack1.size() > 1)
        {
            //std::cout << "operace" << std::endl;
            num1 = _stack1.top();
            _stack1.pop();
            num2 = _stack1.top();
            _stack1.pop();
            if (str[i] == '+')
                result = num2 + num1;
            else if (str[i] == '-')
                result = num2 - num1;
            else if (str[i] == '*')
                result = num2 * num1;
            else if (str[i] == '/')
                result = num2 / num1;
            _stack1.push(result);
            //std::cout << "result: " << result << std::endl;
        }
        else
        {
            std::cout << "This notation is not valid" << std::endl;
            return;
        }
    }
    //std::cout << "delka: " << _stack1.size() << std::endl;
    if(_stack1.size() == 1)
        std::cout << _stack1.top() << std::endl;
    else
        std::cout << "This notation is not valid" << std::endl;

    
}