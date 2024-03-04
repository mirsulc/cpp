/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:58:11 by msulc             #+#    #+#             */
/*   Updated: 2024/03/04 12:53:05 by msulc            ###   ########.fr       */
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
#include <climits>
#include <iterator>
#include <cstdlib>

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

    void mergeList(std::list<int> &list);
    void mergeVector(std::vector<int> &vec);

    
};


#endif
