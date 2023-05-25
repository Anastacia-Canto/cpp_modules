
#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

	private:
		std::string	_target;
	
	public:
		RobotomyRequestForm( std::string target );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

		std::string	getTarget( void ) const ;
		void execute( Bureaucrat const & executor ) const ;
};

#endif;