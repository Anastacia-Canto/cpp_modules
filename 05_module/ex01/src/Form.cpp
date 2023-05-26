
#include "../inc/Form.hpp"

Form::Form( const std::string name, const int sign, const int execute ) 
: _name(name), _gradeToSign(sign), _gradeToExecute(execute) {
	this->_isSigned = false;

	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException("GradeTooHighException: grade can't be higher than 1");
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException("GradeTooLowException: grade can't be lower than 150");
	
	std::cout << "Constructor called." << std::endl;
}

Form::~Form( void ) {
	std::cout << "Destructor called." << std::endl;
}

Form::Form( Form const & src ) 
: _name(src.getName()), _gradeToSign(src.getGradeSign()), _gradeToExecute(src.getGradeExecute()) {}

Form & Form::operator=( Form const & rhs ) {
	this->_isSigned = rhs.getIsSigned();
	return *this;
}


std::string Form::getName( void ) const {
	return this->_name;
}
bool Form::getIsSigned( void ) const {
	return this->_isSigned;
}

int	Form::getGradeSign( void ) const {
	return this->_gradeToSign;
}

int Form::getGradeExecute( void ) const {
	return this->_gradeToExecute;
}

void	Form::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException("grade is lower than the required one.");
}


std::ostream & operator<<( std::ostream & out, Form const & rhs ) {
	out << "Name: " << rhs.getName() << std::endl;
	out << "Grade to sign: " << rhs.getGradeSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeExecute() << std::endl;
	out << "Signed: " << (rhs.getIsSigned() ? "Yes" : "No") << std::endl;
	return out;
}

const char * Form::GradeTooHighException::what() const throw() {
	return message;
}

const char * Form::GradeTooLowException::what() const throw() {
	return message;
}