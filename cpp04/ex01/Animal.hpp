/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:39 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 15:54:52 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:

    std::string _type;
    
public:

    Animal();
    Animal(std::string tp);
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);
    virtual ~Animal();

    std::string getType() const;
    void setType(std::string &tp);
    virtual void makeSound() const; //virtual umozni predefinovat metodu v potomcich
    virtual void getIdeas() const;

};



#endif
