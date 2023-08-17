
#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

#include <iostream>
#include <string>
#include <stack>


template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

	public:
		MutantStack (void) : std::stack<T, C>() {}

		~MutantStack(void) {}

		MutantStack(MutantStack const & src) : std::stack<T, C>(src) {}

		MutantStack & operator=(MutantStack const & rhs) {
			this->c = rhs.c;
			return *this;
		}

		typedef typename std::stack<T, C>::container_type::iterator iterator;

		iterator begin(void) {
			return this->c.begin();
		}

		iterator end(void) {
			return this->c.end();
		}


};



#endif