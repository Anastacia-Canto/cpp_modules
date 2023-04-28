
#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Dog: public Animal {

	private:
		Brain* _brain;	

    public:
        Dog( void );
        ~Dog( void );
        virtual void makeSound( void ) const;
};


#endif