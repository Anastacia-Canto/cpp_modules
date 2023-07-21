
#include "../inc/Base.hpp"

int main(void) {

	for (int i = 1; i <= 10; i++) {
		std::cout << "[[ Test " << i << " ]]" << std::endl;
		Base* base = NULL;
		base = base->generate();
		base->identify(base);
		base->identify(*base);
		delete base;

		std::cout << "-----------------------------------------" << std::endl;
	}

	return 0;

}