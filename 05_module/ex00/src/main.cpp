
#include "../inc/Bureaucrat.hpp"


int	main(void) {

	try {

		Bureaucrat bureaucrat("bubu", 2);

		std::cout << bureaucrat << std::endl;

		// bureaucrat.decrement(150);
		bureaucrat.increment(2);

		std::cout << bureaucrat << std::endl;
		
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	return 0; 

}