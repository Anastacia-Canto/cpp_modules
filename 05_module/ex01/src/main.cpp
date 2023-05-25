
#include "../inc/Bureaucrat.hpp"


int	main(void) {

	try {

		Bureaucrat bureaucrat("bubu", 2);
		// bureaucrat.decrement(100);

		std::cout << bureaucrat << std::endl;

		Form form("my form", 100, 100);
		bureaucrat.signForm(form);

		std::cout << form << std::endl;
		
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	return 0; 

}