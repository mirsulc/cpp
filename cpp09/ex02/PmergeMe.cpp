/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:11:53 by msulc             #+#    #+#             */
/*   Updated: 2024/03/05 13:59:56 by msulc            ###   ########.fr       */
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
    
    for (int i = 1; i < argc; i++)
    {
        _vec.push_back(std::atoi(argv[i]));
        _list.push_back(std::atoi(argv[i]));
    }
    std::cout << std::left << std::setw(8) << "Before: ";
    std::vector<int>::iterator it = _vec.begin();
    while(it != _vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    clock_t start_list, end_list, start_vec, end_vec;
    start_vec = clock();
    mergeSortVector(_vec);
    end_vec = clock();
    start_list = clock();
    mergeSortList(_list);
    end_list = clock();
    std::cout << std::left << std::setw(8) << "After: ";
    it = _vec.begin();
    while(it != _vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::fixed << std::endl;
    std::cout << "Time to process a range of: " << _vec.size() << " elements with std::vector : " 
            << 1000 * ((double)(end_vec - start_vec) / CLOCKS_PER_SEC) <<" ms" << std::endl;
    std::cout << "Time to process a range of: " << _list.size() << " elements with std::list : "
            << 1000 * ((double)(end_list - start_list) / CLOCKS_PER_SEC) <<" ms" << std::endl;
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

//-------------------------------------------------------------------------------------------------

void PmergeMe::mergeVector(std::vector<int> &left, std::vector<int> &right, std::vector<int> &results)
{
    int L_size = left.size();
    int R_size = right.size();
    int i = 0, j = 0, k = 0;
   
    while (j < L_size && k < R_size) 
    {
        if (left[j] < right[k]) {
            results[i] = left[j];
            j++;
        }
        else {
            results[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < L_size) {
        results[i] = left[j];
        j++; i++;
    }
    while (k < R_size) {
        results[i] = right[k];
        k++; i++;
    }
}
void PmergeMe::mergeSortVector(std::vector<int> &vec)
{
    if (vec.size() <= 1)
        return;

    int mid = vec.size() / 2;
    std::vector<int> left(vec.begin(), vec.end() - mid);
    std::vector<int> right(vec.end() - mid, vec.end());

    mergeSortVector(left);
    mergeSortVector(right);
    mergeVector(left, right, vec);
}

void PmergeMe::mergeList(std::list<int> &left, std::list<int> &right, std::list<int> &results)
{
    std::list<int>::iterator it_left = left.begin();
    std::list<int>::iterator it_right = right.begin();
    results.clear();
    while(it_left != left.end() && it_right != right.end())
    {
        if(*it_left < *it_right)
        {
            results.push_back(*it_left);
            it_left++;
        }
        else
        {
            results.push_back(*it_right);
            it_right++;
        }
    }
    while(it_left != left.end())
    {
        results.push_back(*it_left);
        it_left++;
    }
    while(it_right != right.end())
    {
        results.push_back(*it_right);
        it_right++;
    }
}

void PmergeMe::mergeSortList(std::list<int> &list)
{
    if(list.size() <= 1)
        return;
    
    std::list<int> left, right;
    std::list<int>::iterator it = list.begin();
    for (unsigned long i = 0; i < list.size(); i++)
    {
        if(i < list.size()/2)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
    }
    mergeSortList(left);
    mergeSortList(right);
    mergeList(left, right, list);    
}