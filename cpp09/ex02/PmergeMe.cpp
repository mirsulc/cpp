/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:11:53 by msulc             #+#    #+#             */
/*   Updated: 2024/03/04 12:54:27 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(int argc, char *argv[])
{
    std::string str;
    std::stringstream ss;
    long numb;
    for (int i = 1; i < argc; i++)
    {
        str = argv[i];
        for (unsigned long j = 0; j < str.length(); j++)
        {
            if(str[j] == '-' || str[j] == '+')
                continue;
            if(!isdigit(str[j]))
                throw std::invalid_argument("Error: Arguments must be numbers");
        }
        ss << str;
        ss >> numb;
        if(numb < 0 || numb > INT_MAX)
            throw std::invalid_argument("Error: Arguments must be numbers in the range of 0 - INT_MAX");
        ss.clear();
    }
    
    while(argc-- > 1)
    {
        _vec.push_back(std::atoi(argv[argc]));
        _list.push_back(std::atoi(argv[argc]));
    }
    clock_t start_vec = clock();
    mergeVector(_vec);
    clock_t end_vec = clock();
    std::cout << std::fixed;
    std::cout << "Vector time: " << (double)(end_vec - start_vec) / CLOCKS_PER_SEC << std::endl;
    std::vector<int>::iterator it = _vec.begin();
    while(it != _vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << _vec.size() << std::endl;
    

}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
{
    if (this != &src)
    {
        this->_vec = src._vec;
        this->_list = src._list;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

//--------------------------------------------------------------------------------------------

void PmergeMe::mergeList(std::list<int> &list)
{
    list.sort();
    std::list<int>::iterator it = list.begin();
    while(it != list.end())
    {
        std::cout << *it << " ";
        it++;
    }
}

void PmergeMe::mergeVector(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
}
