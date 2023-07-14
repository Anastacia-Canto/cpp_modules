
#ifndef _BASE_HPP_
# define _BASE_HPP_

#include <iostream>
#include <string>

class Base {

	public:
		virtual ~Base( void );

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

#endif