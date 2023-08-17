
#include "../inc/Intern.hpp"

Intern::Intern( void ) {
    this->forms[0] = &Intern::createShrubbery;
    this->forms[1] = &Intern::createRobot;
    this->forms[2] = &Intern::createPresident;
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern( void ) {
    std::cout << "Intern destructor called." << std::endl;
}

Intern::Intern( Intern const & src ) {
    *this = src;
}

Intern & Intern::operator=( Intern const & rhs ) {
    (void)rhs;
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

const char * Intern::NotFoundException::what() const throw() {
	return message;
}

AForm* Intern::makeForm( std::string form, std::string target ) {
    std::string standardForms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;

    while (i < 3) {
        if (!form.compare(standardForms[i])) {
            break ;
        }
        i++;
    }

    if (i == 3) {
        throw NotFoundException("Form not found");
        return NULL;
    }
    
    std::cout << "Intern creates " << standardForms[i] << std::endl;
    return ((this->*Intern::forms[i])(target));
   
}