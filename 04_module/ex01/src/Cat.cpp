
#include "../inc/Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	_brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat( void ) {
	delete _brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat( Cat const & src ) {
   *this = src;
   std::cout << "Cat copy constructor called." << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ) {
    Animal::type = rhs.getType();
    return *this;
}

void Cat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}

void Cat::openBrain( void ) const {
    this->_brain->read();
}

void    Cat::keepIdeas( std::string idea ) {
    this->_brain->setIdeas(idea);
}