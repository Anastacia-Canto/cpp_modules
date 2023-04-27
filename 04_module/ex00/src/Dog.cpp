
#include "../inc/Dog.hpp"

Dog::Dog( void ) {
    Animal::type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound( void ) const {
    std::cout << "au au au au au" << std::endl;
}