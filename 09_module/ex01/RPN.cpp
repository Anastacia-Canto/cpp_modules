
#include "RPN.hpp"

RPN::RPN(void) {}
RPN::~RPN(void) {}
RPN::RPN(RPN const & src) { *this = src; }
RPN & RPN::operator=(RPN const & rhs) { (void)rhs; return *this; }

bool RPN::checkInput(char * input) {

	std::string testInput(input);
	int countErrors = 0;

	const char * ctestInput = testInput.c_str();
	for (unsigned int i = 0; i < testInput.length(); i++) {
		if (isdigit(ctestInput[i]) == 0 && ctestInput[i] != '+' 
			&& ctestInput[i] != '-' && ctestInput[i] != '*' 
			&& ctestInput[i] != '/' && ctestInput[i] != ' ') {
			countErrors++;
		}
	}

	if (countErrors > 0) {
		std::cout << "Error" << std::endl;
		return false;
	}
	return true;
}

int RPN::sum(int a, int b) { return a + b; }
int RPN::multiply(int a, int b) { return a * b; }
int RPN::subtract(int a, int b) { return a - b; }
int RPN::divide(int a, int b) { return a / b; }

void RPN::calculate(char * input) {

	if (checkInput(input)) {
		std::deque<int> numbers;
		size_t len = std::strlen(input);
		char c;
		int num1, num2, result;
		
		for (size_t i = 0; i < len; i++) {
			c = input[i];
			if (c == ' ') {
				continue ;
			} else if (isdigit(c) != 0) {
				numbers.push_back(c - '0');
			} else if ((c == '+' || c == '-' || c == '*' || c == '/') && numbers.size() >= 2) {
				num2 = numbers.back();
				numbers.pop_back();
				num1 = numbers.back();
				numbers.pop_back();
				if (c == '+') { result = sum(num1, num2); }
				else if (c == '-') { result = subtract(num1, num2); }
				else if (c == '*') { result = multiply(num1, num2); }
				else if (c == '/') { result = divide(num1, num2); }
				numbers.push_back(result);
			} else {
				std::cout << "Error" << std::endl;
				return ;
			}
			
		}
		
		std::cout << result << std::endl;
		
	}
	return ;
}