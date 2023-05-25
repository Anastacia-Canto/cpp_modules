
#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <iostream>
#include <string>
#include "Brain.hpp"

class Brain;

class Animal {

    protected:
        std::string type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );
        Animal( Animal const & src );
        Animal & operator=( Animal const & rhs );
        virtual void makeSound( void ) const ;

        std::string getType( void ) const;
		void openBrain( Brain & brain  ) const ;
        void keepIdeas( Brain & brain, std::string idea );

};

#endif