#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
Cat micka;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal *k(i);
const Animal *l(j);
const Animal pes;
const Animal pes2(pes);
pes.makeSound();
std::cout << pes.getType() << " " << std::endl;
pes2.makeSound();
std::cout << micka.getType() << " " << std::endl;
micka.makeSound();
std::cout << k->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
l->makeSound();
meta->makeSound();

delete(meta);

delete(j);
delete(i);
return 0;

}