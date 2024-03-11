#include "Harl.hpp"

int main(int ac, char **av){
    if(ac == 2){
        std::string level(av[1]);
        Harl harl;
        int num = 0;

        for(int i = 0;i < 4; i++, num++)
            if(level == harl.getComplain(i))
                break;
        
        switch(num){
            case 0:
		        harl.complain("DEBUG");
	        case 1:
		        harl.complain("INFO");
	        case 2:
		        harl.complain("WARNING");
	        case 3:
		        harl.complain("ERROR");
		        break ;
	        default:
	        	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	        	break ;
        }
    }
    else
        std::cout << "Enter a level! (DEBUG, INFO, WARNING, ERROR)" << std::endl;
    return 0;
}