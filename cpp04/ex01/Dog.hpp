/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:06 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 16:01:54 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string tp);
    Dog(const Dog &src);
    Dog &operator=(const Dog &src);
    ~Dog();

    void makeSound() const;
    std::string getType() const;
    void getIdeas() const;
private:
    Brain* _br;
};











#endif