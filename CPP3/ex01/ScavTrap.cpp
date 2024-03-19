#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    this->setName("default ");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap costructor called." << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called." << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& copy) { *this = copy; }

ScavTrap &ScavTrap::operator=(const ClapTrap& copy) {
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (this->getHitPoints() <= 0){
        std::cout << "Can not attack, dead -_-" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() <= 0) {
        std::cout << "ScavTrap " << this->getName() << " does not have any energy points to attack." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::guardGate() { std::cout << "ScavTrap " << this->getName() << " is now Gate Keeper Mode." << std::endl; }