
#ifndef _SPAN_HPP_
# define _SPAN_HPP_


#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

class Span {

	private:
		unsigned int _max;
		std::vector<int> _myInts;
		std::vector<int>::iterator _pos;
		
	
	public:
		Span(unsigned int n);
		~Span(void);
		Span(Span const & src);
		Span & operator=(Span const & rhs);

		unsigned int getMax(void) const;
		void addNumber(int num);
		int shortestSpan(void);
		int longestSpan(void);
		void addManyNumbers(unsigned int n);

		class SpanException : public std::exception {
			private:
				const char * _message;
			public:
				SpanException( const char *msg ) : _message(msg) {}
				const char* what() const throw(); 
		};

};

#endif