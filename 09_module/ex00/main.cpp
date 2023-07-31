
#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {

	if (argc != 2) {
		std::cout << "Error: could not open file" << std::endl;
	} else {

		std::ofstream file(argv[1]);

		if(file.is_open()) {
			BitcoinExchange::getValues(file);
		}
		file.close();
	}

	return 0;
}