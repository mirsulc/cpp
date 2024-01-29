/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:53:40 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 10:52:39 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:

    std::string _type;
    
public:

    WrongAnimal();
    WrongAnimal(std::string tp);
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &src);
    virtual ~WrongAnimal();

    std::string getType() const;
    void setType(std::string &tp);
    virtual void makeSound() const; //virtual umozni predefinovat metodu v potomcich

};








#endif