/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:21:21 by msulc             #+#    #+#             */
/*   Updated: 2023/12/20 13:43:26 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string lowercase(std::string str)
{
    int i = 0;
    std::string res;

    while(str[i])
    {
        res += tolower(str[i]);
        i++;
    }
    return (res);
}

int main(void)
{
    PhoneBook   book;

    book.setIndex();
    std::cout << "\033[1;J\033[1;1H";
    std::cout << "Welcome to PHONE BOOK." << std::endl;
    book.signpostFunction();
    return 0;
}
