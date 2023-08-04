
#ifndef _RPN_HPP_
# define _RPN_HPP_

#include <iostream>
#include <string>
#include <cstring>
#include <deque>
#include <algorithm>
#include <stdlib.h>


class RPN {

	private:
		RPN(void);
		~RPN(void);
		RPN(RPN const & src);
		RPN & operator=(RPN const & rhs);

		static bool checkInput(char * input);

		static int sum(int a, int b);
		static int multiply(int a, int b); 
		static int subtract(int a, int b);
		static int divide(int a, int b); 

	public:
		static void calculate(char * input);


};



#endif