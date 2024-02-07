/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:50:10 by msulc             #+#    #+#             */
/*   Updated: 2024/02/07 15:51:29 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand((unsigned)time(0));   //slouzi k tomu, aby se pri kazdem spusteni programu generovala jina hodnota
    int i = rand() % 3;         //nahodne cislo od 0 do 2

    switch (i)
    {
    case 0:
        return (std::cout << "A" << std::endl, new A);
    case 1:
        return (std::cout << "B" << std::endl, new B);    
    default:
        return (std::cout << "C" << std::endl, new C);
    }
}

void identify(Base* p)
{
    if(A *test = dynamic_cast<A*>(p))
        std::cout << "Identified as A" << std::endl;
    else if(B *test1 = dynamic_cast<B*>(p))
        std::cout << "Identified as B" << std::endl;
    else if(C *test2 = dynamic_cast<C*>(p))
        std::cout << "Identified as C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}