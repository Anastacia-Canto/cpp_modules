
#include "../inc/Serializer.hpp"

Serializer::Serializer( void ) {}

Serializer::~Serializer( void ) {}

Serializer::Serializer( Serializer const & src ) {
	*this = src;
}

Serializer & Serializer::operator=( Serializer const & rhs ) {
	return *this;
}


uintptr_t Serializer::serialize( Data* ptr ) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data *>(raw);
}