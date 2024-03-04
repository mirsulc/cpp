/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:13:40 by msulc             #+#    #+#             */
/*   Updated: 2024/03/04 10:58:31 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if(argc <= 2)
        return(std::cout << "There is nothing to sort, more arguments needed" << std::endl, 1);
   
    try
    {
        PmergeMe pm(argc, argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}