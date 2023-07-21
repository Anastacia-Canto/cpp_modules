
#ifndef _SCALARCONVERTER_HPP_
# define _SCALARCONVERTER_HPP_

#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
// #include <typeinfo> << typeid(actualLiteral).name()

class ScalarConverter {

	private:
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( ScalarConverter const & src );
		ScalarConverter & operator=( ScalarConverter const & rhs );

	public:

		static void convert( std::string literal );

		static std::string setType( std::string literal );
		static int pseudoLiterals( std::string literal );
		static int checkLimits( std::string literal );

		static void engine( char literal );
		static void engine( int literal );
		static void engine( float literal );
		static void engine( double literal );

};

#endif