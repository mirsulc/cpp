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


int main(int ac, char **av)
{
    (void)ac;
    int i = 0;
    std::string one(av[2]);
    std::string two(av[3]);
    std::string outfile(av[1]);
    outfile = outfile + ".replace";
    std::cout << "new file name: " << outfile << std::endl;
    std::ofstream out(outfile.c_str());
    
    std::cout << one << " mezera " << two << std::endl;
    
    std::ifstream ifs(av[1]);
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
    
    std::cout << "text: " << std::endl;
    std::cout << content << std::endl;

    while(i != -1)
    {
        i = content.find(one);
        if(i == -1)
            break;
        content.erase(i, one.length());
        content.insert(i, two);
    }
    std::cout << i << std::endl;
    out << content;
    out.close();
    return 0;
}