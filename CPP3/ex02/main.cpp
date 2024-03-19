#include "FragTrap.hpp"

int main() {
	FragTrap e("Steve");
	FragTrap f("Alex");
	
	e.highFivesGuys();
	e.attack("End Dragon");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("End Dragon");
	f.highFivesGuys();
	return (0);
}