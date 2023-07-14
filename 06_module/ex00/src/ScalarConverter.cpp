
#include "../inc/ScalarConverter.hpp"

//--------------------------------Orthodox Canonical Form------------------------------------//

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {
	*this = src;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs ) {
	(void)rhs;
	return *this;
}

//----------------------------------------Parser--------------------------------------------//

std::string ScalarConverter::setType( std::string literal ) {
	int i = 0;
	while (isspace(literal[i])) {
		i++;
	}

	std::string type = "";

	if (!isdigit(literal[i]) && literal.length() == 1) {
		type = "char";
	} else {
		int dot = 0, f = 0;
		for (; i < literal.length(); i++) {
			if (
				(i > 0 && !isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
				|| (i == 0 && literal[i] != '+' && literal[i] != '-' && !isdigit(literal[i]))
				|| (literal[i] == '.' && i == literal.length() - 1)
				|| (literal[i] == 'f' && i < literal.length() - 1)
				) {
				std::cout << "Invalid value." << std::endl;
				return type;
			}
			if (literal[i] == '.') {
				dot++;
				continue ;
			}
			if (literal[i] == 'f') {
				f++;
			}
		}
		if (dot == 0 && f == 0 && !ScalarConverter::checkLimits(literal)) {
			type = "int";
		} else if (dot == 1 && f == 0) {
			type = "double";
		} else if (dot == 1 && f == 1) {
			type = "float";
		} else {
			std::cout << "Invalid value." << std::endl;
			return type;
		}
	}
	return type;
}

int ScalarConverter::checkLimits( std::string literal ) {

	if (((literal[0] == '+' || literal[0] == '-') && literal.length() > 11) 
		|| (!literal[0] == '+' && !literal[0] == '-' && literal.length() > 10)
		|| (literal.length() == 10 && literal.compare("2147483647") > 0)
		|| (literal.length() == 11 && literal[0] == '+' && literal.compare("+2147483647") > 0)
		|| (literal.length() == 11 && literal[0] == '-' && literal.compare("-2147483648") > 0)) {
		return 1;
	}
	return 0;
}

int ScalarConverter::pseudoLiterals( std::string literal ) {

	if (!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("nanf")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.erase(literal.length() - 1) << std::endl;
		return 1;
	} else if (!literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("nan")) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal.append("f") << std::endl;
		std::cout << "double: " << literal.erase(literal.length() - 1) << std::endl;
		return 1;
	} else {
		return 0;
	}
	
}

//----------------------------------Explicit Conversions--------------------------------------//

void	ScalarConverter::engine( char literal) {
	std::cout << "char: " << literal << std::endl;
	std::cout << "int: " << static_cast<int>(literal) << std::endl;
	std::cout << "float: " << static_cast<float>(literal) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal) << ".0" << std::endl;
}

void ScalarConverter::engine( int literal ) {
	if ((literal >= 0 && literal < 33) || literal == 127) {
		std::cout << "char: Non displayable" << std::endl;
	} else if (literal < 0 || literal > 127) {
		std::cout << "char: impossible" << std::endl;
	} else {
		std::cout << "char: " << static_cast<char>(literal) << std::endl;
	}
	std::cout << "int: " << literal << std::endl;
	std::cout << "float: " << static_cast<float>(literal) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal) << ".0" << std::endl;
}
void ScalarConverter::engine( float literal ) {
	if ((literal >= 0 && literal < 33) || literal == 127) {
		std::cout << "char: Non displayable" << std::endl;
	} else if (literal < 0 || literal > 127) {
		std::cout << "char: impossible" << std::endl;
	} else {
		std::cout << "char: " << static_cast<char>(literal) << std::endl;
	}
	std::cout << "int: ";
	if (literal <= -2147483648.f || literal >= 2147483647.f) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(literal) << std::endl;
	}
	std::cout << "float: " << literal << (literal == static_cast<int>(literal) ? ".0" : "") << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal) << (literal == static_cast<int>(literal) ? ".0" : "") << std::endl;
}

void ScalarConverter::engine( double literal ) {
	if ((literal >= 0 && literal < 33) || literal == 127) {
		std::cout << "char: Non displayable" << std::endl;
	} else if (literal < 0 || literal > 127) {
		std::cout << "char: impossible" << std::endl;
	} else {
		std::cout << "char: " << static_cast<char>(literal) << std::endl;
	}
	std::cout << "int: ";
	if (literal <= -2147483648.0 || literal >= 2147483647.0) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(literal) << std::endl;
	}
	std::cout << "float: " << static_cast<float>(literal) << (literal == static_cast<int>(literal) ? ".0" : "") << "f" << std::endl;
	std::cout << "double: " << literal << (literal == static_cast<int>(literal) ? ".0" : "") << std::endl;
}

//------------------------------------Conversion Manager--------------------------------------------//

void ScalarConverter::convert( std::string literal ) {
	if (literal.empty()) {
		std::cout << "Impossible conversion!" << std::endl;
		return ;
	}

	if (ScalarConverter::pseudoLiterals(literal)) {
		return ;
	}

	std::string type = ScalarConverter::setType(literal);
	
	if (type.empty()) {
		return ;
	} else {
		if (!type.compare("int")) {
			ScalarConverter::engine(atoi(literal.c_str()));
		} else if (!type.compare("float")) {
			ScalarConverter::engine(strtof(literal.c_str(), NULL));
		} else if (!type.compare("double")) {
			ScalarConverter::engine(strtod(literal.c_str(), NULL));
		} else {
			ScalarConverter::engine(literal[0]);
		}
	}
}