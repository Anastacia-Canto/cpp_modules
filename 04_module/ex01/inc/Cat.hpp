
#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Cat: public Animal {

	private:
		Brain* _brain;

    public:
        Cat( void );
        ~Cat( void );
        Cat( Cat const & src );
        Cat & operator=( Cat const & rhs );
        void makeSound( void ) const;
		Brain & getBrain( void );
};

#endif