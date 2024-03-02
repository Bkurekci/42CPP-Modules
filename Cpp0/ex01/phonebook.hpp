#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook{
    private:
    int index;
    Contacts members[8];

    public:
    void add();
    void setIndex(int);
    void search();
};

#endif