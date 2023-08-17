
#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	this->_brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog( void ) {
	delete this->_brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog( Dog const & src ) : Animal(src.getType()) {
    this->_brain = new Brain();
    *this = src;
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
    this->_type = rhs.getType();
    *this->_brain = rhs.getBrain();
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "au au au au au" << std::endl;
}

Brain & Dog::getBrain( void ) const {
	return *this->_brain;
}