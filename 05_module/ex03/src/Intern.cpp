
#include "../inc/Intern.hpp"

Intern::Intern( void ) {
    this->forms[0] = &Intern::createShrubbery;
    this->forms[1] = &Intern::createRobot;
    this->forms[2] = &Intern::createPresident;
    std::cout << "Constructor called" << std::endl;
}

Intern::~Intern( void ) {
    std::cout << "Destructor called." << std::endl;
}

Intern::Intern( Intern const & src ) {
    *this = src;
}

Intern & Intern::operator=( Intern const & rhs ) {
    return *this;
}

AForm*  Intern::createShrubbery( std::string target ) {
    return new ShrubberyCreationForm(target);
}

AForm*  Intern::createRobot( std::string target ) {
    return new RobotomyRequestForm(target);
}

AForm*  Intern::createPresident( std::string target ) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm( std::string form, std::string target ) {
    std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;

    while (i < 3) {
        if (!form.compare(forms[i])) {
            break ;
        }
        i++;
    }
    
    try {
        std::cout << "Intern creates " << forms[i] << std::endl;
        return ((this->*forms[i])(target));
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return NULL;
}