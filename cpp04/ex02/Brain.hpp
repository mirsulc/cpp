/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:15:52 by msulc             #+#    #+#             */
/*   Updated: 2024/01/25 16:04:41 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{

public:

    Brain();
    Brain(const Brain &src);
    Brain &operator=(const Brain &src);
    virtual ~Brain();

    void setIdeas(unsigned int i, std::string idea);
    void getIdeas() const;

    static const int numOfIdeas = 100;

protected:

    std::string _ideas[numOfIdeas];
    
};

std::string IntToString(int a);


#endif
