
#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat{

	protected:
		const std::string _name;
		int	_grade;


	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade );
		virtual ~Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat & operator=( Bureaucrat const & rhs );

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void	increment( int value );
		void	decrement( int value );
		void	signForm( AForm & form );
		void	executeForm( AForm const & form );

		class GradeTooHighException: public std::exception {
			private:
				const char * message;
			public:
				GradeTooHighException( const char * msg ) : message(msg) {} 
				const char * what () const throw(); 
		};

		class GradeTooLowException: public std::exception {
			private:
				const char * message;

			public:
				GradeTooLowException( const char * msg ) : message(msg) {}
				const char * what () const throw(); 
		};

};

std::ostream & operator<<( std::ostream & out, Bureaucrat const & rhs);

#endif