
#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog: public Animal {

	private:
		Brain* _brain;	

    public:
        Dog( void );
        ~Dog( void );
        Dog( Dog const & src );
        Dog & operator=( Dog const & rhs );
        void makeSound( void ) const;
        void openBrain( void ) const ;
        void keepIdeas( std::string idea );
};


#endif