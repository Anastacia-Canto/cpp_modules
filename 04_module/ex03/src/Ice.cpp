
#include "../inc/Ice.hpp"

Ice::Ice( void ) {
	AMateria::type = "ice";
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called." << std::endl;
	delete this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}