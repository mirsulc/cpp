/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:46:42 by msulc             #+#    #+#             */
/*   Updated: 2024/02/15 14:37:31 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <exception>
#include <iterator>
#include <ctime>

#define SP std::cout << "--------------------------------------------------" << std::endl;

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &copy);
    Span &operator=(Span const &copy);
    ~Span();

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    
    void print() const;
    void fillVector(int n);
    void sort();
    unsigned int getSize() const;

};


class NoElementsToCompare : public std::exception {
        public:
            const virtual char* what() const throw();
};

#endif