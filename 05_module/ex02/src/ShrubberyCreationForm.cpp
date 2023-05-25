
#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target), AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "Constructor called." << std::endl;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) 
: _target(src.getTarget()), AForm("ShrubberyCreationForm", src.getGradeSign(), src.getGradeExecute()) {
	std::cout << "Copy constructor called." << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	
		std::string fileName = this->_target + "_shrubbery.txt";

		std::ofstream file(fileName);

		file << "                                  # #### ####" << std::endl;
		file << "                                ### \/#|### |/####" << std::endl;
		file << "                               ##\/#/ \||/##/_/##/_#" << std::endl;
		file << "                             ###  \/###|/ \/ # ###" << std::endl;
		file << "                           ##_\_#\_\## | #/###_/_####" << std::endl;
		file << "                          ## #### # \ #| /  #### ##/##" << std::endl;
		file << "                           __#_--###`  |{,###---###-~" << std::endl;
		file << "                                     \ }{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                 ejm  {{}" << std::endl;
		file << "                                , -=-~{ .-^- _" << std::endl;
		file << "                                      `}" << std::endl;
		file << "                                       {" << std::endl;

		file.close();
	


}