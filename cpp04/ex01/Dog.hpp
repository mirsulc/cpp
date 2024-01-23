#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string tp);
    Dog(const Dog&);
    Dog &operator=(const Dog &src);
    ~Dog();

    void makeSound() const;
    std::string getType() const;
};











#endif