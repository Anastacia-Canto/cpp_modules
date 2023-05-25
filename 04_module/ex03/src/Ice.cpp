
#include "../inc/Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called." << std::endl;
	delete this;
}

Ice::Ice( Ice const & src ) {
	*this = src;
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice & Ice::operator=( Ice const & rhs ) {
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}