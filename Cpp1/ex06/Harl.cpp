#include "Harl.hpp"

Harl::Harl(){
    complnVer[0] = "DEBUG";
    complnVer[1] = "INFO";
    complnVer[2] = "WARNING";
    complnVer[3] = "ERROR";
	std::cout << "Default constructor called for Harl object." << std::endl;
}

Harl::~Harl(){
    std::cout << "There he goes..." << std::endl;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

std::string& Harl::getComplain(int i){
    return this->complnVer[i];
}

void  Harl::complain(std::string level) {
	int i;
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(i = 0; i < 4; i++){
        if(level == complnVer[i]){
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << "INPUT ERROR." << std::endl;
}