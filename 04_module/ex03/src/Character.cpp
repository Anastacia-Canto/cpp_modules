
#include "../inc/Character.hpp"

Character::Character( void ) {
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character( std::string name ) : _name(name){
	for ( int i = 0; i < 4; i ++) {
		this->_inventory[i] = NULL;
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
	if (this->_inventory[idx] == NULL) return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx] == NULL) return ;
	this->_inventory[idx]->use(target);
}

AMateria*	Character::getSlot( int i) const {
	return this->_inventory[i];
}