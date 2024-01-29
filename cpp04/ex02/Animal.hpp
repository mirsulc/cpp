/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:39 by msulc             #+#    #+#             */
/*   Updated: 2024/01/26 15:58:19 by msulc            ###   ########.fr       */
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

    virtual std::string getType() const = 0;
    void setType(std::string &tp);
    virtual void makeSound() const = 0;
    virtual void getIdeas() const = 0;
    
    virtual void setIdeas(unsigned int i, std::string idea) const = 0;

};



#endif
