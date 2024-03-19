#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Samurai Jack");
	ClapTrap b("AKU");
    std::cout << "AKU suddenly cloned himself, they are now two!" << std::endl;
	ClapTrap c(b);
	a.takeDamage(5);
	a.attack("AKU");
	a.takeDamage(5);
	a.takeDamage(5);
	a.beRepaired(5);
	
    std::cout << "================= In another scene =================" << std::endl;
	
	b.beRepaired(30);
	for (int i = 0; i < 12; i++)
		b.attack("Samurai Jack");
	b.takeDamage(13);
	b.beRepaired(30);

    std::cout << "================= In another scene =================" << std::endl;

	c.setHitPoints(100);
	c.setEnergyPoints(5);
	c.setAttackDamage(10);
	for (int i = 0; i < 10; i++)
		c.attack("Nonclone AKU");
	c.takeDamage(90);
	c.beRepaired(5);
	c.takeDamage(20);
	return 0;
}