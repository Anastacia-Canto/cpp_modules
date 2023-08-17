
#include "../inc/Animal.hpp"

Animal::Animal( void ) {
	this->_type = "Animal";
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {
    std::cout << "Animal constructor called with type " << this->_type << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal( Animal const & src ) {
    *this = src;
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal & Animal::operator=( Animal const & rhs ) {
    std::cout << "Animal assignment operator called." << std::endl;
    this->_type = rhs.getType();
    return *this;
}

void Animal::makeSound( void ) const {
    std::cout << "I am a general Animal." << std::endl;
}

std::string Animal::getType( void ) const {
    return this->_type;
}

void Animal::openBrain( Brain & brain ) const {
    brain.read();
}

void    Animal::keepIdeas( Brain & brain, std::string idea ) {
    brain.setIdeas(idea);
}