
#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include <string>

class Bureaucrat{

	private:
		std::string _name;
		int	_grade;


	public:
		Bureaucrat( std::string name, int grade );
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat & operator=( Bureaucrat const & rhs );

		std::string getName( void ) const ;
		int getGrade( void ) const ;
		void	increment( int value );
		void	decrement( int value );

		class GradeTooHighException: public std::exception {
			
		};

		class GradeTooLowException: public std::exception {
			
		};

};

std::ostream & operator<<( std::ostream out, Bureaucrat const & rhs);

#endif