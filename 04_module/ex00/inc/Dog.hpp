
#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "../inc/Animal.hpp"

class Dog: public Animal {

    public:
        Dog( void );
        virtual ~Dog( void );
        Dog( Dog const & src );
        Dog & operator=( Dog const & rhs );
        void makeSound( void ) const;
};


#endif