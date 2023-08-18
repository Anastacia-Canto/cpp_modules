
#ifndef _BASE_HPP_
# define _BASE_HPP_

#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <exception>

class Base {

	public:
		virtual ~Base( void );

		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


#endif