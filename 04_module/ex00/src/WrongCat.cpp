
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) {
    *this = src;
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
    WrongAnimal::type = rhs.getType();
    return *this;
}

void WrongCat::makeSound( void ) const {
    std::cout << "miau miau miau" << std::endl;
}