
#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
: _target(target), AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "Constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Destructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) 
: _target(src.getTarget()), AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "Copy constructor called." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


