#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->name = "none";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap constructor called." << std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap& copy) { *this = copy; }

ClapTrap::~ClapTrap() { std::cout << "ClapTrap destructor Called." << std::endl; }

ClapTrap &ClapTrap::operator=(const ClapTrap& copy) {
    this->name = copy.getName();
    this->hitPoints = copy.getHitPoints();
    this->energyPoints = copy.getEnergyPoints();
    this->attackDamage = copy.getAttackDamage();
    return (*this);
}

std::string ClapTrap::getName() const { return (this->name); }

int ClapTrap::getHitPoints() const { return (this->hitPoints); }

int ClapTrap::getEnergyPoints() const { return (this->energyPoints); }

int ClapTrap::getAttackDamage() const { return (this->attackDamage); }

void ClapTrap::setName(std::string _name) { this->name = _name; }

void ClapTrap::setHitPoints(int hit) { this->hitPoints = hit; }

void ClapTrap::setEnergyPoints(int energy) { this->energyPoints = energy; }

void ClapTrap::setAttackDamage(int attack) { this->attackDamage = attack; }

void ClapTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0)
        return ;
    if (this->energyPoints <= 0) {
        std::cout << this->getName() << " does not have any energy points to attack -_-" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints <= 0){
        std::cout << "Can not attack, dead -_-" << std::endl;
        return ;
    }
    if (this->hitPoints <= (int)amount) {
        std::cout << this->getName() << " is died :(" << std::endl;
        this->hitPoints -= amount;
        return ;
    }
    std::cout << this->getName() << " has take " << amount << " point of damage!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints <= 0)
        return ;
    if (this->energyPoints <= 0) {
        std::cout << this->getName() << "does not have any energy points to repair itself :(" << std::endl;
        return ;
    }
    std::cout << this->getName() << " has repaired " << amount << " point of itself ^^" << std::endl;
    this->energyPoints--;
    this->hitPoints += amount;
}