
#ifndef _AFORM_HPP_
# define _AFORM_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	protected:
		AForm( const std::string name, const int sign, const int execute );
		AForm( AForm const & src );
		AForm & operator=( AForm const & rhs );


	public:
		virtual ~AForm( void );
		std::string getName( void ) const;
		bool getIsSigned( void ) const;
		int	getGradeSign( void ) const;
		int getGradeExecute( void ) const;
		virtual void execute( Bureaucrat const & executor ) const = 0;

		void	beSigned( Bureaucrat const & bureaucrat );
		bool	checkRequirements( int grade ) const;

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

		class NotSignedException : public std::exception {
			private:
				const char	*message;

			public:
				NotSignedException(const char * msg) : message(msg) {}
				const char * what() const throw();
		};

};

std::ostream & operator<<( std::ostream & out, AForm const & rhs );

#endif