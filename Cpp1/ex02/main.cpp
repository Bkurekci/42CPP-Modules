#include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "str memory address: " << &str << std::endl;
    std::cout << "stringPTR pointer memory address: " << &stringPTR << std::endl;
    std::cout << "stringREF referance memory address: " << &stringREF << std::endl;

    std::cout << "str's value: " << str << std::endl;
    std::cout << "stringPTR pointer's value: " << *stringPTR << std::endl;
    std::cout << "stringREF referance's value: " << stringREF << std::endl;

    return 0;
}