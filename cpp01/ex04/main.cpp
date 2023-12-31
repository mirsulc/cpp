/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:15:14 by msulc             #+#    #+#             */
/*   Updated: 2023/12/29 16:40:11 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <fstream>
#include <istream>
#include <cstring>


int main(int ac, char **av)
{
    if(ac != 4)
    {
        return (std::cout << "Wrong number of arguments!" << std::endl,
        std::cout << " --> [./textinfile] [filename] [s1] [s2] <-- " << std::endl, 1);
    }
    int i = 0;
    std::string one(av[2]);
    std::string two(av[3]);
    std::string outfile(av[1]);
    std::ifstream ifs(av[1]);
    // return(std::cout << "Error" std::endl, 1);
    if(errno != 0)
        return (std::cout << "Error: File: \"" << av[1] << "\" doesn't exists." << std::endl, 1);
    outfile = outfile + ".replace";
    std::ofstream out(outfile.c_str());
    
    
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );

    while(i != -1)
    {
        i = content.find(one);
        if(i == -1)
            break;
        content.erase(i, one.length());
        content.insert(i, two);
    }
    out << content;
    out.close();
    return 0;
}