
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ) {
    WrongAnimal::type = "WrongCat";
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}