
#include "../inc/Cat.hpp"

Cat::Cat( void ) {
    Animal::type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}