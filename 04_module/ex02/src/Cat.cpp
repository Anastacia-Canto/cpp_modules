
#include "../inc/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	this->_brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat( void ) {
	delete this->_brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat( Cat const & src ) : Animal(src.getType()) {
   this->_brain = new Brain();
   *this = src;
   std::cout << "Cat copy constructor called." << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ) {
    this->_type = rhs.getType();
    *this->_brain = rhs.getBrain();
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}

Brain & Cat::getBrain( void ) const {
	return *this->_brain;
}