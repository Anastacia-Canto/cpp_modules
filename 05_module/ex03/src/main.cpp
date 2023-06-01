
#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int     main( void ) {
    
    Intern  someRandomIntern;

    AForm*  srf;

    try {
        srf = someRandomIntern.makeForm("RobotomyRequestForm", "robot");
        
        if (srf) {
            std::cout << *srf << std::endl;
            Bureaucrat bubu("bubu", 150);
            std::cout << bubu << std::endl;

            bubu.signForm(*srf);
            std::cout << *srf << std::endl;
            bubu.executeForm(*srf);
            delete srf;
        }

    } catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0; 
}