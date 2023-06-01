
#include "../inc/AForm.hpp"

AForm::AForm( const std::string name, const int sign, const int execute ) 
: _name(name), _gradeToSign(sign), _gradeToExecute(execute) {
	this->_isSigned = false;

	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException("GradeTooHighException: grade can't be higher than 1");
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException("GradeTooLowException: grade can't be lower than 150");
	
	std::cout << "Form constructor called." << std::endl;
}

AForm::~AForm( void ) {
	std::cout << "Form destructor called." << std::endl;
}

AForm::AForm( AForm const & src ) 
: _name(src.getName()), _gradeToSign(src.getGradeSign()), _gradeToExecute(src.getGradeExecute()) {}

AForm & AForm::operator=( AForm const & rhs ) {
	this->_isSigned = rhs.getIsSigned();
	return *this;
}


std::string AForm::getName( void ) const {
	return this->_name;
}
bool AForm::getIsSigned( void ) const {
	return this->_isSigned;
}

int	AForm::getGradeSign( void ) const {
	return this->_gradeToSign;
}

int AForm::getGradeExecute( void ) const {
	return this->_gradeToExecute;
}

void	AForm::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException("grade is lower than the required one.");
}

bool	AForm::checkRequirements( int grade ) const {
	if (!getIsSigned()){
		throw NotSignedException("form is not signed");
		return false;
	} else if (grade > getGradeExecute()) {
		throw GradeTooLowException("grade is too low");
		return false;
	} else {
		return true;
	}
}

std::ostream & operator<<( std::ostream & out, AForm const & rhs ) {
	out << "Name: " << rhs.getName() << std::endl;
	out << "Grade to sign: " << rhs.getGradeSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeExecute() << std::endl;
	out << "Signed: " << (rhs.getIsSigned() ? "Yes" : "No") << std::endl;
	return out;
}

const char * AForm::GradeTooHighException::what() const throw() {
	return message;
}

const char * AForm::GradeTooLowException::what() const throw() {
	return message;
}

const char * AForm::NotSignedException::what() const throw() {
	return message;
}