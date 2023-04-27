
#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "../inc/Animal.hpp"

class Cat: public Animal {

    public:
        Cat( void );
        ~Cat( void );
        virtual void makeSound( void ) const;
};

#endif