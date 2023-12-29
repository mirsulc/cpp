#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include "string"

class Contact
{
private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _secret;
public:
    Contact(void);
    ~Contact(void);
    std::string getFirstname();
    std::string getLastname();
    std::string getNickname();
    std::string getPhonenumber();
    std::string getSecret();

    void    setFirstname(std::string str);
    void    setLastname(std::string str);
    void    setNickname(std::string str);
    void    setPhonenumber(std::string str);
    void    setSecret(std::string str);

};

#endif