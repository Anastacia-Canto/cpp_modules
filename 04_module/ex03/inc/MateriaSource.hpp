
#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

#include "../inc/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	private:
		AMateria	*_memory[4];

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource & operator=( MateriaSource const & rhs );
		~MateriaSource( void );
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);


};


#endif