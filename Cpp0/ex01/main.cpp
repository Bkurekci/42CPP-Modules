#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>

int main(){
    Phonebook book;
    std::string choice;

    book.setIndex(0);

    do{
        std::cout << ">";
        std::cin >> choice;

        if(choice == "ADD")
            book.add();
        else if(choice == "SEARCH")
            book.search();
        else if(choice == "EXIT")
            break;
    }while(1);

    return 0;
}