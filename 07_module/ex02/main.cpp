
#include "Array.hpp"


int main(void) {

	Array <int> arr1 (3);

	for (int i = 0; i < 3; i++) {
		arr1[i] = i + 1;
	}

	std::cout << "Printing arr1:" << std::endl;
	for (int i = 0; i < static_cast<int>(arr1.size()); i++) {
		std::cout << arr1[i] << std::endl;
	}

	Array <int> arr2;
	arr2.operator=(arr1);
	std::cout << "Printing arr2:" << std::endl;
	for (int i = 0; i < static_cast<int>(arr2.size()); i++) {
		std::cout << arr2[i] << std::endl;
	}


	// need more tests

	


	return 0;
}