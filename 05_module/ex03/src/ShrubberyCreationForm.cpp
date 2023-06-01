
#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target), AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "Shrubbery constructor called." << std::endl;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Shrubbery destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) 
: _target(src.getTarget()), AForm("ShrubberyCreationForm", src.getGradeSign(), src.getGradeExecute()) {
	std::cout << "Shrubbery copy constructor called." << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	
	if (checkRequirements(executor.getGrade())) {

		std::string fileName = this->_target + "_shrubbery.txt";

		std::ofstream file(fileName);

		file << "                                  # #### ####" << std::endl;
		file << "                                ### v/#|### |/####" << std::endl;
		file << "                               ##v/#/ v||/##/_/##/_#" << std::endl;
		file << "                             ###  v/###|/ v/ # ###" << std::endl;
		file << "                           ##_v_#v_v## | #/###_/_####" << std::endl;
		file << "                          ## #### # v #| /  #### ##/##" << std::endl;
		file << "                           __#_--###`  |{,###---###-~" << std::endl;
		file << "                                     v }{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                 ejm  {{}" << std::endl;
		file << "                                , -=-~{ .-^- _" << std::endl;
		file << "                                      `}" << std::endl;
		file << "                                       {" << std::endl;

		file.close();
	} 
}