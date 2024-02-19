/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:20:53 by msulc             #+#    #+#             */
/*   Updated: 2024/02/19 11:26:32 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T, typename C = std::deque<T> >

class MutantStack : public std::stack<T, C>
{
    using std::stack<T, C>::c;

public:

    MutantStack() {};
    MutantStack(MutantStack const &src) : std::stack<T, C>(src) {};
    MutantStack &operator=(MutantStack const &src)
    {
        if (this != &src)
            this->c = src.c;
        return *this;
    };
    ~MutantStack() {};

    typedef typename C::iterator iterator;
    
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const iterator begin() const { return this->c.begin(); }
    const iterator end() const { return this->c.end(); }
};



#endif