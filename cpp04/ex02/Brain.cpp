/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:41:40 by msulc             #+#    #+#             */
/*   Updated: 2024/01/26 13:03:13 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
//---------------------------------------constructors
Brain::Brain()
{
    std::cout << "Brain was just created" << std::endl;
}
Brain::Brain(const Brain &src)
{
    for (int i = 0; i < numOfIdeas; i++)
    {
        _ideas[i] = src._ideas[i];
    }
    std::cout << "Brain copy created" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    if(this != &src)
    {
        for (int i = 0; i < numOfIdeas; i++)
        {
            _ideas[i] = src._ideas[i];
        }
        std::cout << "Brain copy assignment operator called" << std::endl;
        return *this;
    }
    else
    {
        std::cout << "Brain copy assignment operator unsuccesfully called" << std::endl;
        return *this;
    }
}


Brain::~Brain()
{
    std::cout << "All the Brain ideas were destroyed" << std::endl;
}
//----------------------------------------methods
void Brain::setIdeas(unsigned int i, std::string idea)
{
    
    unsigned int x = i;
    unsigned int y = 0;
    while(x < (numOfIdeas + i))
    {
        _ideas[y] = idea + "_" + IntToString(x);
        x++;
        y++;
    }
}
void Brain::getIdeas() const
{
    std::cout << " ------------------------------- ideas -----------------------" << std::endl;
    for (int i = 0; i < numOfIdeas; i++)
    {
        std::cout << _ideas[i] << " ";
    }   
    std::cout << std::endl;
}
//---------------------------------------------
std::string IntToString(int a)
{
    std::ostringstream temp;
    temp << a;
    return temp.str();
}