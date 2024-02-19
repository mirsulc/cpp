/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:04:09 by msulc             #+#    #+#             */
/*   Updated: 2024/02/15 14:46:30 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp(5);
    try
    {
        sp.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.fillVector(5000);
    sp.print();
    sp.shortestSpan();
    sp.longestSpan();
    sp.sort();
    sp.print();
    std::cout << "Size of the container is: " << sp.getSize() << std::endl;
    // ---------------------------------------------------------------------
    SP
    Span *sp2 = new Span(10000);
    sp2->fillVector(100000);
    sp2->shortestSpan();
    sp2->longestSpan();
    sp2->sort();
    sp2->print();
    std::cout << "Size of the container is: " << sp2->getSize() << std::endl;
    delete sp2;



    return 0;
}
