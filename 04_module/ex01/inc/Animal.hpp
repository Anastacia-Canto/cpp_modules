
#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {

    protected:
        std::string type;
    
    public:
        Animal( void );
        virtual ~Animal( void );
        Animal( Animal const & src );
        Animal & operator=( Animal const & rhs );
        virtual void makeSound( void ) const = 0;

        std::string getType( void ) const;

};

#endif