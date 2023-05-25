
#include "../inc/Brain.hpp"

Brain::Brain( void ) {
	this->_index = 0;
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain( Brain const & src ) {
	*this = src;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain & Brain::operator=( Brain const & rhs ) {
	for ( int i = 0; i < this->_ideas->size(); i++) {
		this->_ideas[i] = rhs.getIdeas(i);
	}
	std::cout << "Brain assignment operator called." << std::endl;
	return *this;
}

std::string Brain::getIdeas( int i ) const {
	return this->_ideas[i];
}

void	Brain::setIdeas( std::string idea ) {
	this->_ideas[this->_index] = idea;
	this->_index++;
}

void	Brain::read( void ) {
	for (int i = 0; i < 100; i++) {
        if (!this->_ideas[i].empty()) {
            std::cout << this->_ideas[i] << std::endl;
        }
    }
}