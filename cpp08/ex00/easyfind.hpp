/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:00:03 by msulc             #+#    #+#             */
/*   Updated: 2024/02/14 13:28:59 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <ctime>

#define SP std::cout << std::endl;


class NotFoundException : public std::exception {
    public:
        const virtual char* what() const throw()
    {return("Value not found");};
};

template <typename T, typename O>
int easyfind(T &container, O value)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
    {
        int pos = std::distance(container.begin(), it);
        std::cout << "Value: '" << value << "' found on possition:  " << pos << std::endl;
        return pos;
    }
    else
        throw NotFoundException();
}

#include <deque>

template <typename T>
void print(T &container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}


#endif