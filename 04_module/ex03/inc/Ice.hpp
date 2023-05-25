
#ifndef _ICE_HPP_
# define _ICE_HPP_

#include "AMateria.hpp"

class Ice: public AMateria {

	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const & src );
		Ice & operator=( Ice const & rhs );
		AMateria* clone() const;
		void use(ICharacter& target);

};



#endif