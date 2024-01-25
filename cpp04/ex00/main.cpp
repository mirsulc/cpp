/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:13 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:27:31 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
Cat micka;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* WR_cat = new WrongCat();
const Animal *k(i);
const Animal *l(j);
const Animal worm;
const Animal pes2(worm);
std::cout << worm.getType() << " " << std::endl;
worm.makeSound();
pes2.makeSound();
std::cout << micka.getType() << " " << std::endl;
micka.makeSound();
std::cout << WR_cat->getType() << " " << std::endl;
WR_cat->makeSound();
std::cout << j->getType() << " " << std::endl;
j->makeSound();
std::cout << i->getType() << " " << std::endl;
i->makeSound();
std::cout << k->getType() << " " << std::endl;
k->makeSound();
std::cout << l->getType() << " " << std::endl;
l->makeSound();
meta->makeSound();

delete(meta);

delete(j);
delete(i);
return 0;

}