
#include "../inc/Character.hpp"

Character::Character( void ) {
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character( std::string name ) : _name(name){
	for ( int i = 0; i < 4; i ++) {
		this->_inventory[i] = NULL;
	}
	for ( int i = 0; i < 100; i ++) {
		this->_garbage[i] = NULL;
	}
	std::cout << "Character constructor receiving " << this->_name << " as parameter." << std::endl;
}

Character::Character( Character const & src ) {
	std::cout << "Character copy constructor called." << std::endl;
	*this = src;
}


Character & Character::operator=( Character const & rhs ) {
	this->_name = rhs.getName();
	for ( int i = 0; i < 4; i ++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
		}
		this->_inventory[i] = rhs.getSlot(i);
	}
	return *this;
}

Character::~Character( void ) {
	std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++ ) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
		}
	}
	for (int i = 0; i < 100; i++ ) {
		if (this->_garbage[i] != NULL) {
			delete this->_garbage[i];
		}
	}
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for ( int i = 0; i < 4; i++ ) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx > 4 || idx < 0 || this->_inventory[idx] == NULL) return ;
	for (int i = 0; i < 100; i++) {
		if (this->_garbage[i] == NULL) {
			this->_garbage[i] = this->_inventory[idx];
			break ;
		}
	}
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 4 || idx < 0 || this->_inventory[idx] == NULL) return ;
	this->_inventory[idx]->use(target);
}

AMateria*	Character::getSlot( int i) const {
	if (i > 4 || i < 0 || this->_inventory[i] == NULL) return 0 ;
	return this->_inventory[i]->clone();
}