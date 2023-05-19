
#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "../inc/Animal.hpp"

class Cat: public Animal {

    public:
        Cat( void );
        ~Cat( void );
        Cat( Cat const & src );
        Cat & operator=( Cat const & rhs );
        void makeSound( void ) const;
};

#endif