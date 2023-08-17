
#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	this->_type = "Wrong Animal";
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
    std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
    *this = src;
    std::cout << "Animal copy constructor called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    this->_type = rhs.getType();
    return *this;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "I am a general WrongAnimal." << std::endl;
}

std::string WrongAnimal::getType( void ) const {
    return this->_type;
}