
#include "../inc/Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called." << std::endl;
	delete this;
}

Cure::Cure( Cure const & src ) {
	*this = src;
	std::cout << "Ice copy constructor called." << std::endl;
}

Cure & Cure::operator=( Cure const & rhs ) {
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}