
#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
: _target(target), AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "Presidential constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Presidential destructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) 
: _target(src.getTarget()), AForm("PresidentialPardonForm", 25, 5) {
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
	if (!this->getIsSigned()) throw NotSignedException("form is not signed");
	else if (executor.getGrade() > this->getGradeExecute()) throw GradeTooLowException("grade is too low");
	else {
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}


