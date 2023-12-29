/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:20:15 by msulc             #+#    #+#             */
/*   Updated: 2023/12/20 14:12:09 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

void    PhoneBook::incremetIndex(void)
{
    this->_idx += 1;
}

int     PhoneBook::getIndex(void)
{
    return this->_idx;
}

void    PhoneBook::setIndex()
{
    this->_idx = 0;
}

Contact PhoneBook::getContactline(int _idx)
{
    return this->_contactline[_idx];
}

void PhoneBook::setContactline(int i, std::string f, std::string l, std::string n, std::string p, std::string s)
{
    this->_contactline[i].setFirstname(f);
    this->_contactline[i].setLastname(l);
    this->_contactline[i].setNickname(n);
    this->_contactline[i].setPhonenumber(p);
    this->_contactline[i].setSecret(s);
}

void    PhoneBook::addContact(int flag)
{
    std::string fn;
    std::string ln;
    std::string nn;
    std::string pn;
    std::string ds;
    int i = this->getIndex();

    std::cout << "\033[1;1H\033[0;J";
    if (this->getIndex() < 8 && flag == 8)
    {
        std::cout << "Yor PHONE BOOK is full, this entry will replace the oldest contact." << std::endl;
    }
    else if(this->getIndex() < 8)
        std::cout << "You have got: " << flag << " out of 8 contacts" << std::endl;
    else
    {
        std::cout << "Yor PHONE BOOK is full, this entry will replace the oldest contact." << std::endl;
        this->setIndex();
        i = this->getIndex();
    }
    std::cout << "Enter the First name: ";
    while(fn.empty())
        std::getline(std::cin, fn);
    std::cout << "Enter the Last name: ";
    while(ln.empty())
        std::getline(std::cin, ln);
    std::cout << "Enter the Nickname: ";
    while(nn.empty())
        std::getline(std::cin, nn);
    std::cout << "Enter the Phone number: ";
        std::getline(std::cin, pn);
    std::cout << "Enter the Darkest secret: ";
    while(ds.empty())
        std::getline(std::cin, ds);
    this->setContactline(i, fn, ln, nn, pn, ds);
    std::cout << "\033[1;J\033[1;1H";
    return;
}

std::string trimmingFunction(std::string str)
{
    if(str.length() > 10)
    {
        str.resize(9);
        str += ".";
    }
    return str;
}

void PhoneBook::searchContact(int flag)
{
    int x;

    if(this->getContactline(0).getFirstname().empty())
        std::cout << "You have no Contacts to search in." << std::endl;
    else
    {
        std::cout << "+----------+----------+----------+----------+" << std::endl
			<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
			<< "+----------+----------+----------+----------+" << std::endl;
        for (int i = 0; i < flag; i++)
        {
            std::cout << "|" << std::setw(10) << i << "|";
            std::cout << std::setw(10) << trimmingFunction(this->getContactline(i).getFirstname()) << "|";
            std::cout << std::setw(10) << trimmingFunction(this->getContactline(i).getLastname()) << "|";
            std::cout << std::setw(10) << trimmingFunction(this->getContactline(i).getNickname()) << "|" << std::endl;
        }
        std::cout	<< "+----------+----------+----------+----------+" << std::endl;
        std::cout << std::endl;
        std::cout << "Choose an index number: ";
        while(!(std::cin >> x))
        {
            std::cout << "Must input an integer: ";
            std::cin.clear(); // clear error flag
            std::cin.ignore(256, '\n'); // ignores remainder of stream
        }
        std::cout << std::endl;
        printOutTheContact(x, flag);
        
    
    }
    return;
}

void PhoneBook::printOutTheContact(int i, int flag)
{
    while(i >= flag || i < 0)
    {
        std::cout << "Your input is out of the range. Choose number between 0 and " << flag - 1 << ": ";
        while(!(std::cin >> i) && i >= 0 && i < flag)
        {
            std::cin.clear(); // clear error flag
            std::cin.ignore(256, '\n'); // ignores remainder of stream
        }
    }
    std::cout << std::endl;
    std::cout << "First name: " << this->getContactline(i).getFirstname() << std::endl;
    std::cout << "Last name: " << this->getContactline(i).getLastname() << std::endl;
    std::cout << "Nickname: " << this->getContactline(i).getNickname() << std::endl;
    std::cout << "Phone number: " << this->getContactline(i).getPhonenumber() << std::endl;
    std::cout << "Darkest secret: " << this->getContactline(i).getSecret() << std::endl;
    std::cout << std::endl;
    std::cin.clear();
    std::cin.ignore(256, '\n');
}

void PhoneBook::signpostFunction(void)
{
    std::string cmd;
    int flag = 0;

    while(1)
    {
        std::cout << "What will we do? Choose ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, cmd);
        
        cmd = lowercase(cmd);
        if(cmd == "add")
        {
            this->addContact(flag);
            this->incremetIndex();
            if(flag < this->getIndex() && flag < 8)
                flag = this->getIndex();
        }
        else if(cmd == "search")
        {
            std::cout << "\033[1;J\033[1;1H";
            this->searchContact(flag);
        }
        else if(cmd == "exit")
        {
            std::cout << "\033[1;1H\033[2;J";
            std::cout << "Thanks for using PHONE BOOK." << std::endl;
            break;
        }
        else
        {
           std::cout << "That was an invalid commad, try again." << std::endl;
        }
    }
}
