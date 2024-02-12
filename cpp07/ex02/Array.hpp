/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:40:15 by msulc             #+#    #+#             */
/*   Updated: 2024/02/12 15:15:44 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <iomanip>
#include <sstream>

#define SP std::cout << "----------------------------" << std::endl;
#define BOLD "\033[1m"
#define NRM "\033[0m"


template <typename T>
class Array
{
    public:

        Array() : _array(NULL), _size(0){}
        Array(unsigned int n) : _array(new T[n]), _size(n){}
        Array(Array const &src) : _array(new T[src._size]), _size(src._size)
        {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        ~Array(){std::cout<< "destruction" <<std::endl; delete[] _array;}
        Array &operator=(Array const &src)
        {
            if (this != &src)
            {
                _array = new T[src._size];
                _size = src._size;
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = src._array[i];
            }
            return *this;
        
        };
        T &operator[](unsigned int n)
        {
            if (n >= _size || n < 0)
                throw std::out_of_range("Index out of range");
            return _array[n];
        }
        unsigned int size() const {return _size;}
        void print(void)const{
            for(unsigned int i = 0; i < _size; i++)
            {
                std::cout << _array[i] << ", ";
            }
            std::cout << std::endl;
        }
    
    private:
    
        T *_array;
        unsigned int _size;
        
};


#endif