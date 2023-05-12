
#ifndef _FORM_HPP_
# define _FORM_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form( const std::string name, const int sign, const int execute );
		~Form( void );
		Form( Form const & src );
		Form & operator=( Form const & rhs );


		std::string getName( void ) const;
		bool getIsSigned( void ) const;
		int	getGradeSign( void ) const;
		int getGradeExecute( void ) const;

		void	beSigned( Bureaucrat const & bureaucrat );


		class GradeTooHighException : public std::exception {
			private:
				const char *message;
			public:
				GradeTooHighException(const char *msg) : message(msg) {}
				const char * what() const throw(); 
		};

		class GradeTooLowException : public std::exception {
			private:
				const char	*message;

			public:
				GradeTooLowException(const char * msg) : message(msg) {}
				const char * what() const throw();
		};

};

std::ostream & operator<<( std::ostream & out, Form const & rhs );

#endif