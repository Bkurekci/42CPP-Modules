#include "contact.hpp"
#include "phonebook.hpp"
#include <iomanip>
#include <limits>

void Phonebook::setIndex(int _index){
    index = _index;
}

void Phonebook::add(){
    int temp = index;

    if(index >= 8)
        temp = index % 8;
    
    std::string _name;
    std::string _surname;
    std::string _nickname;
    std::string _phoneNum;
    std::string _darkscrt;

    std::cin.ignore();
    std::cout << "firstname: ";
    std::getline(std::cin, _name, '\n');
    std::cout << "lastname: ";
    std::getline(std::cin, _surname, '\n');
    std::cout << "nickname: ";
    std::getline(std::cin, _nickname, '\n');
    std::cout << "darkest Secret: ";
    std::getline(std::cin, _darkscrt, '\n');
    std::cout << "phone number: ";
    std::getline(std::cin, _phoneNum, '\n');

    members[temp].set_contact(_name, _surname, _nickname, _phoneNum, _darkscrt);
    index++;    
}

static std::string fitString(std::string str)
{ 
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 10 - 1) + ".");
}

void Phonebook::search(){   
    
    if(index == 0)
    {
        std::cout << "Phone book is empty for now." << std::endl;
        return;
    }

    int usrIndex, usrTemp = index;

    if(index > 8)
        usrTemp = 8;
    std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    
    for(int i = 0;i < usrTemp; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << fitString(members[i].get_name()) << "|";
        std::cout << std::setw(10) << fitString(members[i].get_Sname()) << "|";
        std::cout << std::setw(10) << fitString(members[i].get_nickname()) << "|" << std::endl;
    }

    while(1){
        std::cin >> usrIndex;

        if (std::cin.fail()) {
            std::cout << "Invalid input! Please enter a valid integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if(usrIndex < 1 || usrIndex > usrTemp)
            std::cout << "Invalid index!" << std::endl;
        else{
            usrIndex--;
	        std::cout << "| " << "Firstname: " << members[usrIndex].get_name() << " |" << std::endl;
	        std::cout << "| " << "Lastname: " << members[usrIndex].get_Sname() << " |" << std::endl;
	        std::cout << "| " << "Nickname: " << members[usrIndex].get_nickname() << " |" << std::endl;
	        std::cout << "| " << "Phonenumber: " << members[usrIndex].get_phoneNum() << " |" << std::endl;
	        std::cout << "| " << "Darkestsecret: " << members[usrIndex].get_secret() << " |" << std::endl;
            break;
        }
    }
    
}