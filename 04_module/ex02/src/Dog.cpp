
#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	_brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog( void ) {
	delete _brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog( Dog const & src ) {
    *this = src;
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
    Animal::type = rhs.getType();
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "au au au au au" << std::endl;
}

Brain & Dog::getBrain( void ) {
	return *this->_brain;
}