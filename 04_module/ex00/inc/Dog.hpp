
#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "../inc/Animal.hpp"

class Dog: public Animal {

    public:
        Dog( void );
        ~Dog( void );
        virtual void makeSound( void ) const;
};


#endif