
#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;

	public:
		AMateria( void );
		AMateria(std::string const & type);
		virtual ~AMateria( void );
		AMateria( AMateria const & src );
		AMateria & operator=( AMateria const & rhs );
	
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif