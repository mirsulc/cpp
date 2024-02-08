/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:50:10 by msulc             #+#    #+#             */
/*   Updated: 2024/02/08 09:43:18 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand((unsigned)time(0));   //slouzi k tomu, aby se pri kazdem spusteni programu generovala jina hodnota
    int i = rand() % 3;         //nahodne cislo od 0 do 2

    std::cout << BOLD "Random number function returns: ";
    
    switch (i)
    {
    case 0:
        return (std::cout << "A" NRM << std::endl, new A);
    case 1:
        return (std::cout << "B" NRM << std::endl, new B);    
    default:
        return (std::cout << "C" NRM << std::endl, new C);
    }
}

void identify(Base* p)
{
    if(A *test = dynamic_cast<A*>(p))   //pokud se nepovede pretypovani, tak se vrati null pointer
        std::cout << test << " Pointer A" << std::endl;
    else if(B *test1 = dynamic_cast<B*>(p))
        std::cout << test1 << " Pointer B" << std::endl;
    else if(C *test2 = dynamic_cast<C*>(p))
        std::cout << test2 << " Pointer C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &test = dynamic_cast<A&>(p); //pokud se nepovede pretypovani, tak se vyhodi vyjimka
        std::cout << &test << " Reference A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &test1 = dynamic_cast<B&>(p);
            std::cout << &test1 << " Reference B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &test2 = dynamic_cast<C&>(p);
                std::cout << &test2 << " Reference C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}