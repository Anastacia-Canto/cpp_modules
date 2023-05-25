
#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {

	private:
		std::string	_target;

	public:
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

		std::string	getTarget( void ) const ;
		void execute( Bureaucrat const & executor ) const ;

};


#endif;