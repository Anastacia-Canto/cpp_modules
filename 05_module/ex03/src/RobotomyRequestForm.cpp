
#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
: _target(target), AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "Robotomy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "Robotomy destructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) 
: _target(src.getTarget()), AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "Robotomy copy constructor called." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {
	return this->_target;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	
	if (checkRequirements(executor.getGrade())) {

		std::cout << "DRILLING NOISES " << std::endl;

		static int i;

		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy has failed." << std::endl;
		i++;
	} 
}