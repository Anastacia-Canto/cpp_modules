
#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {

	private:
		std::string _ideas[100];
		int			_index;

	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const & src );
		Brain & operator=( Brain const & rhs );
		std::string getIdeas( int i ) const;
		void	setIdeas( std::string idea );
		void	read( void );

};


#endif