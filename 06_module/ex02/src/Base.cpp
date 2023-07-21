
#include "../inc/Base.hpp"

Base::~Base( void ) {}


Base * Base::generate(void) {
	Base* generated;

	int num = std::rand() % 3;

	switch(num) {
		case 0:
			generated = new A;
			std::cout << "Generating class A" << std::endl;
			break;
		case 1:
			generated = new B;
			std::cout << "Generating class B" << std::endl;
			break;
		case 2:
			generated = new C;
			std::cout << "Generating class C" << std::endl;
			break;
	}
	return generated;
}

void Base::identify(Base* p) {

	try {

		if (dynamic_cast<A*>(p) != NULL) {
			std::cout << "Checking by POINTER -- type: A" << std::endl;
			return ;
		} 
		else if (dynamic_cast<B*>(p) != NULL) {
			std::cout << "Checking by POINTER -- type: B" << std::endl;
			return ;
		} 
		else if (dynamic_cast<C*>(p) != NULL) {
			std::cout << "Checking by POINTER -- type: C" << std::endl;
			return ;
		} 

	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void Base::identify(Base& p) {

	try {

		A a = dynamic_cast<A&>(p);
		std::cout << "Checking by REFERENCE -- type: A" << std::endl;
		return ;
		
	} catch (const std::exception& e) {
		try {

		B b = dynamic_cast<B&>(p);
		std::cout << "Checking by REFERENCE -- type: B" << std::endl;
		return ;
		
		} catch (const std::exception& e) {
			try {

			C c = dynamic_cast<C&>(p);
			std::cout << "Checking by REFERENCE -- type: C" << std::endl;
			return ;
		
			} catch (const std::exception& e) {
				std::cout << "Exception: " << e.what() << std::endl;
				return ;
			}
		}
	}

	

	
}