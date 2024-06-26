/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:47:29 by msulc             #+#    #+#             */
/*   Updated: 2024/02/08 09:41:42 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

#define BOLD "\033[1m"
#define NRM "\033[0m"

#define SP std::cout << "----------------" << std::endl;

class Base
{

public:
    virtual ~Base() {};

};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif