
#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
: AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "Presidential constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Presidential destructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) 
: AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget()) {
	std::cout << "Presidential copy constructor called." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if (checkRequirements(executor.getGrade()))
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


