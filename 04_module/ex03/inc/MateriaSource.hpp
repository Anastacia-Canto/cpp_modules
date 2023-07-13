
#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	private:
		AMateria	*_memory[4];

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource & operator=( MateriaSource const & rhs );
		virtual ~MateriaSource( void );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		AMateria* getMateriaSource( int i ) const ;


};


#endif