

#ifndef _CURE_HPP_
# define _CURE_HPP_

#include "../inc/AMateria.hpp"

class Cure: public AMateria {

	public:
		Cure( void );
		~Cure( void );
		AMateria* clone() const;
		virtual void use(ICharacter& target);

};



#endif