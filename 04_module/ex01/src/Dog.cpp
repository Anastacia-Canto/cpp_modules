
#include "../inc/Dog.hpp"

Dog::Dog( void ) {
    Animal::type = "Dog";
	_brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog( void ) {
	delete _brain;
    std::cout << "Dog destructor called." << std::endl;
}

void Animal::makeSound( void ) const {
    std::cout << "au au au au au" << std::endl;
}