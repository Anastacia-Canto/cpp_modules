
#include "../inc/Cure.hpp"

Cure::Cure( void ) {
	AMateria::type = "cure";
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called." << std::endl;
	delete this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}