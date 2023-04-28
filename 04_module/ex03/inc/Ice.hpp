
#ifndef _ICE_HPP_
# define _ICE_HPP_

#include "../inc/AMateria.hpp"

class Ice: public AMateria {

	public:
		Ice( void );
		~Ice( void );
		AMateria* clone() const;
		virtual void use(ICharacter& target);

};



#endif