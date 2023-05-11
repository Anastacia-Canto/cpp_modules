
#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
	
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor called." << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {
	this->_name = rhs.getName();
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
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= value;
}

void	Bureaucrat::decrement( int value ) {
	if (this->_grade + value > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += value;
}

std::ostream & operator<<( std::ostream out, Bureaucrat const & rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out; 
}