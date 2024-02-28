/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:28:43 by msulc             #+#    #+#             */
/*   Updated: 2024/02/28 12:32:32 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return(std::cout << "Error: wrong number of argumens" << std::endl, 1);
    RPN rpn;
    if(!RPN::checkInput(argv[1]))
        return(std::cout << "Error: input contains forbidden characters" << std::endl, 1);
    rpn.count(argv[1]);
    return 0;
}