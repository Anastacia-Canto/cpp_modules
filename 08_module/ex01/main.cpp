
#include "Span.hpp"

int main() {

	Span sp = Span(5);
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		// sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span bigOne = Span(10000);

	try {
		bigOne.addManyNumbers(10000);

		std::cout << bigOne.shortestSpan() << std::endl;
		std::cout << bigOne.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Span copy = sp;
	// try {
	// 	std::cout << copy.shortestSpan() << std::endl;
	// 	std::cout << copy.longestSpan() << std::endl;
	// } catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }

	return 0;
}