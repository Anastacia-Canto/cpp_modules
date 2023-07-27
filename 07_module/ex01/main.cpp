
#include "iter.hpp"

int main(void){

	int ints [] = {1, 2, 3, 4, 5};
	::iter(ints, 5, ::print);

	std::cout << "---------------" << std::endl;

	char characters [] = {'a', 'b', 'c'};
	::iter(characters, 3, ::print);

	std::cout << "---------------" << std::endl;

	std::string strings [] = {"Java", "Python", "Javascript", "C"};
	::iter(strings, 4, ::print);

	return 0;
}