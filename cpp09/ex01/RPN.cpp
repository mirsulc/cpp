/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:11:05 by msulc             #+#    #+#             */
/*   Updated: 2024/02/29 17:24:29 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}
RPN::RPN(RPN const &src)
{
    std::cout << "copy" << std::endl;
    *this = src;
}
RPN &RPN::operator=(RPN const &src)
{
    std::cout << "we shouldnt be here" << std::endl;
    if (this != &src)
    {
        _stack1 = src._stack1;
    }
    return *this;
}
RPN::~RPN()
{
}
void RPN::count(std::string str)
{
    double num1;
    double num2;
    double result;

    std::cout << std::fixed << std::setprecision(1);
    unsigned long i = 0;
    for (i = 0; i < str.length(); i++)
    {
        if(str[i] == 32)
            continue;
        else if (str[i] >= 48 && str[i] <= 57)
            _stack1.push(str[i] - 48);
        // else if(_stack1.size() == 1 && (str[i] < 48 || str[i] > 57))
        // {
        //     std::cout << "This notation is not valid 3" << std::endl;
        //     return;
        // }
        else if(_stack1.size() > 1)
        {
            num1 = _stack1.top();
            _stack1.pop();
            num2 = _stack1.top();
            _stack1.pop();
            switch (str[i])
            {
            case '+':
                result = num2 + num1;
                break;
            case '-':
                result = num2 - num1;
                break;
            case '*':
                result = num2 * num1;
                break;
            default:
                if(num1 == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    return;
                }
                result = num2 / num1;
                break;
            }
            // altternativa k verzi swich vyse
            // if (str[i] == '+')
            //     result = num2 + num1;
            // else if (str[i] == '-')
            //     result = num2 - num1;
            // else if (str[i] == '*')
            //     result = num2 * num1;
            // else if (str[i] == '/')
            // {
            //     if(num1 == 0)
            //     {
            //         std::cout << "Error: division by zero" << std::endl;
            //         return;
            //     }
            //     result = num2 / num1;
            // }
            _stack1.push(result);
        }
        else
        {
            std::cout << "This notation is not valid 1" << std::endl;
            return;
        }
    }
    if((_stack1.size() == 1 || _stack1.top() == 0) && i == str.length())
           std::cout << _stack1.top() << std::endl;
    else
        std::cout << "This notation is not valid 2" << std::endl;
    while(!_stack1.empty())
        _stack1.pop();
}