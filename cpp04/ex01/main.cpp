/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:42:13 by msulc             #+#    #+#             */
/*   Updated: 2024/01/26 12:56:52 by msulc            ###   ########.fr       */
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
Micka.getType();
Micka.makeSound();
Micka.getIdeas();
Micka.setIdeas(15, "mnauuuuu");
Micka.getIdeas();
std::cout << "---------------------------------------" << std::endl;
Animal *packa = new Cat;
packa->getType();
packa->makeSound();
packa->setIdeas(1, "grrrrrr");
packa->getIdeas();
std::cout << "---------------------------------------" << std::endl;
Cat test_cat = *(const Cat*)packa;
test_cat.getType();
std::cout << "---------------------------------------" << std::endl;
std::cout << "test of 'test_cat' existence - address: " << &test_cat << " original address: " << &packa << std::endl;
delete(packa);
test_cat.makeSound();
test_cat.getIdeas();
std::cout << "---------------------------------------" << std::endl;

Animal *Hafik = new Dog;
Hafik->getType();
Hafik->makeSound();
Hafik->getIdeas();
Hafik->getType();
std::cout << "---------------------------------------" << std::endl;
std::cout << std::endl;
std::cout << "adresa hafika: " << &Hafik << std::endl;
const Animal *catsAndDogs[10];
unsigned int number = 10;
unsigned int i = 0;
while(i < number)
{
    while(i < number / 2)
    {
        catsAndDogs[i] = new Dog;
        i++;
    }
    while(i < number)
    {
        catsAndDogs[i] = new Cat;
        i++;
    }
    std::cout << "address of those beasts: " << i << " - " << &catsAndDogs[i] << std::endl;
}
catsAndDogs[2]->getType();
catsAndDogs[2]->getIdeas();
catsAndDogs[8]->getType();
catsAndDogs[8]->getIdeas();
for (unsigned int x = 0; x < number; x++)
{
    delete(catsAndDogs[x]);
}

delete(Hafik);





return 0;

}