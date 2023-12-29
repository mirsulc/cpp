/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:35:48 by msulc             #+#    #+#             */
/*   Updated: 2023/12/20 14:16:37 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

std::string Contact::getFirstname()
{
    return this->_firstname;
}

std::string Contact::getLastname()
{
    return this->_lastname;
}

std::string Contact::getNickname()
{
    return this->_nickname;
}

std::string Contact::getPhonenumber()
{
    return this->_phonenumber;
}

std::string Contact::getSecret()
{
    return this->_secret;
}

void Contact::setFirstname(std::string str)
{
    if(str.empty())
        return;
    else
        this->_firstname = str;
}

void Contact::setLastname(std::string str)
{
    if(str.empty())
        return;
    else
        this->_lastname = str;
}

void Contact::setNickname(std::string str)
{
    if(str.empty())
        return;
    else
        this->_nickname = str;
}

void Contact::setPhonenumber(std::string str)
{
    if(str.empty())
        return;
    else
        this->_phonenumber = str;
}

void Contact::setSecret(std::string str)
{
    if(str.empty())
        return;
    else
        this->_secret = str;
}
