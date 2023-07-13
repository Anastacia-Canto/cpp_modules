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
        virtual ~Dog( void );
        Dog( Dog const & src );
        Dog & operator=( Dog const & rhs );
        virtual void makeSound( void ) const;
        Brain & getBrain( void ) const;
};


#endif