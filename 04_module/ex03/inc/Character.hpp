
#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

#include "ICharacter.hpp"

class Character: public ICharacter {

	private:
		std::string _name;
		AMateria	*_inventory[4];
		AMateria	*_garbage[4];

	public:
		Character( void );
		Character( std::string name );
		Character( Character const & src );
		Character & operator=( Character const & rhs );
		~Character( void );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria*	getSlot( int i) const;

};

#endif