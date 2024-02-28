/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:12:24 by msulc             #+#    #+#             */
/*   Updated: 2024/02/28 13:30:27 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <exception>
#include <cstdlib>
#include <iomanip>

class RPN
{

private:
    std::stack<double> _stack1;
    
public:
    RPN();
    RPN(RPN const &src);
    RPN &operator=(RPN const &src);
    ~RPN();
    
    void count(std::string str);
    
};

#endif