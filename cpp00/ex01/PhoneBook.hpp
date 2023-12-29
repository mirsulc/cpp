/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:20:59 by msulc             #+#    #+#             */
/*   Updated: 2023/12/20 13:43:29 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contactline[8];
    int _idx;
   
public:
    PhoneBook();
    ~PhoneBook();
    int getIndex(void);
    void setIndex(void);
    void incremetIndex(void);
    Contact getContactline(int _idx);
    void setContactline(int i, std::string f, std::string l, std::string n, std::string p, std::string s);
    void addContact(int flag);
    void searchContact(int flag);
    void printOutTheContact(int i, int flag);
    void signpostFunction(void);
};

std::string lowercase(std::string str);
std::string trimmingFunction(std::string str);

#endif