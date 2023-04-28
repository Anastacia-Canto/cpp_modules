
#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {

    protected:
        std::string type;
    
    public:
        Animal( void );
        virtual ~Animal( void ) = 0;
        Animal( Animal const & src );
        Animal & operator=( Animal const & rhs );
        virtual void makeSound( void ) const;

        std::string getType( void ) const;

};

#endif