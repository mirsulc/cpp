/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:15:14 by msulc             #+#    #+#             */
/*   Updated: 2024/01/05 12:47:46 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <istream>


int main(int ac, char **av)
{
    if(ac != 4)
        return (std::cerr << "Error: Wrong number of arguments" << std::endl << 
            "[ ./textinfile + 3 arguments - file name / sentence n.1 / sentence n.2 ]" << std::endl, -1);
    int i = 0;
    std::string one(av[2]);
    std::string two(av[3]);
    std::string outfile(av[1]);
    std::ifstream ifs(av[1]);
    
    if(!ifs)
        return (std::cerr << "Error: file: \"" << av[1] << "\" doesn't exists." << std::endl, -1);
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
    std::cout << "File: \"" << outfile << "\" was created." << std::endl;
    return 0;
}