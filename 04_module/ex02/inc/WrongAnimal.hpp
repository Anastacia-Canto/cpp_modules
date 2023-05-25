
#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {

    protected:
        std::string type;
    
    public:
        WrongAnimal( void );
		WrongAnimal( std::string type );
        ~WrongAnimal( void );
        WrongAnimal( WrongAnimal const & src );
        WrongAnimal & operator=( WrongAnimal const & rhs );
        void makeSound( void ) const;

        std::string getType( void ) const;

};

#endif