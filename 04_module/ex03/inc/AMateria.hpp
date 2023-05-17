
#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

#include <iostream>
#include <string>
#include "../inc/ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;

	public:
		AMateria( void );
		AMateria(std::string const & type);
		~AMateria( void );
		AMateria( AMateria const & src );
		AMateria & operator=( AMateria const & rhs );
	
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif