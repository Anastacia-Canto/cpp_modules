
#include "../inc/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog( Dog const & src ) : Animal(src) {
    *this = src;
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {
    this->type = rhs.getType();
    return *this;
}

void Dog::makeSound( void ) const {
    std::cout << "au au au au au" << std::endl;
}