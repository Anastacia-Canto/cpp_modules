
#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int     main( void ) {
    try {
        /*--- Presidential Pardon ---*/
        std::cout << "Presidential Form Test" << std::endl;

		Bureaucrat b1("bubu", 20);

		std::cout << b1 << std::endl;

		PresidentialPardonForm pdForm("Ford");
		
        b1.signForm(pdForm);

		std::cout << pdForm << std::endl;

        b1.executeForm(pdForm);

        /*--- Robotomy Request ---*/
        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "Robotomy Request Test" << std::endl;

        Bureaucrat b2("toto", 72);

        std::cout << b2 << std::endl;

        RobotomyRequestForm robot("Marvin");

        b2.signForm(robot);

        std::cout << robot << std::endl;

        b2.executeForm(robot);

        /*--- Shrubbery Creation ---*/

                std::cout << "--------------------------------------------" << std::endl;
        std::cout << "Shrubbery Creation Test" << std::endl;

        Bureaucrat b3("lili", 140);

        std::cout << b3 << std::endl;

        ShrubberyCreationForm susu("sequoia");

        b3.signForm(susu);

        std::cout << susu << std::endl;

        b3.executeForm(susu);

		
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}


	return 0; 
}