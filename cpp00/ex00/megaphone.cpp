/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:08:10 by msulc             #+#    #+#             */
/*   Updated: 2023/12/15 14:45:07 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void megaphone(std::string str)
{
    int i = -1;

    while(str[++i])
    {
        str[i] = toupper(str[i]);
        std::cout << str[i];
    }
}

int main(int argc, char **argv)
{
    int i = 0;

    if(argc < 1)
        return 1;
    else if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        while(argv[++i])
            megaphone(argv[i]);
    std::cout << std::endl;
    return 0;
}