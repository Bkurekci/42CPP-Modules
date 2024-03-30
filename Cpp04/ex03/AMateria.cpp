#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
    std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(std::string const & type): type(type) {
        std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(const AMateria& copy): type(copy.getType()) {
    
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    if (this != &amateria)
        type = amateria.type;
    return (*this);
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called\n";
}

std::string const & AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria used on " << target.getName() << std::endl;
}