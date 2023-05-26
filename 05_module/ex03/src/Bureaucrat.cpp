
#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException("GradeTooHighException: grade can't be higher than 1");
	if (grade > 150)
		throw GradeTooLowException("GradeTooLowException: grade can't be lower than 150");
	
	std::cout << "Constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor called." << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {
	this->_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName( void ) const {
	return this->_name;
}

int Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void	Bureaucrat::increment( int value ) {
	if (this->_grade - value < 1)
		throw GradeTooHighException("GradeTooHighException: grade can't be higher than 1");
	else
		this->_grade -= value;
}

void	Bureaucrat::decrement( int value ) {
	if (this->_grade + value > 150)
		throw GradeTooLowException("GradeTooLowException: grade can't be lower than 150");
	else
		this->_grade += value;
}

void	Bureaucrat::signForm( AForm & form ) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const & form ) {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

std::ostream & operator<<( std::ostream & out, Bureaucrat const & rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out; 
}

const char * Bureaucrat::GradeTooHighException::what () const throw() {
	return message;
}

const char * Bureaucrat::GradeTooLowException::what () const throw() {
	return message;
}