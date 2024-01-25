/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:56:32 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 11:08:59 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string tp);
    WrongCat(const WrongCat &src);
    WrongCat &operator=(const WrongCat &src);
    ~WrongCat();

    void makeSound() const;
    std::string getType() const;
};

#endif