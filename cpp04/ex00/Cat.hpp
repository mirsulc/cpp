#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string tp);
    Cat(const Cat&);
    Cat &operator=(const Cat &src);
    ~Cat();

    void makeSound() const;
    std::string getType() const;
};











#endif