
#include "../inc/AMateria.hpp"

AMateria::AMateria( void ) {
	this->_type = "";
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "AMateria constructor receiving " << this->_type << " as parameter." << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria( AMateria const & src ) {
	*this = src;
}

AMateria & AMateria::operator=( AMateria const & rhs ) {
	this->_type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}
