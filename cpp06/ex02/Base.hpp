/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:47:29 by msulc             #+#    #+#             */
/*   Updated: 2024/02/07 15:10:07 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

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