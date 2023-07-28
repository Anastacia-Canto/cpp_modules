
#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) {

	int myInts [] = {3, 7, 9, 2, 5};
	std::vector<int> myVectorInts(myInts, myInts + (sizeof(myInts) / sizeof(int)));
	
	std::list<int> myListInts;
	for (int i = 0; i < 10; i++) {
		myListInts.push_back(i + 1);
	}
	
	try {
		std::cout << "testing vector: " << std::endl;
		::easyfind(myVectorInts, 10);

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