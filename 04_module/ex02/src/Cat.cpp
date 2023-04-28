
#include "../inc/Cat.hpp"

Cat::Cat( void ) {
    Animal::type = "Cat";
	_brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat( void ) {
	delete _brain;
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}