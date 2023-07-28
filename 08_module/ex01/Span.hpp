
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
#include <numeric>


class Span {

	private:
		unsigned int _max;
		unsigned int _amount;
		std::vector<int> _myInts;
		
	
	public:
		Span(unsigned int n);
		~Span(void);
		Span(Span const & src);
		Span & operator=(Span const & rhs);

		unsigned int getMax(void) const;
		unsigned int getAmount(void) const;
		const std::vector<int> getVector(void) const;
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

int randomNumber(void);

#endif