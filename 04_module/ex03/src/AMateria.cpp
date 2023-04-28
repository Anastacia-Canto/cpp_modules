
#include "../inc/AMateria.hpp"

AMateria::AMateria( void ) {
	this->type = "";
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type) {
	std::cout << "AMateria constructor receiving " << this->type << " as parameter." << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria( AMateria const & src ) {
	*this = src;
}

AMateria & AMateria::operator=( AMateria const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria" << this->getType() << " used on " << target.getName() << std::endl;
}