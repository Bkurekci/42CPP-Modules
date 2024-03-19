#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Steve");
	a.attack("Skeleton");
	std::cout << "--------------------" << std::endl;
	ScavTrap d("Iron Golem");
	ScavTrap e("Snowman");
	d.attack("Zombie");
	d.beRepaired(22);
	d.takeDamage(21);
	d.beRepaired(22);
	d.guardGate();
	ScavTrap f(d);
    std::cout << "================================================================\n \
                    \tPillagers are coming for conquer your village!\n \
                ================================================================" << std::endl; 
	d.takeDamage(200);
	d.attack("Pillager");
	f.attack("Pillager");
	f.attack("Pillager");
	f.attack("Pillager");
	f.attack("Pillager");
	f.takeDamage(1000);
	std::cout << "===================================================================" << std::endl;
	e.attack("Skeleton");
	e.takeDamage(20);
	e.attack("Skeleton");
	e.takeDamage(101);
	e.takeDamage(15);
	e.attack("Skeleton");
	std::cout << "===================================================================" << std::endl;
	return 0;
}