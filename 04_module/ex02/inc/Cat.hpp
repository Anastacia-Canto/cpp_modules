
#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Cat: public Animal {

	private:
		Brain* _brain;

    public:
        Cat( void );
        ~Cat( void );
        virtual void makeSound( void ) const;
};

#endif