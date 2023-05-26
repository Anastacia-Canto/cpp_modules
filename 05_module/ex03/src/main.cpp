
#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int     main( void ) {
    
    Intern  someRandomIntern;

    AForm*  srf;

    srf = someRandomIntern.makeForm("RobotomyRequestForm", "robot");
    delete srf;

	return 0; 
}