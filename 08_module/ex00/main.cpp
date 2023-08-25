
#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) {

	int myInts [] = {3, 7, 9, 2, 5};
	std::vector<int> myVectorInts;
	for (size_t i = 0; i < (sizeof(myInts)/sizeof(int)); i++) {
		myVectorInts.push_back(myInts[i]);
	}
	
	std::list<int> myListInts;
	for (int i = 0; i < 10; i++) {
		myListInts.push_back(i + 1);
	}
	
	try {
		std::cout << "testing vector: " << std::endl;
		::easyfind(myVectorInts, 15);

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "testing list: " << std::endl;
		::easyfind(myListInts, 5);

	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}