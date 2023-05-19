
#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

#include "../inc/WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:
        WrongCat( void );
        ~WrongCat( void );
        WrongCat( WrongCat const & src );
        WrongCat & operator=( WrongCat const & rhs );
        void makeSound( void ) const;
};

#endif