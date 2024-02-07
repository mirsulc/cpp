/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:53:32 by msulc             #+#    #+#             */
/*   Updated: 2024/02/07 15:49:12 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
    Base *base = generate();
    // Base *a = new A;
    // Base *b = new B;
    // Base *c = new C;
    
    std::cout << "Pointer: " << base << std::endl;

    identify(base);

    
    delete base;
    return (0);
}