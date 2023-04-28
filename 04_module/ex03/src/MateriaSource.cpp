
#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4; i++ ) {
		this->_memory[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	*this = src;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destructor called." << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		if (this->_memory[i] != NULL) {
			delete this->_memory[i]; 
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for ( int i = 0; i < 4; i++ ) {
		if (this->_memory[i] == NULL) {
			this->_memory[i] = m; 
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	for ( int i = 3; i >= 0; i-- ) {
		if (this->_memory[i] != NULL && this->_memory[i]->getType() == type) {
			return this->_memory[i]->clone();
		}
	}
	return 0 ;
}