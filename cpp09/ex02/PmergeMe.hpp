/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:58:11 by msulc             #+#    #+#             */
/*   Updated: 2024/03/05 13:50:07 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <sstream>
#include <iomanip>
#include <cstdlib>

#define INT_MAX 2147483647

class PmergeMe
{
private:

    std::vector<int> _vec;
    std::list<int> _list;

public:

    PmergeMe();
    PmergeMe(int argc, char *argv[]);
    PmergeMe(PmergeMe const &src);
    PmergeMe &operator=(PmergeMe const &src);
    ~PmergeMe();

    void mergeSortVector(std::vector<int> &vec);
    void mergeVector(std::vector<int> &left, std::vector<int> &right, std::vector<int> &results);
    void mergeSortList(std::list<int> &list);
    void mergeList(std::list<int> &left, std::list<int> &right, std::list<int> &results);
    
};

#endif
