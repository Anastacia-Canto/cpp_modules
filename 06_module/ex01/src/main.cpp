
#include "../inc/Serializer.hpp"

int main( void ) {

	Data *data = new Data;

	data->name = "Anastacia";
	data->age = 33;

	uintptr_t serial = Serializer::serialize(data);

	Data *deserial = Serializer::deserialize(serial);

	std::cout << "Original: " << std::endl;
	std::cout << "Name: " << data->name << "  Age: " << data->age << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Deserialized: " << std::endl;
	std::cout << "Name: " << deserial->name << "  Age: " << deserial->age << std::endl;

	delete data;

	return 0;
}