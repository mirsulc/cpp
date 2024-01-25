/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:13 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 16:12:47 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <sstream>




int main()
{
Cat Micka;
Micka.makeSound();
Micka.getIdeas();
std::cout << "---------------------------------------" << std::endl;
Animal *packa = new Cat;
packa->makeSound();
packa->getIdeas();
delete(packa);
std::cout << "---------------------------------------" << std::endl;
Animal *Hafik = new Dog;
Hafik->makeSound();
Hafik->getIdeas();
Hafik->getType();
delete(Hafik);





return 0;

}