
#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data {
	std::string	name;
	int			age;
} Data;

class Serializer {

	public:
		Serializer( void );
		~Serializer( void );
		Serializer( Serializer const & src );
		Serializer & operator=( Serializer const & rhs );

		static uintptr_t serialize( Data* ptr );
		static Data* deserialize( uintptr_t raw );

};


#endif