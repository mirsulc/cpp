/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:53:32 by msulc             #+#    #+#             */
/*   Updated: 2024/02/08 09:44:38 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
    Base *ptr = generate();
    Base &ref = *ptr;
    SP
    std::cout << "Pointer address: " << ptr << std::endl;
    SP
    identify(ptr);
    SP
    identify(ref);

    
    delete ptr;
    return (0);
}
