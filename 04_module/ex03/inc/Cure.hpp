

#ifndef _CURE_HPP_
# define _CURE_HPP_

#include "AMateria.hpp"

class Cure: public AMateria {

	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const & src );
		Cure & operator=( Cure const & rhs );
		AMateria* clone() const;
		void use(ICharacter& target);

};



#endif