#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

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
    virtual void makeSound() const;

};



#endif
