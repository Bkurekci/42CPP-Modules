#include "contact.hpp"

void Contacts::set_contact(std::string _name, std::string _surname, std::string _nickname, std::string _phonenum, std::string _darkscrt){
    name = _name;
    surname = _surname;
    nickname = _nickname;
    phoneNum = _phonenum;
    darkscrt = _darkscrt;
}
std::string Contacts::get_name() {return name;}
std::string Contacts::get_Sname(){return surname;}
std::string Contacts::get_nickname(){return nickname;}
std::string Contacts::get_phoneNum(){return phoneNum;}
std::string Contacts::get_secret(){return darkscrt;}