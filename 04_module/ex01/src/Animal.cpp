
#include "../inc/Animal.hpp"

Animal::Animal( void ) {
    this->type = "Animal";
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( std::string type ) : type(type) {
    std::cout << "Animal constructor called with type " << this->type << std::endl;
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
    this->type = rhs.getType();
    return *this;
}

void Animal::makeSound( void ) const {
    std::cout << "I am a general Animal." << std::endl;
}

std::string Animal::getType( void ) const {
    return this->type;
}