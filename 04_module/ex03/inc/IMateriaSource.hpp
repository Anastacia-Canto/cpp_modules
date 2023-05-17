
#ifndef _IMATERIASOURCE_HPP_
# define _IMATERIASOURCE_HPP_

#include "../inc/AMateria.hpp"

class AMateria;

class IMateriaSource {

	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif