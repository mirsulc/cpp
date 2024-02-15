/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:41:29 by msulc             #+#    #+#             */
/*   Updated: 2024/02/15 14:39:04 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
    _v.reserve(n);
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &copy)
{
    if(this != &copy)
    {
        _n = copy._n;
        _v = copy._v;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int i)
{
    if (_v.size() < _n)
        _v.push_back(i);
    else
        throw std::out_of_range("Container is full");
}

int Span::shortestSpan()
{
    if(_v.size() < 2)
        throw NoElementsToCompare();
    else
    {
        int span = (*max_element(_v.begin(), _v.end())) - (*min_element(_v.begin(), _v.end()));
        std::cout << (*max_element(_v.begin(), _v.end())) << "----------" << (*min_element(_v.begin(), _v.end())) << std::endl;
        int len = _v.size();
        int dif[len];
        std::vector<int> temp(_v);
        std::sort(temp.begin(), temp.end());
        std::adjacent_difference(temp.begin(), temp.end(), dif);
        for (int i = 1; i < len; i++)
        {
            if(dif[i] < span)
                span = dif[i];
        }
        std::cout << "Shortest span: " << span << std::endl;
        return span;        
    }
}

int Span::longestSpan()
{
    if(_v.size() < 2)
        throw NoElementsToCompare();
    else
    {
        int span = (*max_element(_v.begin(), _v.end())) - (*min_element(_v.begin(), _v.end()));
        std::cout << "Longest span: " << span << std::endl;
        return span;        
    }
}

//-----------------------------------------------------------------------------------------------

void Span::print() const
{
    if(_v.empty())
    {
        std::cout << "Container is empty" << std::endl;
        return;
    }
    else
    {
        for(std::vector<int>::const_iterator it = _v.begin(); it != _v.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
}

void Span::fillVector(int n)
{
    std::srand(std::time(0));
    unsigned int i = _v.size();
    while(i < _n)
    {
        _v.push_back(std::rand() % (n * 10));
        i++;
    }
}

void Span::sort()
{
    std::sort(_v.begin(), _v.end());
}

unsigned int Span::getSize() const
{
    if(_v.size() > _n)
        std::cout << "Something went wrong and the size of vector is bigger than it is supposed to be..." << std::endl;
    return _v.size();
}


const char* NoElementsToCompare::what() const throw()
{return("Not enough elements to compare");}