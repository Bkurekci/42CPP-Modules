#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contacts{
    private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phoneNum;
    std::string darkscrt;

    public:
    void set_contact(std::string, std::string, std::string, std::string, std::string);
    std::string get_name();
    std::string get_Sname();
    std::string get_nickname();
    std::string get_phoneNum();
    std::string get_secret();
};

#endif