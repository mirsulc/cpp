/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:41:54 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 15:46:50 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string tp);
    Cat(const Cat &src);
    Cat &operator=(const Cat &src);
    ~Cat();

    void makeSound() const;
    std::string getType() const;
    void getIdeas() const;
private:
    Brain* _br;
};











#endif