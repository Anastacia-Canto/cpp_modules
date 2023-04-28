
#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

#include "../inc/WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:
        WrongCat( void );
        ~WrongCat( void );
        void makeSound( void ) const;
};

#endif