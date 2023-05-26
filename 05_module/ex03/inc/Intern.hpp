
#ifndef _INTERN_HPP_
# define _INTERN_HPP_

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Intern {

    private:
        AForm*  (Intern::*forms[3])(std::string);
        AForm*  createShrubbery( std::string target );
        AForm*  createRobot( std::string target );
        AForm*  createPresident( std::string target );

    public:
        Intern( void );
        ~Intern( void );
        Intern( Intern const & src );
        Intern & operator=( Intern const & rhs );

        AForm* makeForm( std::string form, std::string target );
};


#endif